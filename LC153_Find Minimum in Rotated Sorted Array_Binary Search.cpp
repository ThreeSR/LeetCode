class Solution {
public:
    int findMin(vector<int>& nums) { // 二分搜索，本题是力扣154的简化版
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right]) // 注意数组原本是递增，后来在某节点断开重接而已！
            left = mid + 1;
        else
            right = mid;
    }
    return nums[left];
    }
};