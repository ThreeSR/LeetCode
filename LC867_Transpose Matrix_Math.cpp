class Solution {
public:
    vector<vector<int> > transpose(vector<vector<int>>& A) {
        int row = A.size(), col = A[0].size();
        vector<vector<int>> B(col, vector<int>(row, 0)); // 把原来矩阵的行列反转
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                B[j][i] = A[i][j];
            }
        }
        return B;
    }
};