class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) { // 动态规划
        int n = cost.size();
        vector<int> dp(n + 1, 0);
        for (int i = 2; i <= n; i++) { // i最大可以取到n，代表dp的vector有n+1的长度。这样一来，可以把最后一个n+1的位置独立地当成是楼顶，其他
        // 楼层在往上爬的过程中，再将cost加上。即要离开了再加上。这样一来，对cost的处理和dp的处理就变得更加简单。
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[n];
    }
};