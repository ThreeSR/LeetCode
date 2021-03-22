class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) { // 动态规划  注意本题需要求的是连续重复的子串  最长重复子数组
        vector<vector<int>> dp (A.size() + 1, vector<int>(B.size() + 1, 0)); // 初始化
        // 此处，dp[i][j]代表：以下标i - 1为结尾的A，和以下标j - 1为结尾的B，最长重复子数组长度为dp[i][j]。
        int result = 0;
        for (int i = 1; i <= A.size(); i++) { // A或B在内或外循环都可以；注意，这里for循环从1开始，是为了方便后续的递推公式和dp数组的定义
            for (int j = 1; j <= B.size(); j++) {
                if (A[i - 1] == B[j - 1]) { // 如果当前字符相等
                    dp[i][j] = dp[i - 1][j - 1] + 1; // 那么长度+1
                } // 如果当前字符不相等，那么不用管了，因为长度的初值已经赋为0
                if (dp[i][j] > result) result = dp[i][j]; // 我们需要搜集最长的长度
            }
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/U5WaWqBwdoxzQDotOdWqZg