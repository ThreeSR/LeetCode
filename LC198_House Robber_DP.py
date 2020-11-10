class Solution:
    def rob(self, nums: List[int]) -> int:
        if not nums: return 0
        dp = [0]*(len(nums)+1)
        dp[1] = nums[0]

        for i in range(2,len(nums)+1):
            dp[i] = max(dp[i-1],dp[i-2]+nums[i-1]) # 数组索引分清，nums取i-1纯粹是索引要求

        return dp[len(nums)]

# reference https://leetcode-cn.com/problems/house-robber/solution/dong-tai-gui-hua-jie-ti-si-bu-zou-xiang-jie-cjavap/
# dp用的是二维还是一维应分清