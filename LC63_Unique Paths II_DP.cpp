class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) { // 动态规划
        if (obstacleGrid.size() == 0) return 0; // 特判
        int m = obstacleGrid.size(); 
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0)); // dp初始化，dp[i][j]代表运动到第(i, j)的位置上的时候，可以有多少种不同路径。
        for (int i = 0; i < m && obstacleGrid[i][0] != 1; i++) dp[i][0] = 1; // 第一行或第一列，在没有障碍物的条件下，到达的路径只能有一种。但是
        // 如果有了障碍物，那么障碍物后面的格子都是0，因为绕不过去了。
        for (int j = 0; j < n && obstacleGrid[0][j] != 1; j++) dp[0][j] = 1;
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j ++) {
                if (obstacleGrid[i][j] == 1) continue; // 遇到障碍物，那么这个格子的位置的达到路径只能是0，就是continue即可，因为初值是零。
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1]; // 状态转移方程，当前状态会由上面的两种状态达到，因为机器人只能向下或者向右移动。
            }
        }
        return dp[m - 1][n - 1];
    }
};

// reference https://mp.weixin.qq.com/s/lhqF0O4le9-wvalptOVOww