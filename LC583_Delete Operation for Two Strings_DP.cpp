class Solution {
public:
    int minDistance(string word1, string word2) { // 动态规划 
        // dp[i][j]：以i-1为结尾的字符串word1，和以j-1位结尾的字符串word2，想要达到相等，所需要删除元素的最少次数。
        vector<vector<int>> dp(word1.size() + 1, vector<int>(word2.size() + 1)); // 初始化
        for (int i = 0; i <= word1.size(); i++) dp[i][0] = i;
        for (int j = 0; j <= word2.size(); j++) dp[0][j] = j;
        for (int i = 1; i <= word1.size(); i++) {
            for (int j = 1; j <= word2.size(); j++) { // 下面的状态转移，无非涉及两种情况，一种是字符相等，另一种是字符不相等
                if (word1[i - 1] == word2[j - 1]) { // 相等时，不用删除，直接承接即可
                    dp[i][j] = dp[i - 1][j - 1];
                } else { // 不相等时，要删除。删除分三种：1.删除word1；2.删除word2；3.都删除，各退一步。三种对应的开销分别是1,1,2。
                    dp[i][j] = min({dp[i - 1][j - 1] + 2, dp[i - 1][j] + 1, dp[i][j - 1] + 1});
                }
            }
        }
        return dp[word1.size()][word2.size()]; // 得结果
    }
};

// 本题算是“编辑距离”的预热，包含的内容是元素之间的删除操作。
// reference https://mp.weixin.qq.com/s/a8BerpqSf76DCqkPDJrpYg