class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0; // 特判
        if (nums.size() == 1) return nums[0];
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]); // 第一次进行选择地偷盗
        for (int i = 2; i < nums.size(); i++) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]); // 状态转移
        }
        return dp[nums.size() - 1];
    }
};

// reference https://mp.weixin.qq.com/s/UZ31WdLEEFmBegdgLkJ8Dw
