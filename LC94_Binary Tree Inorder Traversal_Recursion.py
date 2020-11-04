# -*- coding: utf-8 -*-
"""
Created on Wed Nov  4 13:48:40 2020

@author: Three
"""

# Definition for a binary tree node.
class TreeNode:
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right
class Solution:
    def inorderTraversal(self, root):
        if root is None: return [] # 审题，要输出list不是int

        return self.inorderTraversal(root.left) + [root.val] + self.inorderTraversal(root.right)

root = TreeNode(2)
root.left = TreeNode(10)
root.right = TreeNode(24)

res = Solution()
print(res.inorderTraversal(root))