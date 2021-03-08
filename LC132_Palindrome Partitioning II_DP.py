class Solution(object):
    def minCut(self, s): # 动态规划：dp[i]的定义： 范围是[0, i]的回文子串，最少分割次数是dp[i]。
        """
        :type s: str
        :rtype: int
        """
        N = len(s)
        dp = [N] * N # dp里面的初始化是有说法的，因为这样初始化之后，如果各个if语句都没有进去，也会得到正确的，要分割N次的结果
        for i in range(N):
            if self.isPalindrome(s[0 : i + 1]): # 如果某一段可以回文，那么这一段分割0次就好，自己就是子串
                dp[i] = 0
                continue
            for j in range(i): # 对于i之前的内容，需要看要怎么分。取0-i之间的一个数值j，dp[j]已经是0-j的可以回文的内容，如果j+1到i的内容依然可以回文，
                # 那么dp[i] = dp[j] + 1，当然了，dp[i]也可以维持原状。两种选择取min即可。
                if self.isPalindrome(s[j + 1 : i + 1]): # 注意python的索引！右端少取一位
                    dp[i] = min(dp[i], dp[j] + 1) # DP状态转移方程
        return dp[N - 1] # 输出最后结果
    
    def isPalindrome(self, s): # 非常pythonic，很巧妙的回文判断 
        return s == s[::-1] # 后面的s[::-1]就是将s中的字符串进行翻转。所谓回文就是翻转后的内容和原本的内容是相等的。


# reference https://leetcode-cn.com/problems/palindrome-partitioning-ii/solution/xiang-tong-de-si-lu-cong-zui-chang-di-ze-9kfm/
# reference2 https://leetcode-cn.com/problems/palindrome-partitioning-ii/solution/132-fen-ge-hui-wen-chuan-iidong-tai-gui-3hqva/