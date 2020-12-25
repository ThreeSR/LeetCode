class Solution:
    def totalHammingDistance(self, nums: List[int]) -> int:
        res = 0
        n = len(nums)  
        for i in range(32):  # 根据数值大小的限制，移动位数最多定为31位即可
            countOnes = 0  # 计算1的出现个数
            for j in range(n):
                countOnes += (nums[j] >> i) & 0x1  # 把nums[j]右移，我们对nums中每个数字的一个数位统一进行1和0出现个数的统计。根据乘法原理，两个个数
                # 相乘就是汉明距离，也就是代表0和1能搭配在一起的个数。因为搭配在一起一次汉明距离+1，所以出现次数相乘就是汉明距离。我们对每个数的每个数位
                # 统一进行这样的处理，就可以得到最终的汉明距离。
                # 这里特别注意：！！一个数和1与运算不是本身！ 0 & 1 = 0 1 & 1 = 1  等于本身指的是数位，如果 8 & 1 = 1000 & 0001 = 0 != 8。这里要特别注意
                # 所以我们一个数和0x01与运算才可得到1出现的次数！！ 
                # 针对于右移运算，一个数某位为1，右移之后应该也是像为0那样，就直接消失了。比如 9 = 1001 >> 1 == 0100 == 4。如果用除法，就是9/2=4，地板除的功效。
            res += countOnes * (n - countOnes) # countOnes是1出现的次数，n-countOnes就是0出现的次数。
        return res 
# reference https://leetcode-cn.com/problems/total-hamming-distance/solution/python3-wei-yun-suan-zhi-yi-ming-ju-chi-zong-he-by/