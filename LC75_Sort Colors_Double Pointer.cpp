class Solution {
public:
    void sortColors(vector<int>& nums) { // 双指针法
        int p1 = 0, p2 = nums.size() - 1; 
        for (int i = 0; i < nums.size(); i++) {
            while (i <= p2 && nums[i] == 2) { // 当数值等于2的时候
                swap(nums[i], nums[p2]); // 与最右边进行交换，并且同时把最右指针-1
                p2--; // 因为只有0，1, 2三个数值，并且0在左，2在右。所以分析的时候，可以从0和2着手即可
            }
            if (nums[i] == 0) { // 数值为0时，与最左边的p1指针交换
                swap(nums[i], nums[p1]);
                p1++; // 交换之后，p1++
            }  // 这里先用while之后用if，是while处理2之后，才有if来处理1与0这两个选择的机会。需要先while，后面才有if。
        }
    }
};

// reference https://leetcode-cn.com/problems/sort-colors/solution/yan-se-fen-lei-by-leetcode-solution/