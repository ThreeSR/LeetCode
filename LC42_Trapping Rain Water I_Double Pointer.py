# -*- coding: utf-8 -*-
"""
Created on Mon Nov  2 11:28:26 2020

@author: Three
"""

class Solution:
    def trap(self, height) -> int:
        Sum = sum(height)
        size = len(height)
        left,right = 0,size-1
        temp,high = 0,1
        while(left<=right):
            while(left<=right and height[left]<high): # temp总量是左右指针算得，到height大于high时，指针停下，不然继续移动
                left += 1 # left和right指针向中间移动就好，不用重置为0和size-1，因为对应height和high比较过了，没必要二次比较，因为结果相同。
            while(left<=right and height[right]<high):
                right -= 1
            temp += right-left+1
            high += 1 # high不用关心最大值，自然会收敛
        return temp - Sum # 有点脑筋急转弯的思路，将整体视为体积，将temp体积减去sum，得到雨水总量
    
    
res = Solution()
print(res.trap([0,1,0,2,1,0,1,3,2,1,2,1]))

# reference https://leetcode-cn.com/problems/trapping-rain-water/solution/shuang-zhi-zhen-an-xing-qiu-geng-hao-li-jie-onsuan/
