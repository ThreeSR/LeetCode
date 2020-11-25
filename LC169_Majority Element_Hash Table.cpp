class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int result;
        for(int i = 0; i < nums.size(); i++){ // 这一步是hash表常用方法，很经典
            map[nums[i]]++;
            if(map[nums[i]] > nums.size() / 2){ // 如果已经判断是最多元素，那么直接不用比，输出结果就好
                result = nums[i];
                break;
            }
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/majority-element/solution/zi-jie-ti-ku-169-jian-dan-duo-shu-yuan-su-1shua-by/

// 注意：C/C++中，/如果前后是int类型，代表地板除。如果要更明确一些，可以用函数：floor()不大于自变量的最大整数,ceil()不小于自变量的最大整数,round()四舍五入到最邻近的整数 。