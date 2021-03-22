class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) { // 本题虽然看上去很抽象，但其实仔细分析，就是求最长公共子串
        vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, 0)); // 初始化 dp含义见LC1143或LC718
        for (int i = 1; i <= A.size(); i++) {
            for (int j = 1; j <= B.size(); j++) {
                if (A[i - 1] == B[j - 1]) { // 同LC1143
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[A.size()][B.size()];
    }
};

// reference https://mp.weixin.qq.com/s/krfYzSYEO8jIoVfyHzR0rw
// 本题基本和LC1143一致