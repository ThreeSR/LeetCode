class Solution {
public:
    bool checkPossibility(vector<int>& nums) { // 模拟法 本题虽然简单，但很容易出错
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) { // 如果出现非递增
                int tempX = nums[i]; // 对数值进行记录
                int tempY = nums[i + 1];
                nums[i] = tempY; // 把较大数值赋成较小值
                if (is_sorted(nums.begin(), nums.end())) { // 判断整个数组是不是递增的
                    return true;
                }
                nums[i] = tempX; // 复原
                nums[i + 1] = tempX; // 把较小值赋成较大值
                return is_sorted(nums.begin(), nums.end()); // 判断递增与否
            }
        }
        return true;
    }
};

// reference https://leetcode-cn.com/problems/non-decreasing-array/solution/fei-di-jian-shu-lie-by-leetcode-solution-zdsm/

// 总结一下：如果是正常的情况，那就自然地走到return true就好；但是害怕如下情况：（这种情况决定了我们不能用很简单的统计非递增个数的方法）
// 1. 1 7 8 5 6 这个数组整体而言，只有一个数没有递增，就是5。大家很容易出错的就是这种情况，只统计了下降个数。显然，这边我们把8换成5，还是没办法
// 解决问题。
// 2. 针对上面的问题，更改的方案不只一种，也可以尝试把5换成8，变成1 7 8 8 6。显然，这样还是没办法解决问题。这样一来，尽管1 7 8 5 6的下降次数只有
// 一次，也需要return false。这表明仅仅统计下降次数是不可行的；此外，上面的两个方案的讨论就是代码在做的事情。

// 注：is_sorted(nums.begin(), nums.end())  可以用来判断nums是不是递增的，bool类型