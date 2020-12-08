class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) { // 找有没有一个数，并且矩阵本身是有序的，那么就将行或列选一个从高到低，另一个从低到高进行筛选即可。
        if (matrix.size() == 0 || matrix[0].size() == 0) return false;
        int cols = matrix[0].size();
        int rows = matrix.size();
        int row = 0, col = cols - 1;
        while (row < rows && col >=0) {
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] > target) col--;
            else row++;
        } 
        return false;
    }
};
