class Solution {
public:
    void rotate(vector<int>& nums, int k) {  // 脑筋急转弯，找到移动和翻转间的关系
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin() + k);
        reverse(nums.begin() + k, nums.end());       
    }
};