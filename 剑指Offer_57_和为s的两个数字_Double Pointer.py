class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]: # 双指针法
        i = 0
        j = len(nums) - 1
        while (i < j): # 既然数组是递增的，我们就可以利用这个性质
            if (nums[i] + nums[j] > target): j = j - 1
            elif (nums[i] + nums[j] < target): i = i + 1
            else: return [nums[i], nums[j]]
        return []