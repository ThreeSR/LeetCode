class Solution {
public:
    int removeDuplicates(vector<int>& nums) { // 数组操作，思路偏脑筋急转弯
        int i = 0;
        for (int num : nums) { // 遍历数组中的元素
            if (i < 2 || nums[i - 2] < num) nums[i++] = num; // 因为至多两个元素连续，并且根据题目要求元素大小递增
            // 新的nums是在原有的nums下更新的，这个新的nums不会把原来nums全部元素都更新，它会更新前面一部分的内容
            // 更新的范围就是0到i，最后return i就好。如果是返回更新之后的nums，那么在原有nums的基础上截取前i个的部分即可
        }
        return i;
    }
};

// reference https://leetcode-cn.com/u/yinyinnie/
// 本题是“原地改动”数组的模范题目，还有其他的“原地”修改的题目和本题思路相似，都是直接在原数组上进行更新，但前面更新之后的内容
// 不会影响到后面正在进行的操作。需要掌握这种思想