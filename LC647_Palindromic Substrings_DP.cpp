class Solution {
public:
    int countSubstrings(string s) { // 动态规划  dp[i][j]：表示区间范围[i,j] （注意是左闭右闭）的子串是否是回文子串，如果是dp[i][j]为true，否则为false
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false)); // 所有dp初始化为false
        int result = 0; // 输出字符串中有多少个回文子串
        for (int i = s.size() - 1; i >= 0; i--) {  // 注意遍历顺序，从下往上，从左往右。这是根据状态转移方程中元素的先后顺序而定的
            for (int j = i; j < s.size(); j++) {
                if (s[i] == s[j]) { // 如果两个字符相同
                    if (j - i <= 1) { // 处理单个字符（例如a），两个字符（aa）时，之所以是aa因为前面if (s[i] == s[j])
                    // 这两个情况需要特殊考虑
                        result++;
                        dp[i][j] = true;
                    } else if (dp[i + 1][j - 1]) { // 除了上面两种情况，就是需要考虑dp[i + 1][j - 1]的情况，如果可以，result加一
                        result++;
                        dp[i][j] = true; // 设置为true
                    }
                }
            }
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/2WetyP6IYQ6VotegepVpEw