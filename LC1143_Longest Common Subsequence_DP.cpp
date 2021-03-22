class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) { // 动态规划 最长公共子序列
        vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0)); // 初始化 
        // dp[i][j]：长度为[0, i - 1]的字符串text1与长度为[0, j - 1]的字符串text2的最长公共子序列为dp[i][j]。这样的定义有助于下面的递推公式
        for (int i = 1; i <= text1.size(); i++) { // 从1开始
            for (int j = 1; j <= text2.size(); j++) {
                if (text1[i - 1] == text2[j - 1]) { // 如果当前字符相同
                    dp[i][j] = dp[i - 1][j - 1] + 1; // 长度加1
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // 否则找一个max值即可。这里需要好好理解添加一个新的字符之后，变化的情况
                }
            }
        }
        return dp[text1.size()][text2.size()];
    }
};

// reference https://mp.weixin.qq.com/s/Qq0q4HaE4TyasCTj2WGFOg
// 总的来说，本题和LC718很像，可以一起写