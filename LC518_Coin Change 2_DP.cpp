class Solution {
public:
    int change(int amount, vector<int>& coins) { // 完全背包
        vector<int> dp(amount + 1, 0);
        dp[0] = 1; // 初始化
        for (int i = 0; i < coins.size(); i++) {
            for (int j = coins[i]; j <= amount; j++) {
                dp[j] += dp[j - coins[i]]; // 本题要求的是组合数，所以用这个递推公式。相似的内容在LC494目标和中也有出现
            }
        }
        return dp[amount];
    }
};

/*
本题代码很精简，但是有一些问题值得注意：
1.递推公式是求组合数的递推公式，不是一般的模板；
2.一般的完全背包问题，两个for循环可以互换位置，但是本题不可以。原因就是求的是组合数。
如果只在乎一步步最大化之后的结果，那么for循环没影响；但这里需要组合数，那么就需要外层for循环是
coin，内层是amount；如果反过来，求的就是排列数。
具体原因见链接： https://mp.weixin.qq.com/s/PlowDsI4WMBOzf3q80AksQ
也可以自己打印dp数组看看
*/