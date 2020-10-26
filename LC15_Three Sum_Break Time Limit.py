# -*- coding: utf-8 -*-
"""
Created on Sun Oct 25 22:50:38 2020

@author: Three
"""

def threeSum(nums):

    hashmap = {}
    visited = []
    obj = [0] * len(nums)

    for i in range(len(nums)):
        obj[i] = 0 - nums[i]

    for i,j in enumerate(nums):
        hashmap[j] = i
        
    for i in range(len(obj)):
        for j in range(len(nums)):
            if j == i:
                continue
            index = hashmap.get(obj[i] - nums[j])
            if index is not None and index!=j and index!=i:
                res = [nums[i],nums[j],nums[index]]
                res.sort()    
                if res not in visited:    
                    visited.append(res)

    return visited 

nums = [-1,0,1,2,-1,-4]
#nums = [-1]
print(threeSum(nums))