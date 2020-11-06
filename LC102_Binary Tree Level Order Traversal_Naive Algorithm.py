# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def levelOrder(self, root):
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
        return res
root = TreeNode(10)
root.left = TreeNode(5)
root.right = TreeNode(2)
root.left.left = TreeNode(6)
res = Solution()
print(res.levelOrder(root))

# reference https://leetcode-cn.com/problems/binary-tree-inorder-traversal/solution/python3-er-cha-shu-suo-you-bian-li-mo-ban-ji-zhi-s/

