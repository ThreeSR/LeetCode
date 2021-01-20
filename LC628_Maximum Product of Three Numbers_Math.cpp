class Solution {
public:
    static bool cmp(const int a, const int b) {
        return a < b;
    }
    int maximumProduct(vector<int>& nums) {  // 数学题
        sort(nums.begin(), nums.end(), cmp); // 排序
        int n = nums.size();
        // 本题最应该注意的就是会有负数的出现。针对于负数，我们需要分类讨论：
        // 首先要明确，我们为什么对负数进行分类讨论？ 其实就是怕两个负数一个正数的情况。如果数组里面的数任取三个数，都是正的或者是
        // 负的，那么就不用讨论了，直接排序出结果就好。明白了这一点，下面一行代码就可以看懂了，其实就是考虑了两个负数一个正数的情况。
        return max(nums[0] * nums[1] * nums[n - 1], nums[n - 1] * nums[n - 2] * nums[n - 3]);
    }
};

// reference https://leetcode-cn.com/problems/maximum-product-of-three-numbers/solution/san-ge-shu-de-zui-da-cheng-ji-by-leetcod-t9sb/