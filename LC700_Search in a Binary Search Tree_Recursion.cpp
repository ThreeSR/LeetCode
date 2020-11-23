/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) { // 本题虽然说要把子树输出出来，但其实只要输出root节点就好
        if(root == NULL || root->val == val) return root;
        if(root->val > val) return searchBST(root->left, val); // 递归，找寻节点
        if(root->val < val) return searchBST(root->right, val);
        return NULL;
    }
}; // 树的问题有涉及递归也有BFS，一般就这两种方法，尝试一下，便知一道题目应该用什么办法。

// reference https://mp.weixin.qq.com/s/vsKrWRlETxCVsiRr8v_hHg