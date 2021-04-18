class Solution {
public:
    int countSubstrings(string s) { // 双指针法 中心扩展
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
        // 如果是中心拓展，无非两种情况，一种是奇数长度，中心为一个元素i；偶数长度，中心为i和i + 1
            result += extend(s, i, i, s.size()); // 以i为中心 
            result += extend(s, i, i + 1, s.size()); // 以i和i+1为中心
        }
        return result; // 输出一个字符串中回文字符串的个数
    }
    int extend(const string& s, int i, int j, int n) {
        int res = 0;
        while (i >= 0 && j < n && s[i] == s[j]) {
            i--;
            j++;
            res++;
        }
        return res;
    }
};

// reference https://mp.weixin.qq.com/s/2WetyP6IYQ6VotegepVpEw