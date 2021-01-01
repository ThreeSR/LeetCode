class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        result = 0
        heights = [0] + heights + [0]
        size = len(heights)
        stack = [0]
        for i in range(1, size):
            while (heights[i] < heights[stack[-1]]):
                curHeight = heights[stack.pop()]
                curWidth = i - stack[-1] - 1
                result = max(result, curHeight * curWidth)
            stack.append(i)
        return result
    
    def maximalRectangle(self, matrix: List[List[str]]) -> int:
        row = len(matrix)
        if row == 0: return 0
        col = len(matrix[0])
        heights = [0] * col
        ans = 0
        for i in range(row):
            for j in range(col):
                if matrix[i][j] == "1":
                    heights[j] += 1
                else:
                    heights[j] = 0
            ans = max(ans, self.largestRectangleArea(heights))
        return ans

# 这道题可以和LC84一起写，可以把LC84当成API调用。
# 在本题中，可以把矩阵的每一行进行拆分、分析，如果这一行不为0，那么累积它之前的高度；如果为0，那么高度清零。
# 把每一行的高度数组heights送入LC84的API中，进行计算，得到最大矩形的面积。在最大矩形面积之间进行比较，最终得到一个最大的面积。