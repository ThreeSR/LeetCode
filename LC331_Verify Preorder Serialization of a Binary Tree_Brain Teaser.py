class Solution:
    def isValidSerialization(self, preorder: str) -> bool: # 脑筋急转弯  善于发现前序遍历的规律
        stack = []
        for node in preorder.split(',') :
            stack.append(node)
            while (len(stack) >= 3 and stack[-1] == stack[-2] == '#' and stack[-3] != '#') :
                for i in range(3) :
                    stack.pop()
                stack.append('#')
        return len(stack) == 1 and stack.pop() == '#'
# reference https://leetcode-cn.com/problems/verify-preorder-serialization-of-a-binary-tree/solution/pai-an-jiao-jue-de-liang-chong-jie-fa-zh-66nt/
# 思路：
# 具体操作流程示例如下：

# 如输入： "9,3,4,#,#,1,#,#,2,#,6,#,#" ，当遇到 x # # 的时候，就把它变为 #。

# 模拟一遍过程：

# 9,3,4,#,# => 9,3,#，继续
# 9,3,#,1,#,# => 9,3,#,# => 9,# ，继续
# 9,#2,#,6,#,# => 9,#,2,#,# => 9,#,# => #，结束

# 为什么这么做？这是根据题目给定的数据结构定义相关。可以画出树形结构，根据题目要求，再进行前序遍历。发现如果满足上面的说法，那就是
# true的遍历，反之遍历是错误的。
