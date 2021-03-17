class Solution {
public:
    int numDistinct(string s, string t) { // 动态规划 dp[i][j]：以i-1为结尾的s子序列中出现以j-1为结尾的t的个数为dp[i][j]
        vector<vector<long long>> dp(s.size() + 1, vector<long long>(t.size() + 1)); // 初始化
        for (int i = 0; i < s.size() + 1; i++) dp[i][0] = 1; 
        /*        
        dp[i][0]表示什么呢？
        dp[i][0] 以i-1为结尾的s可以随便删除元素，出现空字符串的个数。
        那么dp[i][0]一定都是1，因为也就是把以i-1为结尾的s，删除所有元素，出现空字符串的个数就是1。
        再来看dp[0][j]，dp[0][j]：空字符串s可以随便删除元素，出现以j-1为结尾的字符串t的个数。
        那么dp[0][j]一定都是0，s如论如何也变成不了t。
        最后就要看一个特殊位置了，即：dp[0][0] 应该是多少。
        dp[0][0]应该是1，空字符串s，可以删除0个元素，变成空字符串t。
        */
        for (int i = 1; i < t.size() + 1; i++) dp[0][i] = 0; // 赋初值，见上面的内容
        for (int i = 1; i < s.size() + 1; i++) { // 遍历，从左上到右下
            for (int j = 1; j < t.size() + 1; j++) {
                if (s[i - 1] == t[j - 1]) { // 状态转移方程从最近的这一个字符相同与否入手
                    dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j]; // 如果相同，可以选择是否使用s[i - 1]进行匹配
                    // 注意：匹配是可选择的，不是强制性，比如bagee和bage，后者e可以和前者最后一个或者倒数第二个进行matching，这都是有可能的。
                    // 所以如果使用了s[i - 1]，那么根据s和t的最后一位相同，二者自动配对成功，这时候看个数其实就是看dp[i - 1][j - 1]，因为和
                    // s[i - 1]与t[j - 1]无关了；此外，如果不选择，那么跳过s[i - 1]即可。因为t中的字符都是待匹配的，所以t的字符不能少，变成是
                    // 考虑dp[i - 1][j]。所以最近一位字符相同的时候，状态转移如上，是有两种情况的。
                }
                else {
                    dp[i][j] = dp[i - 1][j]; // 如果最近一位不同，那么只有一种情况，这种情况和上面相同却不使用相同，直接写出即可
                }
            }
        }
        return dp[s.size()][t.size()]; // 最后return结果
    }
};

// reference https://leetcode-cn.com/problems/distinct-subsequences/solution/dai-ma-sui-xiang-lu-115-bu-tong-de-zi-xu-q6uq/  本题比较晦涩，可见链接中内容