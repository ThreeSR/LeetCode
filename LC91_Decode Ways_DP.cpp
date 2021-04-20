class Solution {
public:
    int numDecodings(string s) { // 动态规划 解码方法 
        if (s[0] == '0') return 0; // 特判
        vector<int> dp(s.size() + 1); // dp[i]代表str[0..i]的解码方法总数
        dp[0] = 1; // 设定初值，这个数值没有实际物理意义，纯粹为了赋初值而存在
        dp[1] = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '0') // 1.s[i]为0的情况
                if (s[i - 1] == '1' || s[i - 1] == '2') // s[i - 1]等于1或2的情况
                    dp[i + 1] = dp[i - 1]; // 由于s[1]指第二个下标，对应为dp[2],所以dp的下标要比s大1，故为dp[i + 1]
                else 
                    return 0;
            else // 2.s[i]不为0的情况
                if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')) // s[i - 1]s[i]两位数要小于26的情况
                    dp[i + 1] = dp[i] + dp[i - 1];
                else // 其他情况
                    dp[i + 1] = dp[i];
        }
        return dp[s.size()];
    }
};

// reference https://leetcode-cn.com/problems/decode-ways/solution/c-wo-ren-wei-hen-jian-dan-zhi-guan-de-jie-fa-by-pr/
// 本题思路很简洁巧妙，可见Solution中的LC91_Ans.png图片，那里有详细思路解析；或者点击上面链接，里面还有优化的思路。
// 本题值得注意的是：字母只有26个，标号只能是从1到26。所以在DP过程中，要好好利用这个特性去判断。