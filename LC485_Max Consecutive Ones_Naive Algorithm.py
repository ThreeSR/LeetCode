class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int: # 模拟法
        if (len(nums) == 0): return 0 # 特判
        count = 0
        maxNum = 0
        for i in range(0, len(nums)) :
            if (nums[i] == 1): # 遇到1
                count += 1 # 计数+1
            if ((nums[i] == 0) or (i == len(nums) - 1)): # 遇到0或者最后一位
                maxNum = max(maxNum, count) # 记录最大值
                count = 0 # 清零
        return maxNum
