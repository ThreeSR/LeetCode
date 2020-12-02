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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) { // 递归法，利用BST中node数值大小关系，写出下面代码
        while (root){
        if (root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q); // 数值大，向左走
        else if (root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q); // 数值小，向右走
        else return root; // 找到了，返回root。这次的BST搜索是自上而下的，所以可以成功找到。如果还是像LC236那样自下而上，会出问题。
        } // 换而言之，正是因为BST的特殊关系，才可以自上而下地搜索。这样还是比较方便的。不然要逐个分析，进行回溯，像236那样。
        return nullptr; // 没找到
    }
};

// reference https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree/solution/235-er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu--24/