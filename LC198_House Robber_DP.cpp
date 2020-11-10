class Solution {
public:
    int rob(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }

    int N = nums.size();
    vector<int> dp(N+1, 0);
    dp[0] = 0;
    dp[1] = nums[0];
    for (int k = 2; k <= N; k++) {
        dp[k] = max(dp[k-1], nums[k-1] + dp[k-2]);
    }
    return dp[N];
    }
};