class Solution {
public:
    int rob(vector<int>& nums) { // 动态规划
    // 本题和前面一道打家劫舍很像，唯一的不同在于这些住户是否成环。
    // 成环之后需要分类讨论。分成两类，一类是掐头去尾，因为成环，所以头尾在分析的时候只能“考虑”一个；
    // 另一类是掐尾去头，考虑前面不考虑结尾。
    // 注意！！：这里的考虑不是偷盗、考虑的房屋可能被偷，没有考虑的肯定不会被偷。这就是考虑和偷盗之间的关系
    // 为什么只需要考虑两种情况？ 根据题意，首尾一定不能同时盗窃，所以实际上有三种情况：1.偷头不偷尾；2.偷尾不偷头；3.头尾都不偷
    // 因为“考虑”不代表偷盗，所以其实考虑前面两种情况，第三种情况就已经包含其中。因此，我们分析两种情况即可。 
        if (nums.size() == 0) return 0; // 特判
        if (nums.size() == 1) return nums[0];
        int result1 = robRange(nums, 0, nums.size() - 2); // 1.偷头不偷尾
        int result2 = robRange(nums, 1, nums.size() - 1); // 2.偷尾不偷头
        return max(result1, result2); // 分析两种情况，给出最大值即可
    }
    // 下面的代码和LC198打家劫舍的逻辑相同
    int robRange(vector<int>& nums, int start, int end) {
        if (end == start) return nums[start];
        vector<int> dp(nums.size());
        dp[start] = nums[start];
        dp[start + 1] = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i <= end; i++) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[end];
    }
};

// reference https://mp.weixin.qq.com/s/kKPx4HpH3RArbRcxAVHbeQ
// 本题是升级版的LC198，相当于是两道LC198叠在一起