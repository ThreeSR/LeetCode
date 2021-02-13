class Solution { // 数学题
public:
    vector<int> getRow(int rowIndex) { // 根据杨辉三角上下两行元素数值之间的递推关系，可以写出代码
        vector<vector<int>> C(rowIndex + 1);
        for (int i = 0; i <= rowIndex; ++i) { // 对每一行处理
            C[i].resize(i + 1); // 改大小
            C[i][0] = C[i][i] = 1; // 赋初值，显然杨辉三角每一行最左侧和右侧为1
            for (int j = 1; j < i; ++j) {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j]; // 递推公式
            }
        }
        return C[rowIndex];
    }
};


// reference https://leetcode-cn.com/problems/pascals-triangle-ii/solution/yang-hui-san-jiao-ii-by-leetcode-solutio-shuk/
