# -*- coding: utf-8 -*-
"""
Created on Wed Nov  4 13:56:22 2020

@author: Three
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:

        if root is None: return []

        return [root.val] + self.preorderTraversal(root.left) + self.preorderTraversal(root.right)