class Solution {
public:
    int maxProfit(vector<int>& prices) { // 动态规划 dp[i][j]，第i天状态为j，所剩的最多现金为dp[i][j]。
        // j的状态为：0：持有股票后的最多现金  1：不持有股票（能购买）的最多现金  2：不持有股票（冷冻期）的最多现金
        int n = prices.size();
        if (n == 0) return 0; // 特判
        vector<vector<int>> dp(n, vector<int>(3, 0)); // 对于dp[0][1]和dp[0][2]，它们的初始值都是0。这其实是很有讲究的。
        // 对于dp[0][1]，讲究不是很大，就像前面的题目一样。但对于dp[0][2]：
        // 不持有股票（冷冻期）的最多现金dp[0][2]，这个状态其实是依赖前一个状态的买卖，但没有之前了。
        // 那么来看看递推公式对dp[0][2]的要求。
        // 从递推公式dp[i][2] = dp[i - 1][0] + prices[i];可以看出，dp[0][2]初始为任何数值都可以，反正dp[1][2] 要从新计算，不依赖dp[0][2]。
        // 从递归公式dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]); 可以看出，dp[0][2]只要别大于0就行，因为dp[0][1]为0，而dp[1][1]取 dp[0][1]和dp[0][2]最大值，dp[1][1]本应该是0的（第二天不持有股票（能购买）的最多现金），如果dp[0][2]初始为大于0的数值，就影响了dp[1][1]。
        // 所以理论上来说，dp[0][2]只要初始为小于等于0的任何一个数值都可以！
        // 那么我们就统一都初始为0了。
        dp[0][0] -= prices[0]; // 持股票
        for (int i = 1; i < n; i++) { // DP过程
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]); // 买入与否，持有股票
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]); // 还有购买能力，没有持有股票，说明要么保持原本状态，要么度过了冷冻期
            dp[i][2] = dp[i - 1][0] + prices[i]; // 遇到冷冻期，肯定说明之前卖了
        }
        return max(dp[n - 1][1], dp[n - 1][2]); // 因为最后不管是处在冷冻期还是非冷冻期，都有可能max profit，所以取二者的max值。
    }
};

// reference https://mp.weixin.qq.com/s/IgC0iWWCDpYL9ZbTHGHgfw