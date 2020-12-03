class Solution {
public:
    int hammingDistance(int x, int y) { 布赖恩·克尼根算法，简而言之就是：一个数和这个数减1进行相与，结果就是消去最右边的1.这样一步步消去，看能消几次，代表有几个1.
        int distance = 0;
        int res = x ^ y; // 先进行异或，得到不同位置为1的数
        while (res) { // 计算1的个数，用算法
            res &= (res - 1);
            distance++;
        }
        return distance;
    }
};


// reference https://leetcode-cn.com/problems/hamming-distance/solution/yi-ming-ju-chi-by-leetcode/