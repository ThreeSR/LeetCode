class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) { // 本题比较特殊，是二维的0-1背包问题
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); // 本行和下面一行等价
        // int dp[101][101] = {0}; // 像这种数组直接 = {0}的，就是把所有初值全部赋为0
        for (string str : strs) {
            int oneNum = 0; // 统计0的个数
            int zeroNum = 0; // 统计1的个数
            for (char c : str) {
                if (c == '0') zeroNum++;
                else oneNum++;
            }
            for (int i = m; i >= zeroNum; i--) { // 二维DP
                for (int j = n; j >= oneNum; j--) {
                    dp[i][j] = max(dp[i][j], dp[i - zeroNum][j - oneNum] + 1);
                }
            }
        }
        return dp[m][n];
    }
};

// reference https://leetcode-cn.com/problems/ones-and-zeroes/solution/474-yi-he-ling-01bei-bao-xiang-jie-by-ca-s9vr/
// 除了DP，本题对于字符串的处理也很值得学习