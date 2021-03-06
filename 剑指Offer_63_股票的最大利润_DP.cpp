class Solution {
public:
    int maxProfit(vector<int>& prices) { // 本题和LC121买卖股票的最佳时机一样
        if (prices.size() == 0) return 0;
        vector<vector<int>> dp(prices.size(), vector<int>(2, 0));
        dp[0][0] = -prices[0]; // 买入
        for (int i = 1; i < prices.size(); i++) { // 注意i从何处开始！从1而不是0！！
            dp[i][0] = max(dp[i - 1][0], -prices[i]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        }
        return dp[prices.size() - 1][1];
    }
};