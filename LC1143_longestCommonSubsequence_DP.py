# -*- coding: utf-8 -*-
"""
Created on Sun Aug 23 01:03:52 2020

@author: Three
"""

def longestCommonSubsequence(text1, text2):
    m = len(text1)
    n = len(text2)
    dp = [[0]*(n+1) for _ in range(m+1)]
    
    for i in range(1,m+1):
        for j in range(1,n+1):
            if text1[i-1] == text2[j-1]:
                dp[i][j] = 1 + dp[i-1][j-1]
            else:
                dp[i][j] = max(dp[i-1][j],dp[i][j-1])
    return dp[m][n]
m = int(input())
text1 = [int(x) for x in input().split()]
n = int(input())
text2 = [int(x) for x in input().split()]
print(longestCommonSubsequence(text1, text2))

