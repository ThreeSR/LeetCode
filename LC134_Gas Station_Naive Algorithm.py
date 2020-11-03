# -*- coding: utf-8 -*-
"""
Created on Tue Nov  3 14:16:02 2020

@author: Three
"""

class Solution:
    def canCompleteCircuit(self, gas, cost):

        if not gas or not cost: # 特例判断
            return -1
        start = 0
        run = 0
        if(sum(gas)-sum(cost))<0:  # 如果油量全部值没有消耗多，那肯定跑不完
            return -1
        else:
            for i in range(len(cost)): 
                run += gas[i] - cost[i]
                if run < 0:     # 进入这里油总量大于等于消耗，如果前半部分消耗小于0，后半部分一定要大于0才可以平衡
                    start = i + 1 # 所以可以确定，加油站一定要在i的右边。油要储备足，才可以跑
                    run = 0 # 每次run要更新为0，不然加油站右偏了
        return start
    
res = Solution()
print(res.canCompleteCircuit([1,2,3,4,5],[3,4,5,1,2]))

# reference https://leetcode-cn.com/problems/gas-station/comments/