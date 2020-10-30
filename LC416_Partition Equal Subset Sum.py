# -*- coding: utf-8 -*-
"""
Created on Sat Oct 24 14:26:04 2020

@author: Three
"""

def partitionEqualSubset(num):
    
    # 不能是空集
    if not num:
        return False
    # 如果可以取出数值是全部和的一半，可以达到目的
    # 所以，偶数才可以，奇数直接false
    if sum(num)%2 != 0:
        return False
    
    # 相当于背包问题，用dp，一步步填充num中的数值，看是否可以达到target
    target = sum(num)//2
    # dp init 初始为全部false
    # dp[i][j] ：表示从数组的 [0, i] 这个子区间内挑选一些正整数，每个数只能用一次，使得这些数的和等于 j。
    dp = [[False for _ in range(target+1)] for _ in range(len(num))]
    
    # num.sort(reverse=1) 不用排序，一个数大于整体和的一半，可以直接false，不可能等和划分 
    # 下面是dp的初始化，自此第一行不用再考虑
    for i in range(target+1):
        dp[0][i] = False if num[0] != i else True
    # 下面是dp核心部分
    #  dp[i][j] = dp[i-1][j] or dp[i-1][j-num[i]] 或 dp[i][j] = dp[i-1][j] 即dp状态仅仅由这些前序决定，两种情况
    for i in range(1,len(num)):
        for j in range(target+1):
            if j > num[i]:
                dp[i][j] = dp[i-1][j] or dp[i-1][j-num[i]]
            else:
                dp[i][j] = dp[i-1][j]
    
    return dp[-1][-1] # dp一般只关心最后一个值，所以输出[-1,-1]即可
                

num = [11, 5, 2, 5]
print(partitionEqualSubset(num))

# 总结：行列关系要分清！
# solution：https://liweiwei1419.github.io/leetcode-solution-blog/leetcode-problemset/dynamic-programming/0416-partition-equal-subset-sum.html#_0-1-%E8%83%8C%E5%8C%85%E9%97%AE%E9%A2%98-%E9%92%88%E5%AF%B9%E6%9C%AC%E9%A2%98%E7%9A%84%E4%BC%98%E5%8C%96%EF%BC%88python-%E4%BB%A3%E7%A0%81%E3%80%81java-%E4%BB%A3%E7%A0%81%EF%BC%89
