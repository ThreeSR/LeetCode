class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = [1]  # 初始的1是很关键的，在后续理解索引值上很重要
        p = q = 1
        for i in range(len(nums) - 1):  # 下三角矩阵，注意，这里取不到len(nums) - 1，只能到len(nums) - 2
            p *= nums[i]
            res.append(p)  # 存入下三角数值的乘积
        for j in range(len(nums) - 1, 0, -1): # 上三角矩阵，取不到0
            q *= nums[j] 
            res[j - 1] *= q  # 合于一处就是乘积结果
        return res 

# reference https://leetcode-cn.com/problems/product-of-array-except-self/solution/product-of-array-except-self-shang-san-jiao-xia-sa/
# 具体解释见Solution中LC238_Ans的截图