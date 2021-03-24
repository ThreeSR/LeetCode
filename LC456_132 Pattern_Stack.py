class Solution(object):
    def find132pattern(self, nums): # 单调栈  因为本题只要求判断是否存在132模式，所以本着找到的原则即可。
    # 如果以当前元素为3，那么找寻从数组开始到当前元素终止的这段区间中的min，当做1；取从当前位置到末尾位置
    # 的元素中，仅比当前元素小的最大元素为2.最后将1与2的大小进行比较，如果可行，那么得到132模式，否则继续
    # 寻找，直到不行为止。
        N = len(nums)
        leftMin = [float("inf")] * N # 用来存储从开始位置到i位置的最小值
        for i in range(1, N):
            leftMin[i] = min(leftMin[i - 1], nums[i - 1]) # 得到区间的最小值，这个方法很好
        stack = [] # 单调栈
        for j in range(N - 1, -1, -1): # 根据132模式的要求以及思路，我们需要从右往左遍历
            numsk = float("-inf") # 此处为了后续判断，需要赋值为最小值
            while stack and stack[-1] < nums[j]: # 维护单调递减栈
                numsk = stack.pop() # 为了下面判断2的存在，这里弹出数值
            if leftMin[j] < numsk: # 判断2是否可行
                return True # 一旦找到132模式，那么就输出
            stack.append(nums[j]) # 向栈中增加元素
        return False

# reference https://leetcode-cn.com/problems/132-pattern/solution/fu-xue-ming-zhu-cong-bao-li-qiu-jie-dao-eg78f/