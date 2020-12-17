class Solution {
public:
    int maxProduct(vector<int>& nums) { // 动态规划
        int max1 = INT_MIN, max2 = 1, min2 = 1; // 初始化 max1用在最后的max中，防止0的中间插入；max2和min2用于DP，一步步查找min与max，这种表达式也是防止了0的出现的干扰
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0 ) swap(max2, min2); // 这一点非常关键！ 其实我们要求的是max，但是min也在一步步求值中保留下来。这是防止负数。一旦有负数，min与max就要翻转。
            max2 = max(nums[i], nums[i] * max2); // DP求max
            min2 = min(nums[i], nums[i] * min2); // 同时为防止负数，也要保留DP求min
            max1 = max(max1, max2); // 防止中间插0.这样做可以得到最终的最大值 
        }
        return max1;
    }
};

// reference https://leetcode-cn.com/problems/maximum-product-subarray/solution/hua-jie-suan-fa-152-cheng-ji-zui-da-zi-xu-lie-by-g/