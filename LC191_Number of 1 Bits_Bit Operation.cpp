class Solution {
public:
    int hammingWeight(uint32_t n) { // 注意：是相与&！不是异或！
        if (n == 0) return 0;
        int count = 0;
        while (n != 0) {
            n &= n - 1;
            count++; 
        }
        return count;
    }
};

// 本题和汉明距离很像，可以一起写。解题思路详见hamming距离