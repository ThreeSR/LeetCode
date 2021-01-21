class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {  // 动态规划
        int n = stones.size();
        vector<int> dp(15000, 0); // 这个数字是根据题目的数据范围得到的
        int totalWeight = 0;
        for (int weight : stones) {
            totalWeight += weight;
        }
        int target = totalWeight / 2; // 我们需要建立一个dp[j]，使得dp[j]是背包重量为j的情况下对应的最大价值。
        // 巧的是这道题中，对于石头而言，价值和重量是一个东西。我们希望得到：对于一个限重为target的背包，如何用
        // 现有的石头去尽量填充。之后将背包中的石头和剩余石头（totalWeight - dp[target]）对撞（相减），得到结果。
        for (int i = 0; i < n; i++) {
            for (int j = target; j >= stones[i]; j--) { // 注意，这里j要大于等于的是stones[i]不是stones[0]，这里和之前背包问题的初始化不同。
                dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
            }
        }
        return totalWeight - dp[target] - dp[target]; // 返回“对撞”（相减）结果，注意：这里totalWeight - dp[target]会大于等于dp[target]，因为dp[target]被建模成了背包问题
        // 背包问题中，物品重量不能大于背包容量。
    }
};

// reference https://mp.weixin.qq.com/s/WbwAo3jaUaNJjvhHgq0BGg
// 那么，为什么要这样建模成背包问题呢？
/*
如果以一种非常vanilla的想法，那就直接让这些石头随意碰撞不就好了？
很明显，如果漫无目的地碰撞，很难得到最优情况。对于四块石头：2 1 1 4而言，如果随便撞，你可以得到：0 4 2的结果，显然0是最优。
那我们如果得到一个方法论，去指导我们粉碎石头？
根据题意，我们希望得到两块一模一样的石头，这样就粉碎干净了。运用这个思路，我们希望对石头进行分堆，使得两堆重量和总重的一半尽可能接近。
比如上面分堆，显然是 1 1 2一堆，4自己一堆，这样结果为0. 如果不按照对半分堆，比如 1 1一堆，2 4一堆，结果就是4，简直糟透了。
所以，我们可以这样建模：假设有一个背包，我们要从石头堆里面挑石头，使得它们的重量尽可能接近背包重量——石头总重一半。得到这样的一堆石头，
放进背包中，和背包外面的进行对撞，得到粉碎的最佳结果。
这样一来，这道题目变成了经典0 1背包问题，套用模板就可以求解。
*/