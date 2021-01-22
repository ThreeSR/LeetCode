class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) { // 数学题，和  力扣66——加一  有相似之处，都是需要对加法的数位相加，进位有一定了解。
        vector<int> res;  // 一般来说，遇到这种题目，应该明白不能用很naive的方法。这是常识。另外一点，从题目中A的长度和A中数值的取值范围也可以看出，不能
        // 转化为数字相加再转化为数组。
        int sum = 0;
        for (int i = A.size() - 1; i >= 0; i--) {  // 本题采用的方法是逐位相加的方法
            sum = A[i] + K % 10; // 位相加
            K /= 10; // 为下一位做准备
            if (sum >= 10) { // 如果需要进位
                sum %= 10; // 对这个数进行取10的模值
                K++; // 进位累积到K上
            }
            res.push_back(sum);
        }
        for (; K > 0; K /= 10) {  // 如果A刷过一遍之后，K还有盈余，那么就把剩余的K一位位地放进res中
            res.push_back(K % 10);
        }
        reverse(res.begin(), res.end());  // 不要忘记把顺序反过来才是对的
        return res;
    }
};

// reference https://leetcode-cn.com/problems/add-to-array-form-of-integer/solution/shu-zu-xing-shi-de-zheng-shu-jia-fa-by-l-jljp/