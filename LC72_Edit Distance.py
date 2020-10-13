# -*- coding: utf-8 -*-
"""
Created on Sat Aug 22 15:43:37 2020

@author: Three
"""
#关键在于要留有0行0列的留白
def EditDistance(word1,word2):
    n1 = len(word1)
    n2 = len(word2)
    
    dp = [[0]*(n1+1) for _ in range(n2+1)]
    
    for i in range(1,n2+1):
        dp[i][0] = dp[i-1][0] + 1
    for j in range(1,n1+1):
        dp[0][j] = dp[0][j-1] + 1
    
    for i in range(1,n2+1):
        for j in range(1,n1+1):
            if word2[i-1] == word1[j-1]:
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]) + 1
    
    return dp[-1][-1]

word1 = input()
word2 = input()
print(EditDistance(word1,word2))