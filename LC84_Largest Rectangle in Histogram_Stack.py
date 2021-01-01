class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        result = 0
        heights = [0] + heights + [0] # 对heights左右添加零，这样一来，处理第一个元素和最后一个元素的时候，可以少讨论一些特例，可形象认为这是哨兵。
        # 类似的思想比如dummyHead node in 链表
        size = len(heights)
        stack = [0] # 一开始栈里面放零，对于最后一个元素的处理有关键作用；本题因为找勾勒出的最大矩形面积，在一个个寻找的时候，并不能马上找到
        # 最大矩形，我们需要有一个数据结构存放内容。在遇到一个高度很矮的直方图高度时，我们可以得到在前一个很高的高度下，矩形对应的面积。这意味着
        # 这个存放数据的结构应该是先进后出的。这样一来，就是stack了。
        # 接着要确定stack里面存放的是什么？存的是数组（或称直方图）中不同高度对应的index。我们存index，可以访问高度，又可以方便求width。这就是我们
        # 存index的想法初心。
        for i in range(1, size):
            while (heights[i] < heights[stack[-1]]):  # 如果当前高度比栈顶高度小
                curHeight = heights[stack.pop()]  # 那么栈顶元素出栈。这里python语句，stack.pop()已经包含两个动作：1.访问栈顶元素 2.栈顶元素出栈
                # 这一点和C++不同，C++中：stack.top() is used for visiting the top element. However, stack.top() do not remove the top one.最终
                # 删除要用stack.pop()，这两个步骤在C++中不连续，在python中合二为一。知道这一点在下面的width求值上很有帮助
                curWidth = i - stack[-1] - 1 # 求得矩形的宽度。注意：i在while循环下不变；为什么宽度是i - stack[-1] - 1?那个减一从何而来？上面说了
                # stack访问元素的同时，元素也会被删去，所以这个时候stack[-1]是一个新的元素，这个元素的数值是前一个访问内容的下标，不再是现在在手头的
                # 数值，所以width需要多减1，这就是求width运算的由来。
                result = max(result, curHeight * curWidth)  # 求得最大面积
            stack.append(i) # 入栈，经过上面的操作，你会发现在栈里面的元素是单调递增的，所以是单调栈。这道题的本质在于此
        return result

# reference https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/bao-li-jie-fa-zhan-by-liweiwei1419/  详细题解见链接
# 本题的解题本质是利用单调栈（monotone stack）