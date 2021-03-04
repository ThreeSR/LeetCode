class Solution {
public:
    int maxProfit(vector<int>& prices) {  // 动态规划  针对股票，无非就是买卖两种操作。所以dp在设置的时候需要设置成二维数组，分别对应第i天的买（0）或卖（1）操作。
        int len = prices.size(); 
        vector<vector<int>> dp(len, vector<int>(2));
        dp[0][0] -= prices[0];  // 第一天买入
        dp[0][1] = 0; // 第一天没有持仓，所以就没有赎回
        for (int i = 1; i < len; i++) {
            dp[i][0] = max(dp[i - 1][0], -prices[i]); // 代表第i天买或者保持原有状态
            dp[i][1] = max(dp[i - 1][1], prices[i] + dp[i - 1][0]); // 赎回或者是保持原状
        }
        return dp[len - 1][1]; // 值得注意的是，最后肯定是要出售，才可以接近最佳利润。最后不能烂在手里！
    }
};

// reference https://mp.weixin.qq.com/s/keWo5qYJY4zmHn3amfXdfQ