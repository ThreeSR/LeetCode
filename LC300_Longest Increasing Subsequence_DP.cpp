class Solution {
public:
    int lengthOfLIS(vector<int>& nums) { // 动态规划 dp[i]表示以nums[i]结尾的最长子序列长度
        if (nums.size() == 0) return 0; // 特判
        vector<int> dp(nums.size(), 1); // dp初始化，每个数字自己都可以成为一个序列，所以长度为1
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) dp[i] = max(dp[i], dp[j] + 1); // 如果小于，则可以加进序列中 
            }
        }
        return *max_element(dp.begin(), dp.end()); // 返回vector里面的最大数值
    }
};

// reference https://leetcode-cn.com/problems/longest-increasing-subsequence/solution/zui-chang-shang-sheng-zi-xu-lie-dong-tai-gui-hua-2/