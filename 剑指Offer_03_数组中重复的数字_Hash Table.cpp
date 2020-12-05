class Solution {
public:
    int findRepeatNumber(vector<int>& nums) { // 利用哈希表统计次数，大于1，找一个出来即可。
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        int result;
        for (int i = 0; i < nums.size(); i++) {
            if (map[nums[i]] > 1) {
                result = nums[i];
                break;
            } 
        }
        return result;
    }
};