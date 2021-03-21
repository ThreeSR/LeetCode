class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { // 模拟法
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row(m), col(n); // 记录零的行位置和列位置
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!matrix[i][j]) {
                    row[i] = col[j] = true;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] || col[j]) { // 零的同行或者同列置零
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


// reference https://leetcode-cn.com/problems/set-matrix-zeroes/solution/ju-zhen-zhi-ling-by-leetcode-solution-9ll7/