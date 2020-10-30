# -*- coding: utf-8 -*-
"""
Created on Fri Oct 30 15:00:35 2020

@author: Three
"""

class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        for i in range(len(nums1)): # 把数据放在一起
            nums2.append(nums1[i])
        nums2.sort() # 对所有数据排序 快排
        size = len(nums2)
        if size%2 == 0:  # 输出数据的中位数即可
            return float((nums2[size//2-1]+nums2[size//2])/2.0)
        else:
            return float(nums2[size//2])
        
ans = Solution()
nums1 = [1,3]
nums2 = [2]
print(ans.findMedianSortedArrays(nums1,nums2))