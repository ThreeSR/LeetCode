/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution { // 递归
public:  
    int getDepth(TreeNode* root) {  // 递归在书写的时候，要注意对单层逻辑的处理。写好单层处理再进行总体递归。
        if (root == nullptr) return 0; // 特判
        int leftDepth = getDepth(root->left); // 左
        if (leftDepth == -1) return -1; // -1 代表不可行
        int rightDepth = getDepth(root->right); // 右
        if (rightDepth == -1) return -1;
        return abs(leftDepth - rightDepth) > 1 ? -1 : 1 + max(leftDepth, rightDepth); // 中
    } // 总体是后序，从叶子开始往上走，看什么时候不平衡，或者始终是平衡的
    bool isBalanced(TreeNode* root) {
        return getDepth(root) == -1 ? false : true; // 给出判断结果
    }
};

// reference https://mp.weixin.qq.com/s/isUS-0HDYknmC0Rr4R8mww