/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // 本题采用迭代法，正是因为BST的属性，才可以用迭代，不然就要回溯，用递归，像LC236那样。
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) return root; // 特判
        while (root){ // 当root非空时
        if (root->val > p->val && root->val > q->val) root = root->left; // val大了向左
        else if (root->val < p->val && root->val < q->val) root = root->right; // val小了向右
        else return root; // 找到，返回root
        }
        return NULL; // 没有，则null
    }
};

// 详见LC235