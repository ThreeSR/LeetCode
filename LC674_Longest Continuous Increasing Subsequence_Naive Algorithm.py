class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int: # 模拟法
        res = []
        i = 0
        while (i < len(nums)):
            count = 1
            while (i + 1 < len(nums) and nums[i] < nums[i + 1]): # 满足条件的就加一
                count += 1
                i += 1
            res.append(count);
            i += 1
        return max(res) if res else 0  # 特判，防止res就没有东西

# reference https://leetcode-cn.com/problems/longest-continuous-increasing-subsequence/submissions/