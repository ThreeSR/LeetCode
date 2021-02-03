class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) { // 动态规划
        vector<int> dp(target + 1, 0); // 初始化
        dp[0] = 1; // 这是没有意义的，纯粹是为了推导递推公式。
        for (int j = 0; j <= target; j++) { // 遍历背包
            for (int i = 0; i < nums.size(); i++) { // 遍历物品
                if ((j - nums[i] >= 0) && (dp[j] < INT_MAX - dp[j - nums[i]])) { // 加上第二个判断的原因是怕数据太大，超过范围
                    dp[j] += dp[j - nums[i]]; // 这个过程求的是排列数
                }
            }
        }
        return dp[target];
    }
};

// reference https://mp.weixin.qq.com/s/Iixw0nahJWQgbqVNk8k6gA

// 关于使用dp解决排列数和组合数的问题，会专门探讨。