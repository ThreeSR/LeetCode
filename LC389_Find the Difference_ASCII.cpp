class Solution {
public:
    char findTheDifference(string s, string t) { // ASCII码的应用
        int sumS = 0, sumT = 0;
        for (char c : s) sumS += c;
        for (char c : t) sumT += c;
        return sumT - sumS;
    }
};

// reference https://leetcode-cn.com/problems/find-the-difference/solution/zhao-bu-tong-by-leetcode-solution-mtqf/