# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isBalanced(self, root: TreeNode) -> bool: # 后序遍历
        def recur(root):
            if not root: return 0 # 特判
            left = recur(root.left) # 左
            if left == -1: return -1 
            right = recur(root.right) # 右
            if right == -1: return -1
            return max(left, right) + 1 if abs(left - right) <= 1 else -1 # 中

        return recur(root) != -1