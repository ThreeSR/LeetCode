class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int curDiff = 0; 
        int preDiff = 0; // preDiff初值赋为0，有把长度为2的nums拉长的作用
        int result = 1; // 初值要从1开始，不然长度少一个
        if (nums.size() <= 1) return nums.size();
        for (int i = 1; i < nums.size(); ++i){ // i从1开始，因为后续要用到 nums[i - 1]
            curDiff = nums[i] - nums[i - 1];
            if ((preDiff >= 0 && curDiff < 0) || (preDiff <= 0 && curDiff > 0)){ // 寻找抖动的宗旨是找寻前后坡度不同导致的极值点个数，所以前一个大于零，后一个小于零
                result++;   // 但是一开始，preDiff初值为0，所以判断条件中要有 preDiff >= 0 和 preDiff <= 0 的情况。后续preDiff由curDiff赋值，因此不会再用到等于0的条件
                preDiff = curDiff;
            }
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/Xytl05kX8LZZ1iWWqjMoHA