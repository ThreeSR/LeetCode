class Solution {
public:
    bool isSubsequence(string s, string t) { // 动态规划
        vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0)); // 初始化
        for (int i = 1; i <= s.size(); i++) { // 双循环
            for (int j = 1; j <= t.size(); j++) {
                if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1; // 如果当前字符相等，那么dp + 1
                else dp[i][j] = dp[i][j - 1]; // 否则这样处理，关于状态转移的细节，可以见Solution中的dp表格截图，就会明白
                // 对于状态转移的过程和dp表格的内容，应该有一个全局观
            }
        }
        if (dp[s.size()][t.size()] == s.size()) return true; // 如果最后子串能够完全匹配，那么dp数值等于子串长度
        return false;
    }
};

// reference https://mp.weixin.qq.com/s/2pjT4B4fjfOx5iB6N6xyng

// 本题可以使用指针求解，更简单。实际上，本题是简单题，所以应该使用指针求解。

// 使用DP求解可以更好地理解dp的精髓，也为后续的编辑距离打下基础。如果从编辑距离的角度看这题，那么仅仅涉及删除而已。