class Solution {
public:
    int uniquePaths(int m, int n) { // 组合数可解
        long long ans = 1; // 注意数据类型
        for (int x = n, y = 1; y < m; ++x, ++y) { // 注意，这里组合数的处理可以分子分母乘法一起做，相当于乘法拆分再结合
            ans = ans * x / y; // 日后在写长串公式时，可以这么做
        }
        return ans;
    }
};