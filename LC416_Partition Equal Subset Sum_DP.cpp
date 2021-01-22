class Solution {
public: 
    bool canPartition(vector<int>& nums) {  0-1背包问题，套用模板即可
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        if (sum % 2 != 0) return false;
        int weight = sum / 2;
        vector<int> dp(weight + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = weight; j >= nums[i]; j--) {
                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
            }
        }
        if (dp[weight] == weight) return true;
        else return false;
    }
};