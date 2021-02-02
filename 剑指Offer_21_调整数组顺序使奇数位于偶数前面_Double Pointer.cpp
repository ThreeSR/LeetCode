class Solution {
public:
    vector<int> exchange(vector<int>& nums) { // 双指针法
        int i = 0; // 头指针
        int j = nums.size() - 1; // 尾指针
        while (i < j) {
            while ((i < j) && (nums[i] % 2 == 1)) i++; // 保证前面的都是奇数
            while ((i < j) && (nums[j] % 2 == 0)) j--; // 保证后面的都是偶数
            swap(nums[i], nums[j]); // 如果能到这一步，说明前面有偶数，后面有奇数，那么这两个数需要调换位置。
        }
        return nums;
    }
};

// reference https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof/solution/mian-shi-ti-21-diao-zheng-shu-zu-shun-xu-shi-qi-4/