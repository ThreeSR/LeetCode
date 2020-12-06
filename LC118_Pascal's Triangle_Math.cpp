class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triYangHui(numRows); // 先定义好杨辉三角的行数，此时还没有对应列数
        for (int i = 0; i < numRows; i++) {
            triYangHui[i].resize(i + 1); // 针对每一行，让其对应不同的列数。这时候三角形成型。所以构建这种结构，可以用两个vector实现
            triYangHui[i][0] = triYangHui[i][i] = 1;
            for (int j = 1; j < i; j++) triYangHui[i][j] = triYangHui[i - 1][j - 1] + triYangHui[i - 1][j];
        }
        return triYangHui;
    }
};

// reference https://leetcode-cn.com/problems/pascals-triangle/solution/yang-hui-san-jiao-by-leetcode-solution-lew9/
// 每个数字等于上一行的左右两个数字之和，可用此性质写出整个杨辉三角。即第 n 行的第 i 个数等于第 n-1 行的第 i-1 个数和第 i 个数之和。
