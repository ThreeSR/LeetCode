class Solution {
public:
    int integerBreak(int n) {  // 动态规划，这里dp[i]代表拆分数字i，可以得到的最大乘积dp[i]
        vector<int> dp(n + 1, 0); // 初始化
        dp[2] = 1; // 这里从dp[2]开始赋初值（边界），因为从2开始，dp才有意义，前面的0和1是没有意义的，所以不用管它们的初值
        // 更何况，它们的初值其实用不上
        for (int i = 3; i <= n; i++) {
            for (int j = 1; j <= i - 2; j++) { // 呼应上面dp[0] dp[1]初值用不上，因为按照这样的i和j的循环，最早也是从dp[2]开始
                dp[i] = max(dp[i], max((i - j) * j, dp[i - j] * j)); // 状态转移方程，无非这三类。详见链接中题解
            }
        }
        return dp[n];
    }
};

// reference https://mp.weixin.qq.com/s/cVbyHrsWH_Rfzlj-ESr01A