class Solution:
    def trap(self, height) -> int:
        Sum = sum(height) # 得到柱子的体积
        size = len(height) 
        left, right = 0, size - 1 # 双指针初始化
        volume, high = 0, 1 # 总体积和高度初始化
        while (left <= right):
            while (left <= right and height[left] < high): 
                left += 1 
            while (left <= right and height[right] < high):
                right -= 1
            volume += right - left + 1 # 每一层的容量都加起来
            high += 1 # 高度加一
        return volume - Sum # 总体积减去柱子体积，即雨水总量


// reference https://leetcode-cn.com/problems/volume-of-histogram-lcci/solution/shuang-zhi-zhen-an-xing-qiu-jie-xiang-xi-d162/
