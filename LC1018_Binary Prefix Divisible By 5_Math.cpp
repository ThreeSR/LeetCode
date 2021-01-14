class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) { // 数学题
        vector<bool> result;
        long long val = 0;  // int就可以了
        for (int i = 0; i < A.size(); i++) {
            val = ((val << 1) + A[i]) % 5;  // 其实我们只关心余数，所以取余再进行后续运算即可。
            // 本题的难点就在于此，如果不这么操作，即使是long long类型的数据，也会溢出。这样做可以
            // 保证结果依然正确，因为我们只关心余数。结论的证明见链接中内容。 
            result.push_back(val == 0);
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/binary-prefix-divisible-by-5/solution/ke-bei-5-zheng-chu-de-er-jin-zhi-qian-zh-asih/