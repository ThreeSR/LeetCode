class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        MAX = 0    # 一种很常见的MAX与MIN的赋值方法
        MIN = int(1e9) # 取一个很大的值
        for price in prices:
            MAX = max(MAX,price - MIN) # 最大利润 
            MIN = min(price,MIN) # 最小购入
        return MAX
# https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/solution/121-mai-mai-gu-piao-de-zui-jia-shi-ji-by-leetcode-/