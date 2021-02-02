class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) { // 数学题
        int sumA = accumulate(A.begin(), A.end(), 0); // C++中可以直接求和的函数
        int sumB = accumulate(B.begin(), B.end(), 0);
        int delta = (sumA - sumB) / 2; // 可以对本题先进行简单的数学推导，然后得到这个式子
        vector<int> result;
        unordered_set<int> table(A.begin(), A.end()); // 把元素存入表中，之后方便查看各个元素是否存在
        for (auto& y : B) {
            int x = y + delta; // 式子由数学推导得到。如果满足题目要求，那么x与y应该有这样的关系。可以从y入手找可否有x存在
            // 因此用到哈希表判断一个数值是否存在
            if (table.count(x)) {
                result = vector<int> {x, y};
                break;
            }
        }
        return result;
    }
};

// 题目虽简单，但还是有值得学习的处理方法；
// 因为返回一个即可，所以可使用unordered_set<int>；
// accumulate方法在C++中可以有求和效果。