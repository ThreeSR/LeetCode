class Solution {  // 顺时针90°旋转一个矩阵，两步走： 1. 转置 2. 矩阵每一行顺序取反
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) { // 转置
            for (int j = i; j < matrix[0].size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < matrix.size(); i++) reverse(matrix[i].begin(), matrix[i].end()); // 每一行取反
    }
};

