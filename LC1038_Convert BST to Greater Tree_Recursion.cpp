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
class Solution {
private:
    int pre = 0; 
    void traversal(TreeNode* root) {
        if (root == nullptr) return;
        traversal(root->right);
        root->val += pre;
        pre = root->val;
        traversal(root->left);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        if (root == nullptr) return nullptr;
        traversal(root);
        return root;
    }
};

// 和LC538相同