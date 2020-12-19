class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool: # 动态规划
        dp = [False] * (len(s) + 1) # 初始化为false，dp[i]表示前i个字母在单词表中是否存在
        dp[0] = True # 空的时候是true
        for i in range(len(s)): 
            for j in range(i + 1, len(s) + 1): # 这个是在当下dp[i]的基础上，对之后的单词进行展望。
                if (dp[i] and (s[i : j] in wordDict)): # 要注意，这里有两个判断。从0开始时，对之后的第一个出现的dp[i]进行了踩坑。下一次进行这个语句
                # 就是那个第一个被踩坑的dp[i]。再者，这个语句第二个是对这个dp[i]之后的展望。找寻下一个踩坑位置。这种一个个找寻的方式就像是给单词加空格。
                # 这里的s[i:j]，从i开始。具体原因可以从i=0时思考，这边确实要从0开始而不是i+1。此外，Python的切片处理不包含尾端的值。所以i:j实际是i到j-1
                # 所以j的循环要到len(s)+1而不是len(s)
                    dp[j] = True
        return dp[-1]

# reference https://leetcode-cn.com/problems/word-break/solution/dong-tai-gui-hua-ji-yi-hua-hui-su-zhu-xing-jie-shi/