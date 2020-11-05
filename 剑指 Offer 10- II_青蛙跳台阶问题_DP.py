# -*- coding: utf-8 -*-
"""
Created on Thu Nov  5 13:47:41 2020

@author: Three
"""
class Solution:
    def numWays(self, n: int) -> int:
        if n<2: return 1
        dp = [0]*(n+1)
        dp[0] = 1
        dp[1] = 1
        for i in range(2,n+1):
            dp[i] = (dp[i-1]+dp[i-2])%1000000007

        return dp[n]

# 这种问题不应该用递归，递归速度太慢。要用动态规划，其实DP和递归思想差不多，但还是需要改进一下。