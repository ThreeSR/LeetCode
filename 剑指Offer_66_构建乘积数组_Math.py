class Solution:
    def constructArr(self, a: List[int]) -> List[int]:
        if (len(a) == 0): return [] # 特判
        res = [1]  # 初始的1是很关键的，在后续理解索引值上很重要
        p = q = 1
        for i in range(len(a) - 1):  # 下三角矩阵，注意，这里取不到len(nums) - 1，只能到len(nums) - 2
            p *= a[i]
            res.append(p)  # 存入下三角数值的乘积
        for j in range(len(a) - 1, 0, -1): # 上三角矩阵，取不到0
            q *= a[j] 
            res[j - 1] *= q  # 合于一处就是乘积结果
        return res

# 本题和LC238 Product of Array Except Self一样
# LC238 https://github.com/ThreeSR/LeetCode/blob/main/LC238_Product%20of%20Array%20Except%20Self_Math.py