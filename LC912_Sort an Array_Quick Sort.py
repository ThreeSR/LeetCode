class Solution:
    def sortArray(self, nums: List[int]) -> List[int]: # 快速排序 模板题
        # Baseline  
        if len(nums) < 2:
            return nums
        else:
            pivot = nums[0]
            greater = [i for i in nums[1:] if i > pivot]
            less = [i for i in nums[1:] if i < pivot]
            equal = [i for i in nums[1:] if i == pivot]
            return self.sortArray(less) + equal + [pivot] + self.sortArray(greater)