class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int num : nums) {
            if (i < 1 || nums[i - 1] < num) nums[i++] = num;
        }
        return i;
    }
};


// reference https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/ju-yi-fan-er-ni-zhen-de-zhen-de-zhi-de-x-eicz/
