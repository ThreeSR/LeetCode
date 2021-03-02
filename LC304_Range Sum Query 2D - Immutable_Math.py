class NumMatrix:

    def __init__(self, matrix: List[List[int]]): # 二维前缀和
        if not matrix or not matrix[0] : M, N = 0, 0 # 特判
        else : M, N = len(matrix), len(matrix[0])
        self.preSum = [[0] * (N + 1) for _ in range(M + 1)] # 前缀和初始化
        for i in range(M) :
            for j in range(N) :
                self.preSum[i + 1][j + 1] = self.preSum[i][j + 1] + self.preSum[i + 1][j] - self.preSum[i][j] + matrix[i][j]  # 每一步前缀和的数值

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int: # 依据前缀和，输出某一个矩形区域的面积
        return self.preSum[row2 + 1][col2 + 1] - self.preSum[row2 + 1][col1] - self.preSum[row1][col2 + 1] + self.preSum[row1][col1]



# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)

# reference https://leetcode-cn.com/problems/range-sum-query-2d-immutable/solution/ru-he-qiu-er-wei-de-qian-zhui-he-yi-ji-y-6c21/