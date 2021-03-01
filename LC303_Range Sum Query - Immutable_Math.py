class NumArray: # 前缀和

    def __init__(self, nums: List[int]): 
        N = len(nums)
        self.preSum = [0] * (N + 1)
        for i in range(N):
            self.preSum[i + 1] = self.preSum[i] + nums[i] # 前缀和就是各项数值的累加，有点像GRE中的百分位数（percentile）的定义

    def sumRange(self, i: int, j: int) -> int:
        return self.preSum[j + 1] - self.preSum[i]  # 基于前缀和的定义，可以用这种尾端和值减去前端和值的方法得到中间从i到j覆盖范围内的和值


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)

