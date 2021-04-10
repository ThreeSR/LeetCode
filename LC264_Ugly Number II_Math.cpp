class Solution {
public:
    int nthUglyNumber(int n) { // 数学，三指针
        vector<int> nums;
        nums.push_back(1);
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i = 1; i < n; i++) { // 算出所有丑数，直到所需的第n个为止
            int ugly = min(nums[i2] * 2, min(nums[i3] * 3,nums[i5] * 5)); // 从小到大，按照丑数定义收集丑数
            nums.push_back(ugly); // 将丑数放进结果数组中
            if(nums[i] == nums[i2] * 2) i2++; // 指针移动，从小到大地寻找丑数
            if(nums[i] == nums[i3] * 3) i3++;
            if(nums[i] == nums[i5] * 5) i5++;
        }
        return nums[n-1];  // 返回第n个丑数
    }
};


// reference https://leetcode-cn.com/problems/ugly-number/solution/ti-yi-lei-jie-yi-wen-dai-ni-shua-san-dao-p0pm/
