class Solution { // 最长子序列问题
public:
    int findLengthOfLCIS(vector<int>& nums) { // 动态规划 dp[i]：以下标i为结尾的数组的连续递增的子序列长度为dp[i]。
        if (nums.size() == 0) return 0; // 特判
        int result = 1;
        vector<int> dp(nums.size() ,1); // 初始化赋值为1，因为本身可以算一个
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] > nums[i]) { // 连续记录，如果递增就进行状态转移方程
                dp[i + 1] = dp[i] + 1;
            }
            if (dp[i + 1] > result) result = dp[i + 1]; // 记下最大值，维护一个数值即可
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/c0Nn0TtjkTISVdqRsyMmyA