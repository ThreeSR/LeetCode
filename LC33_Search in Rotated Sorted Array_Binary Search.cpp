class Solution {
public:
    int search(vector<int>& nums, int target) { // 二分搜索法   往往来说，这种有序数列的查找就需要二分搜索
        int n = nums.size();
        if (n == 0) return -1;
        if (n == 1) return nums[0] == target ? 0:-1;
        int left = 0, right = n - 1, mid;
        while (left <= right) { // 二分搜索
            mid = left + (right - left) / 2; // 这样赋值更好
            if (nums[mid] == target) return mid; // 找到了
            if (nums[0] <= nums[mid]) { // 二分    ！特别注意！：这里要取等号，因为mid可能等于0
                if ((nums[0] <= target) && (target < nums[mid])) right = mid - 1;
                else left =  mid + 1;
            }
            else {
                if ((nums[mid] < target) && (target <= nums[n - 1])) left = mid + 1;
                else right = mid - 1;                
            }
        } 
        return -1;    
    }
};

// reference https://leetcode-cn.com/problems/search-in-rotated-sorted-array/solution/sou-suo-xuan-zhuan-pai-xu-shu-zu-by-leetcode-solut/
// 本题虽然中间某点开始顺序有一定混乱，但分割成两部分，各个部分都是顺序的。所以本题还是可以使用二分法。但使用过程中，要记得把判断条件写好。
// 题解截图见Solution