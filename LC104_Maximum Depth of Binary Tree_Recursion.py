# -*- coding: utf-8 -*-
"""
Created on Wed Nov  4 13:33:17 2020

@author: Three
"""
 
# Definition for a binary tree node.
class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
         
         
class Solution:
    def maxDepth(self, root):
        if root is None:
            return 0
        return max(self.maxDepth(root.left),self.maxDepth(root.right)) + 1
    
root = TreeNode(3)
root.left = TreeNode(10)
res = Solution()
print(res.maxDepth(root))
