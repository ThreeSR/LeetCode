class Solution {
public:
    int longestPalindromeSubseq(string s) { // 动态规划 dp[i][j]：字符串s在[i, j]范围内最长的回文子序列的长度为dp[i][j]。
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0)); // 初始化 
        for (int i = 0; i < s.size(); i++) dp[i][i] = 1; // 自己本身可以算一个单位长度的回文子序列
        for (int i = s.size() - 1; i >= 0; i--) { // 注意for循环的遍历顺序，根据递推公式，需要从下到上，从左到右
            for (int j = i + 1; j < s.size(); j++) {
                if (s[i] == s[j]) { // 如果遇到两个字符相等，那么在原长度基础上面加二
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                } else {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]); // 如果不相等，那么由于dp存的是某范围内最长回文子序列，
                    // 所以它取dp[i + 1][j]和dp[i][j - 1]中的最大值即可，这是一个很动态规划的思维，值得理解明白
                }
            }
        }
        return dp[0][s.size() - 1]; // 输出字符串范围内，最长回文子序列长度即可
    }
};

// reference https://mp.weixin.qq.com/s/jbd3p4QPm5Kh1s2smTzWag