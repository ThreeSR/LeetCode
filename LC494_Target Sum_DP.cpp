class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) { // 本题十分巧妙，关键在于对背包重量的寻找，0-1背包问题的建模。
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        if (S > sum) return 0; // 注意特判
        if ((sum + S) % 2 == 1) return 0;
        int bagSize = (sum + S) / 2;
        vector<int> dp(bagSize + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = bagSize; j >= nums[i]; j--) {
                dp[j] = dp[j] + dp[j - nums[i]]; // 这里的递推公式和模板不同，主要原因在于题目要求不同
            }
        }
        return dp[bagSize];
    }
};

// reference https://leetcode-cn.com/problems/target-sum/solution/494-mu-biao-he-01bei-bao-xiang-jie-by-ca-1kt5/
/*
这里谈谈为什么递推公式不同：
本题中，要求的是：返回可以使最终数组和为目标数 S 的所有添加符号的方法数，即方法的数量。
作为比较，取LC474——一和零为例，要求的是：请你找出并返回 strs 的最大子集的大小，即最大的情况下，集合的大小。
可以看到，本题类似于组合问题，但不同于之前用回溯法解决的组合问题，因为回溯的问题中，你需要把所有结果枚举出来，
但是本题中，你只需要给出一个结果个数，不用具体枚举。（正因为此，本题不可用回溯，会超时）
针对于这种类似于组合问题的DP，一般都是这样的递推方程：dp[j] = dp[j] + dp[j - nums[i]]; 具体解释可见链接
对于LC474,它求的是某种情况下一个最大的大小，不涉及排列组合这种类似于枚举的问题，那就是用传统的：
dp[i][j] = max(dp[i][j], dp[i - zeroNum][j - oneNum] + 1); 模板即可。
*/