class Solution {
public:
    int maxSubArray(vector<int>& nums) { // 动态规划
        if (nums.size() == 0) return 0;
        vector<int> dp(nums.size(), 0); // dp代表滑动过程中，当下的最大值
        dp[0] = nums[0];
        int result = dp[0]; // 用result存储全局最大值
        for (int i = 1; i < nums.size(); i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]); // 保存当下的最大值，注意：这里存储的数值不一定就是全局最大值！！！！
            if (dp[i] > result) result = dp[i]; // 找寻全局最大值，并且存储下来
        }
        return result; // 输出结果
    }
};

// reference https://mp.weixin.qq.com/s/2Xtyi2L4r8sM-BcxgUKmcA
// 本题注意：求的是 连续 子数组!!