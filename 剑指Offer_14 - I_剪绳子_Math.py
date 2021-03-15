class Solution: # 数学，求导
    def cuttingRope(self, n: int) -> int:  # 根据链接中的数学推导，我们得知：针对这种题目，需要尽量分配3，即3的个数要尽量地多
        if n <= 3: return n - 1 # 根据题目要求，如果数值太少，就是输出这样的数值
        a, b = n // 3, n % 3 # 以3为基准
        if b == 0: return int(math.pow(3, a)) # 如果数值可以被3整除，那么就全部都是3进行相乘即可
        if b == 1: return int(math.pow(3, a - 1) * 4) # 如果会留一个数，那就是留一个1。这时候要把前面的3变成2，送一个1给1，变成2*2，大于1*3
        return int(math.pow(3, a) * 2) # 如果最后剩两个数，那么老老实实乘上2即可，不用再变动，不然更小

# reference https://leetcode-cn.com/problems/jian-sheng-zi-lcof/solution/mian-shi-ti-14-i-jian-sheng-zi-tan-xin-si-xiang-by/
# 相关题解与证明见链接中的内容，非常详细