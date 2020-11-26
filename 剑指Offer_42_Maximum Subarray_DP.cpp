class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        vector<int> dp(nums.size(),0);
        int result = nums[0];
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i){
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            if (dp[i] > result){
                result = dp[i];
            }
        }
        return result;
    }
};

