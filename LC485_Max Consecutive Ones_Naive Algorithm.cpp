class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { // 模拟法
        if (nums.size() == 0) return 0; // 特判
        int maxNum = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) { // 遍历一遍
            if (nums[i] == 1) { // 遇到1，就计数+1
                count++;
            }
            if (nums[i] == 0 || i == nums.size() - 1) { // 遇到0或者是最后一位了
                maxNum = max(maxNum, count); // 找到最大的数值，仅关注最大count即可
                count = 0; // 清零
            }
        }
        return maxNum;
    }
};