class Solution {
public:
    char findTheDifference(string s, string t) { // 位运算 异或
        char res = 0; // 注意，这里 int res = 0; 也可以通过，也就是说，char或int型都可以
        for (char c : s + t) {
            res ^= c; // 异或。个人理解应该是广义的异或，在一次次异或的过程中，相同为0，不同则完整保留。最终得到不同的那一个字母
        }
        return res;
    }
};

// reference https://leetcode-cn.com/problems/find-the-difference/solution/zhao-bu-tong-by-leetcode-solution-mtqf/