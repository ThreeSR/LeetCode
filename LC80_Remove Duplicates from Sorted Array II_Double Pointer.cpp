class Solution {
public:
    int removeDuplicates(vector<int>& nums) { // 双指针法
        int n = nums.size();
        if (n <= 2) { // 特殊判断，如果nums长度小于2，直接输出长度n即可
            return n;
        }
        int slow = 2, fast = 2; // 因为上面已经做过特殊判别，所以这里快慢指针从2开始
        while (fast < n) {
            if (nums[slow - 2] != nums[fast]) { // 因为题目要求最多两个数相同，所以这么判断
            // 如果nums[slow - 2] == nums[fast]，代表已经有两个数相等，此时nums[fast]
            // 对应的数值不能放进结果之中。反之，如果nums[slow - 2] != nums[fast]，
            // 那么nums[fast]可以放进nums[slow]中，并且slow++，记录结果的长度。
                nums[slow] = nums[fast]; 
                slow++;
            }
            fast++; // 不管怎么样，快指针都是要向前遍历各个元素的
        }
        return slow; // 返回结果的长度，即slow
    }
};

// reference https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/ju-yi-fan-er-ni-zhen-de-zhen-de-zhi-de-x-eicz/
