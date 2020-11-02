# -*- coding: utf-8 -*-
"""
Created on Mon Nov  2 13:55:02 2020

@author: Three
"""

class Solution:
    def numSquares(self, n: int) -> int:     
        inf = float("inf")
        dp = [inf]*(n+1)
        dp[0] = 0
        dp[1] = 1
        for i in range(2,n+1):
            j = 1
            while(i-j*j>=0):
                dp[i] = min(dp[i],dp[i-j*j]+1)  # 动态规划 经典状态转移方程 类比找零钱 爬楼梯
                j += 1
        return dp[n]

res = Solution()
print(res.numSquares(12))

# reference https://leetcode-cn.com/problems/perfect-squares/comments/