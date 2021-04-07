class Solution {
public:
    bool search(vector<int>& nums, int t) { // 二分搜索
        int n = nums.size();
        int left = 0, right = n - 1;
        // 恢复二段性（这个术语来自于参考链接）
        // 链接中作者表达的意思就是，删去数组末尾的相同数字，保留一个即可
        // 但其实数组的开头也会有重复数字，比如[1,1,1,2,1,1,1]。前后都有重复，
        // 后面可以通过下面的方法删去，前面的应该也要做一些处理。只不过对于前面的
        // 处理，我们在二分的时候做：就是和nums[0]比大小，一直让left指针往右边靠，
        // 详见下面二分的具体过程。
        while (left < right && nums[0] == nums[right]) right--;

        // 第一次二分，找旋转点
        while (left < right) {
            int mid = (left + right + 1) >> 1; // 向上取整，因为要与nums[0]比较大小
            // 这一点不同于很多时候，因为一般习惯和right对应的数值比大小，所以是
            // 向上取整，不是平时的向下取整。这一点要特别注意！！
            if (nums[mid] >= nums[0]) { // 一直和nums[0]比较
                left = mid; // 左指针left一直往右边靠，可以解决数组前端重复数字的问题
            } else {
                right = mid - 1;
            }
        } // 这个while循环找到的是数组中的最大值，就是right。right + 1就是最小值。
        
        int index = n; // 这种情况是防止给予的index在下面的index - 1中变成-1，过界。
        // 因为n是nums的长度，如果给index为n - 1（n等于1时），后面会出问题。这里不要
        // 担心后续第二次二分左边界大于右边界的问题，因为这不对结果造成影响。
        if (right + 1 < n) index = right + 1; // 这里是判断right是不是在原数组的最后
        // 的位置上。如果是，那么整个数组是有序未断开的，index用上面的n即可；如果不是，那么
        // 中途有断点，我们依照断点，划分前后数组，分别进行二分搜索即可。

        // 第二次二分，找目标值。这个过程又涉及两个子二分过程
        int ans = find(nums, 0, index - 1, t); // 对前半段有序内容进行二分
        if (ans != -1) return true;
        ans = find(nums, index, n - 1, t); // 对后半段有序内容进行二分,这里index大于n - 1
        // 没关系，因为如果那样，最终也是输出-1，这是下面的二分搜索模板定好的，不用担心。
        return ans != -1;
    }
    // 下面是正常的二分搜索模板
    int find(vector<int>& nums, int l, int r, int t) {
        while (l < r) {
            int mid = l + r >> 1;
            if (nums[mid] >= t) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return nums[r] == t ? r : -1;
    }
};

// reference https://leetcode-cn.com/problems/search-in-rotated-sorted-array-ii/solution/gong-shui-san-xie-xiang-jie-wei-he-yuan-xtam4/