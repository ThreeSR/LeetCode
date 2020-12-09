class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        return comb(m - 1 + n - 1, n - 1) # 调用相关API

# 组合数