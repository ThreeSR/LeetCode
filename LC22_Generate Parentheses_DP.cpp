class Solution {
public:
    vector<string> generateParenthesis(int n) { // 动态规划
        if (n == 0) return {};
        if (n == 1) return {"()"};
        vector<vector<string>> dp(n + 1);
        dp[0] = {""}; // 注意，这里返回空的时候也要有"",因为函数是vector<string>类型的
        dp[1] = {"()"}; // 特殊情况先写出来
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i; j++) { // 以下就是各种情况的尝试。新增的括号从广义上说，只能是这两个位置
                for (string p : dp[j]) {
                    for (string q : dp[i - 1 - j]) {
                        string str = "(" + p + ")" + q; // 类Python语法
                        dp[i].push_back(str);
                    }
                }
            }
        }
        return dp[n];
    }
};

// reference https://leetcode-cn.com/problems/generate-parentheses/solution/zui-jian-dan-yi-dong-de-dong-tai-gui-hua-bu-lun-da/ 
// 详解见Solution中的LC22_Ans截图




