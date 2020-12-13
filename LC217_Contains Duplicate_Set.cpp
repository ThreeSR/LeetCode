class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> nums2(nums.begin(), nums.end()); // set去重
        if (nums2.size() != nums.size()) return true;
        return false;
    }
};
