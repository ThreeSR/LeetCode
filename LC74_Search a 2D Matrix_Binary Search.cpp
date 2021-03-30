class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { // 二分法，核心思想是把矩阵拉成一条数组。
        // 可行的原因是每一行开头的数值比上一行末尾的大。可以把下一行拼接到上一行，最后将矩阵变成一行。
        int m = matrix.size(), n = matrix[0].size(); // 得到矩阵行和列
        int left = 0, right = m * n - 1; // 左边位置和右边位置
        while (left <= right) { // 二分法套路
            int mid = (right - left) / 2 + left; // 这样设置防止溢出的风险
            int x = matrix[mid / n][mid % n]; // 善于利用矩阵位置和除法运算与取模运算的关系
            if (x < target) { // 目标数值太大
                left = mid + 1;
            } else if (x > target) { // 目标数值小
                right = mid - 1;
            } else {
                return true; // 找到了
            }
        }
        return false; // 没找到
    }
};

// reference https://leetcode-cn.com/problems/search-a-2d-matrix/solution/sou-suo-er-wei-ju-zhen-by-leetcode-solut-vxui/