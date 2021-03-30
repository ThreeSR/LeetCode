class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { // 模拟法，从矩阵右上角元素开始。
        
        int column = matrix[0].size() - 1; // 列
        int row = 0; // 行
        while (row <= matrix.size() - 1 && column >= 0) {
            if (target == matrix[row][column]) {
                // 找到就直接返回
                return true;
            } else if (target < matrix[row][column]) {
                // 如果目标值小，那么下一步往左找
                column--;
            } else if (target > matrix[row][column]) {
                // 如果目标值大，那么下一步往下找
                row++;
            }
        }
        return false; // 没找到
    }
};

// reference https://leetcode-cn.com/problems/search-a-2d-matrix-ii/solution/3chong-jie-fa-zui-hao-de-ji-bai-liao-100-5ozh/