class Solution {
public:
    int minDistance(string word1, string word2) { // 经典DP 是一道很好的题目
        vector<vector<int>> dp(word1.size() + 1, vector<int> (word2.size() + 1, 0));  // dp初始化，全为0
        for (int i = 1; i <= word1.size(); i++) {  // dp[i][j]代表从word1的前i个单词变到word2的前j个单词所需要的最小变化次数
            dp[i][0] = dp[i - 1][0] + 1;  // 很好理解，这就代表把已有前i个字母的word1删除成没有任何单词（或者说前0个单词的word2）的情况。
            // 我们可以把目标定为word2的前j个单词，这样一来，相对地，对于word1前i个单词的处理就是删除
            // 这里也再说明一下，对于单词的修正，无非三种情况：1.增加 2.删除 3.replace，如果我们把目标都定为word2，那么上面的代码就是
            // 删除，下面的第零行的初始化就是增加。所谓replace，就是两个单词不同，直接置换，比如sing把i replace成u，变成sung。
            // 在定义好dp的实际意义之后，广义地观察可能出现的情况，进行枚举，然后写出转换方程。
        }
        for (int j = 1; j <= word2.size(); j++) {
            dp[0][j] = dp[0][j - 1] + 1; // 增加
        }
        for (int i = 1; i <= word1.size(); i++) {
            for (int j = 1; j <= word2.size(); j++) {
                if (word1[i - 1] == word2[j - 1]) dp[i][j] = dp[i - 1][j - 1];  // 如果单词的字母相同，不用处理
                else dp[i][j] = min(dp[i- 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;  // 增删改，三操作选一，取min并+1，这就是状态转换方程
            }
        }
        return dp[word1.size()][word2.size()]; // 结果
    }
};