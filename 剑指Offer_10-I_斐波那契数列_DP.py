class Solution:
    def fib(self, n: int) -> int:
        a, b = 0, 1
        for _ in range(n):
            a, b = b, a + b
        return a % 1000000007

# 运用斐波那契数列迭代公式，勿用递归！！ 这样的思路与DP相仿