class Solution {
public:
    bool isMonotonic(vector<int> &A) {
        return is_sorted(A.begin(), A.end()) || is_sorted(A.rbegin(), A.rend()); // 第二个迭代器是倒序的
    }
};

// 调用相关函数求解