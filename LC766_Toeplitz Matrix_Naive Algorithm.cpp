class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) { // 模拟法
        for (int i = 0; i < matrix.size() - 1; i++) {
            for (int j = 0; j < matrix[0].size() - 1; j++) {
                if (matrix[i][j] != matrix[i + 1][j + 1]) { // 本题虽是模拟法，但也讲究方法。只需要跟右下角的元素比较即可。
                    return false;
                }
            }
        }
        return true;
    }
};

// reference https://leetcode-cn.com/problems/toeplitz-matrix/solution/pan-duan-mei-ge-yuan-su-he-ta-de-you-xia-x3fi/