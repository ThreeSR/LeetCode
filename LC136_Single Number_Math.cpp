class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return 0;
        int i = 1;
        while (i < nums.size()){ // 根据题目的要求，第一个出现落单的数字肯定是在排序后，两两比较不相等时前一个数字，所以取nums[i - 1]，return即可。
            if (nums[i] != nums[i - 1]){
                break;
            }
            i += 2;
        }
        return nums[i - 1];
    }
};

