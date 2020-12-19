class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) { // 动态规划 本题思路和Python版相同
        vector<bool> dp(s.size() + 1, false); // 初始化
        dp[0] = true;
        for (int i = 0; i < s.size(); i++) {
            if (!dp[i]) continue; // 遇到没办法找到的，直接跳过
            for (auto& word : wordDict) { // 这里说明一个问题：加不加&有什么区别？ 加上&就是引用（reference），可以加大效率，不是拷贝（copy）。
                if (i + word.size() <= s.size() && s.substr(i, word.size()) == word) { // substr的使用是： string.substr(position, length)  意思是截取从pos开始长为len的一段字符串
                    dp[i + word.size()] = true;
                }
            }
        }
        return dp[s.size()];
    }
};

// reference https://leetcode-cn.com/problems/word-break/solution/dong-tai-gui-hua-ji-yi-hua-hui-su-zhu-xing-jie-shi/