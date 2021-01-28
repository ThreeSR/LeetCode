class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        for (int i = 0; i < nums.size(); i++) {
            leftSum += nums[i];
            rightSum = sum - leftSum + nums[i];
            if (leftSum == rightSum) return i;
        }
        return -1;
    }
};

// reference https://leetcode-cn.com/problems/find-pivot-index/solution/724-xun-zhao-shu-zu-de-zhong-xin-suo-yin-h18i/
/*
本题用最基本的模拟法就可求解，但是需要一定的数学推导：
由题目要求可知，中心索引左侧和值和右侧和值相等。那么左侧和值加上中心索引对应数值应该和右侧和值加上中心索引对应数值相等
上述解法中，leftsum就是左侧和值加上中心索引对应数值，那么与之对应相等的，就是右侧和值加上中心索引数值。
这样一来，就有了上述的leftsum与rightsum的代码
判断它们是否相等，输出索引即可。
*/