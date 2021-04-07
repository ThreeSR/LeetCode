class Solution {
    public int search(int[] nums, int target) { // 思路和力扣88相同，但比力扣88简单，因为前置操作少
        int n = nums.length;
        int idx = 0;
        for (int i = 0; i < n - 1; i++) { // 找断点
            if (nums[i] > nums[i + 1]) {
                idx = i;
                break;
            }
        }
        int ans = find(nums, 0, idx, target); // 断点的前半段二分
        if (ans != -1) return ans;
        ans = find(nums, idx + 1, n - 1, target); // 断点的后半段二分
        // 上面的ans前对于idx是否限制主要取决于下面的二分模板怎么写，是return nums[l]还是nums[r]
        return ans;
    }
    int find(int[] nums, int l, int r, int target) {
        while (l < r) {
            int mid = l + r >> 1;
            if (nums[mid] >= target) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return nums[r] == target ? l : -1; // 如果这边是nums[l]，前面第二个ans前
        // 需要加判断，就是控制idx的数值不要越界
    }
}

// reference https://leetcode-cn.com/problems/search-in-rotated-sorted-array/solution/shua-chuan-lc-yan-ge-ologn100yi-qi-kan-q-xifo/