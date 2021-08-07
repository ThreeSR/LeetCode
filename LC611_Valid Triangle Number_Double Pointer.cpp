class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = nums.size() - 1; i >= 2; i--) {
            int left = 0;
            int right = i - 1;
            while (left < right) {
                if (nums[left] + nums[right] > nums[i]) {
                    res += right - left;
                    right--;
                }
                else left++;
            }
        }
        return res;
    }
};