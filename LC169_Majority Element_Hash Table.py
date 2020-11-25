class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        hashmap = {}
        for i in range(len(nums)): # 如果不这么赋初值，那么接下来的统计会报错。不同语言特点不同。如果用这样的方式统计，还是用C++较好
            hashmap[nums[i]] = 0
        for i in range(len(nums)):
            hashmap[nums[i]] = hashmap[nums[i]] + 1
            if hashmap[nums[i]] > len(nums) // 2:
                result = nums[i]
                break
        return result

