class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) { // 动态规划
        
        for (int i = 0; i < grid.size(); ++i){ // 没有必要再建一个dp数组，直接在grid上面进行修改即可。覆盖后的grid不会对结果产生影响，这样做可行。
            for (int j = 0; j < grid[0].size(); ++j){
                if (i == 0 && j == 0) continue; // i和j都是零，代表是自身，没有转移的过程，直接continue即可
                else if (i == 0) grid[i][j] += grid[i][j - 1]; // i=0，代表转移只能来自于一个方向，不用min
                else if (j == 0) grid[i][j] += grid[i - 1][j]; // j=0 同i=0 的操作
                else grid[i][j] = min(grid[i - 1][j], grid[i][j - 1]) + grid[i][j]; // 正常的转移方程
            }
        }
        return grid[grid.size() - 1][grid[0].size() - 1]; // 记得减1，不然超维度了
    }
};

// 设dp为大小m×n矩阵，其中dp[i][j]的值代表直到走到(i,j)的最小路径和。

// reference https://leetcode-cn.com/problems/minimum-path-sum/solution/zui-xiao-lu-jing-he-dong-tai-gui-hua-gui-fan-liu-c/