class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) { // 完全背包问题
        // 本题可以建模成完全背包问题，其中背包是string，物品是单词集合中的单词
        unordered_set wordSet(wordDict.begin(), wordDict.end()); // 得到单词集合
        vector<int> dp(s.size() + 1, false);
        dp[0] = true;
        for (int i = 1; i <= s.size(); i++) { // 完全背包 因为本题不在乎排列还是组合，所以for循环的顺序正常就好。
            for (int j = 0; j < i; j++) {
                string wordSearch = s.substr(j, i - j); // 得到要搜寻的单词
                if (wordSet.find(wordSearch) != wordSet.end() && dp[j]) { // 如果单词可以找到，并且本身的dp[j]就是true，那么可知dp[i]也是true
                    dp[i] = true; // 递推公式    尽管这样的递推不是很直观
                }
            }
        }
        return dp[s.size()];
    }
};

// reference https://mp.weixin.qq.com/s/3Spx1B6MbIYjS8YkVbByzA

/*
注：
1. substr的用法：substr(起始位置，截取的个数)
2. wordSet.find(word) != wordSet.end() 的意思是：在wordset中找不到word这个单词
*/