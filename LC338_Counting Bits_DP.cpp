class Solution {
public:
    vector<int> countBits(int num) { // 布赖恩·克尼根算法 + DP，其实本身计算1的个数不难，但是加上DP就比较巧妙
        vector<int> result(num + 1, 0);
        for (int i = 1; i <= num; i++) {
            result[i] = result[i & (i - 1)] + 1; // result存储的就是对应数字的1的个数，DP的使用很巧妙
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/counting-bits/solution/bi-te-wei-ji-shu-by-leetcode/