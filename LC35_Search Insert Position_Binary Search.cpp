class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { // 二分搜索
        int left = 0, right = nums.size() - 1;
        int mid;
        while (left <= right) { // 这是典型的二分搜索的代码，需要非常注意的是取边界的问题
            mid = left + (right - left) / 2; // 防溢出
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return right + 1; // right + 1 其实包含了本题的多种情况。比如，元素要插在一开头，此时right本来是-1，会变成-1+1=0；如果元素插在最后，那本就是right+1；如果元素
        // 插在不曾出现的地方，因为此时left==right，所以还是放置在right+1的地方。总之，放置位置会偏右。
    }
};

// reference https://mp.weixin.qq.com/s/fCf5QbPDtE6SSlZ1yh_q8Q