class Solution {
public:
    int maxSubArray(vector<int>& nums) { // 动态规划
        if (nums.size() == 0) return 0; // 特判
        vector<int> dp(nums.size(),0); // dp的初始化
        int result; // 存放最大结果
        dp[0] = nums[0];
        result = nums[0];
        for (int i = 1; i < nums.size(); ++i){
            dp[i] = max(dp[i - 1] + nums[i], nums[i]); // 转移方程。注意不同DP题目建模细节不太相同，所以要弄清dp代表什么，转移方程具体怎么写。此处是求最大子序和，所以
            // 不同于很多DP，max中第二个是nums[i] rather than dp[i - 1]。
            if(dp[i] > result){ // 保留最大值，不然按照这样一步步转移，最后很可能是局部最优。这点也和很多DP问题不同
                result = dp[i];
            }
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/DrjIQy6ouKbpletQr0g1Fg