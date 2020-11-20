class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse(s.begin(),s.begin()+n); // reverse函数取一个半开区间，取左不取右。从begin开始，至s.begin()+n-1结束。所以下一行的reverse还是从s.begin()+n开始
        reverse(s.begin()+n,s.end());
        reverse(s.begin(),s.end());
        return s;
    }
};

// reference https://mp.weixin.qq.com/s/PmcdiWSmmccHAONzU0ScgQ
// 本题解法很巧妙，通过三次reverse，得到目的。聪明但不具代表性。