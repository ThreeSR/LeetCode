# -*- coding: utf-8 -*-
"""
Created on Mon Oct 26 14:48:38 2020

@author: Three
"""

class Solution():
    def threeSum(self, nums):
        length = len(nums)
        res = []
        if length < 3:
            return []
        nums.sort() # 排序，从小到大，非常好用！（尤其重复类问题）
        for k in range(length-2): # 给i和j留两个位置
            if nums[k] > 0: # k都大于0了，没必要比了，因为i和j更大
                return res
            if k > 0 and nums[k] == nums[k-1]: # 防重复
                continue
            i,j = k+1,length-1            
            while i < j:
                sum = nums[i] + nums[j] + nums[k]
                if sum > 0: # 能这么分类主要也是排序的功劳
                    j -= 1 
                    while i < j and nums[j] == nums[j+1]: j -= 1 # 防重复
                elif sum < 0:
                    i += 1
                    while i < j and nums[i] == nums[i-1]: i += 1
                else:
                    res.append([nums[k],nums[i],nums[j]])
                    i += 1
                    j -= 1
                    while i < j and nums[i] == nums[i-1]:
                        i += 1
                    while i < j and nums[j] == nums[j+1]: # 不用担心前面i变了对这边判断的影响，i变是必然要的。
                        j -= 1 
        return res
    
LC = Solution()
nums  = [-4,-1,-1,-1,0,1,2]
print(LC.threeSum(nums))