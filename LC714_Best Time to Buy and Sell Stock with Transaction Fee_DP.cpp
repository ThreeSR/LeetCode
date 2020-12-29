class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<int> dp(2, 0);
        dp[0] = 0;  // 一开始没东西，不做操作，所以是0
        dp[1] = -prices[0]; // 买入，所以负数
        for (int i = 1 ; i < prices.size(); i++) {
            dp[0] = max(dp[0], prices[i] + dp[1] - fee);  // 卖出
            dp[1] = max(dp[1], dp[0] - prices[i]);  // 买入
        }
        return dp[0];
    }
};

// reference https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/solution/jian-dan-dpmiao-dong-gu-piao-mai-mai-by-tejdo/

/*
详见Solution中的图解，这里是二维的简化。
因为要获得最大利润，所以都要max。
操作过程无非买入或卖出，最后的输出应该是最后一天的情况，所以应该就是卖出对应的数值，不是买入的，所以是dp[0]。
*/