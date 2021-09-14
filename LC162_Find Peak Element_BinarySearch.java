class Solution {
    public int findPeakElement(int[] nums) { // 二分搜索
        int left = 0, right = nums.length - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
}

// 本题是非典型的二分搜索，尽管数组是无序的，但不影响搜索结果
// 当看到时间复杂度的要求是O(logn)时，就应该想到二分搜索

// reference https://leetcode-cn.com/problems/find-peak-element/solution/hua-jie-suan-fa-162-xun-zhao-feng-zhi-by-guanpengc/