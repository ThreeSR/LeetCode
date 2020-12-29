class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long res = 0; // 要用long，int会溢出
        for (int i = 0; i < 32; i++) { // 这一步和LC7——整数翻转的思路相同
            res = res * 2 + n % 2;
            n = n / 2;
        }
        return res;
    }
};

// 这里特别强调！：这题跟整数翻转很像，所以好像代码可以直接复制。但是有一点特别不同，就是这里的二进制要求是32bit，翻转之后会把前面的零
// 加在翻转后数字的末尾。也就是说，在十进制的时候，我们遇到第一个不为零的数开始翻转就好；但在这里，二进制都是32位，有的数并不是从非0数值开始
// 而是要把前面的0都包括进去。所以在写循环的时候，要用for循环（如上），不要用LC7中的 while(y != 0) 的循环判断！！