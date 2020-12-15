class Solution {
public:
    int reverse(int x) {
        int y = 0;
        while (x != 0) {
            if (y > 214748364 || y < -214748364) return 0; // 溢出，那么输出为0
            y = y * 10 + x % 10; // y在变化的同时x也在变化，效率高
            x = x / 10;   
        }
        return y;
    }
};

// reference https://leetcode-cn.com/problems/reverse-integer/solution/hua-jie-suan-fa-7-zheng-shu-fan-zhuan-by-guanpengc/

// 溢出的数字是由2的31次方-1和负2的31次方决定。此外，由于这是x的界限，且x需要/10，所以实际上，214748364是2的31次方-1与负2的31次方除法之后的结果