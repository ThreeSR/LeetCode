class Solution {
public:
    int singleNumber(vector<int>& nums) { // 异或运算，对所有进行异或运算，最终得到的就是结果。
        int ret = 0;
        for (auto e: nums) ret ^= e;
        return ret;
    }
};

// reference https://leetcode-cn.com/problems/single-number/solution/zhi-chu-xian-yi-ci-de-shu-zi-by-leetcode-solution/


