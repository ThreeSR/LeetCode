# -*- coding: utf-8 -*-
"""
Created on Sat Aug 29 14:22:20 2020

@author: Three
"""

def twoSum(target,nums):
    hashmap = {}
    for i,num in enumerate(nums):
        hashmap[num] = i
    for i,num in enumerate(nums):
        j = hashmap.get(target-num)
        if j is not None and j!=i:
            return [i,j]
    return "Failure"
 
    
# nums = [2, 7, 11, 15], target = 9
nums = [2, 7, 11, 15]
target = 10
print(twoSum(target,nums))