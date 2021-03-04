class Solution {
public:
    int maxProfit(vector<int>& prices) { // 动态规划  本题和LC121基本一致，唯一不同在于“可以多次交易”，但每次交易只能一笔股票。
        int len = prices.size();
        vector<vector<int>> dp(len, vector<int>(2, 0));
        dp[0][0] -= prices[0];  // 关于动归的思路完全是一致的
        dp[0][1] = 0;
        for (int i = 1; i < len; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]); // 注意这里是和121. 买卖股票的最佳时机唯一不同的地方。不同的原因在于可以多次交易
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        }
        return dp[len - 1][1];
    }
};

// reference https://mp.weixin.qq.com/s/d4TRWFuhaY83HPa6t5ZL-w