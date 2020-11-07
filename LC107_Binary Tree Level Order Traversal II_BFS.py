# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:

        if not root: return []
        cur,res = [root],[]
        while cur:
            lay,layval = [],[]
            for node in cur:
                layval.append(node.val)
                if node.left: lay.append(node.left)
                if node.right: lay.append(node.right)
            cur = lay
            res.append(layval)        
        return list(reversed(res))
# 相较于102，加一个 list(reversed(res)) 的Python内置方法即可。这个方法就是用于反转list的。