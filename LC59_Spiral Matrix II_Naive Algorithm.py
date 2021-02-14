class Solution:
    def generateMatrix(self, n: int) -> [[int]]: # 模拟法
        left, right, top, bottom = 0, n - 1, 0, n - 1
        mat = [[0 for _ in range(n)] for _ in range(n)]
        num, size = 1, n * n
        while num <= size:
            for i in range(left, right + 1): # left to right
                mat[top][i] = num
                num += 1
            top += 1
            for i in range(top, bottom + 1): # top to bottom
                mat[i][right] = num
                num += 1
            right -= 1
            for i in range(right, left - 1, -1): # right to left
                mat[bottom][i] = num
                num += 1
            bottom -= 1
            for i in range(bottom, top - 1, -1): # bottom to top
                mat[i][left] = num
                num += 1
            left += 1
        return mat

# reference https://leetcode-cn.com/problems/spiral-matrix-ii/solution/spiral-matrix-ii-mo-ni-fa-she-ding-bian-jie-qing-x/