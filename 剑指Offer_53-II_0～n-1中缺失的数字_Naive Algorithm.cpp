class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                res = i;
                break;
            }
        }
        return res;
    }
};