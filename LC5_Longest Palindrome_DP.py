# -*- coding: utf-8 -*-
"""
Created on Sun Nov  1 12:08:31 2020

@author: Three
"""
class Solution:
    def longestPalindrome(self, s):

        if len(s) < 2: # 特殊情况
            return s
        
        size = len(s) 
        max_len = 1 # 初始值
        start = 0
        dp = [[False]*size for _ in range(size)] # dp初始化

        for i in range(size):  # 单字符必定是回文
            dp[i][i] = True

        for j in range(1,size): # j比较大
            for i in range(0,j): # i小于j
                # 状态转移方程
                if s[j] == s[i]: # 前后两个字母相等，往内收缩
                    if (j-1)-(i+1)+1 < 2: # 如果长度是0或1，直接是回文了
                        dp[i][j] = True
                    else:
                        dp[i][j] = dp[i+1][j-1] # 如果长，就可以依赖于前面的状态
                else:
                    dp[i][j] = False # 如果前后两个字母直接不同，直接false

                if dp[i][j]:  # 在回文的前提下才有讨论长度的意义
                    cur_len = j - i + 1
                    if cur_len > max_len:
                        start = i
                        max_len = cur_len
           
        return s[start:start+max_len]

res = Solution()
print(res.longestPalindrome("babad"))