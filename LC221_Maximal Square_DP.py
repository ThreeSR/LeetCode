# -*- coding: utf-8 -*-
"""
Created on Wed Nov  4 13:12:23 2020

@author: Three
"""

class Solution:
    def maximalSquare(self, matrix):
        # 特例分析
        if not matrix: return 0
        # 初始化
        rows = len(matrix)
        cols = len(matrix[0])
        dp = [[0]*cols for _ in range(rows)] # dp这里建模的是正方形的右下角点(i,j)
        MAX = 0


        for i in range(rows):
            for j in range(cols):
                if matrix[i][j] == '1': # 注意审题，题目中是string类型，不然output是零
                    if i==0 or j==0:  # 边界条件，这种在边界又有的，就是1
                        dp[i][j] = 1
                    else:
                        dp[i][j] = min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]) + 1 # 每一个（i，j）位置取决于上，左，左上三个位置
                MAX = max(MAX,dp[i][j]) # 要取最大值，一般dp取dp[-1][-1]即可，但此处建模取min，答案要max，南辕北辙，所以要MAX记录最大值，然后输出

        return MAX**2
        #return dp[-1][-1]**2
        
# reference https://leetcode-cn.com/problems/maximal-square/solution/zui-da-zheng-fang-xing-by-leetcode-solution/
        
res = Solution()
print(res.maximalSquare(
[["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]))