class Solution:
    def myPow(self, x: float, n: int) -> float: # 快速幂算法 数学
        result = 1
        if (x == 0.0) : return 0.0 # 注意float型的输出
        if (n < 0) : x, n = 1 / x, -n  # 负数次幂的处理，易忘易错
        while n:
            if (n & 1) : result *= x  # 满足影响result数值的条件
            x *= x # 不管能不能影响result，x都应该继续按照2的次幂变化
            n >>= 1 # 在每一次while循环中，n应该持续进行移位运算
        return result

# reference https://leetcode-cn.com/problems/powx-n/solution/50-powx-n-kuai-su-mi-qing-xi-tu-jie-by-jyd/
# 快速幂算法详见Solution中截图