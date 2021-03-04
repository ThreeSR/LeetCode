class Solution {
public:
    int maxProfit(vector<int>& prices) {  // 滚动数组  这里可以使用滚动数组，是因为DP过程中，依赖的前序状态只是前一天的操作，所以%2处理即可，用这种方法不用浪费多余空间
        int len = prices.size();
        vector<vector<int>> dp(2, vector<int>(2)); // 注意这里只开辟了一个2 * 2大小的二维数组
        dp[0][0] -= prices[0];
        dp[0][1] = 0;
        for (int i = 1; i < len; i++) {  // DP思路和另一个关于本题的题解相同
            dp[i % 2][0] = max(dp[(i - 1) % 2][0], -prices[i]);
            dp[i % 2][1] = max(dp[(i - 1) % 2][1], prices[i] + dp[(i - 1) % 2][0]);
        }
        return dp[(len - 1) % 2][1];
    }
};

// 总结：滚动数组是一个DP中常用的trick，用于节省空间。因为DP是一个用空间换时间的方法。