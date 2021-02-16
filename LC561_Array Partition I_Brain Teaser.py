class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort() # 排序
        result = 0
        for i in range(0, len(nums), 2) : # 每间隔2个单位，取一个数值相加
            result += nums[i]
        return result

"""
# Another Version:
class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        return sum(sorted(nums)[::2])
"""