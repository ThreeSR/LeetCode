class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {  // 模拟法
        vector<vector<int>> result(r, vector<int>(c, 0));
        int row = 0;
        int col = 0;
        if (nums.size() * nums[0].size() != r * c) return nums; // 特判
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[0].size(); j++) { // 放置元素
                if (col == c) {
                    row++;
                    col = 0;
                }
                result[row][col] = nums[i][j];
                col++;
            }
        }
        return result;
    }
};
