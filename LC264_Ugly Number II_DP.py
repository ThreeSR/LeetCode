class Solution:
    def nthUglyNumber(self, n: int) -> int:
        nums = [1]
        i2 = 0
        i3 = 0
        i5 = 0
        for i in range(1,1690): # 算出所有丑数（既然已经给出了范围）
            ugly  = min(nums[i2] * 2,nums[i3] * 3,nums[i5] * 5)
            nums.append(ugly)
            if(nums[i] == nums[i2] * 2): i2 += 1
            if(nums[i] == nums[i3] * 3): i3 += 1
            if(nums[i] == nums[i5] * 5): i5 += 1
        return nums[n-1]
# reference https://leetcode-cn.com/problems/ugly-number-ii/solution/chou-shu-ii-by-leetcode/