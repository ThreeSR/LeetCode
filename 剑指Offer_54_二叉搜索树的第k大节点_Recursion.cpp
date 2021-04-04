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
    void inorderTraversal(TreeNode* root, vector<int>& result) { // 中序遍历
        if (!root) return;
        inorderTraversal(root->left, result);
        result.push_back(root->val);
        inorderTraversal(root->right, result);
    }
    int kthLargest(TreeNode* root, int k) {
        vector<int> result;
        inorderTraversal(root, result);
        return result[result.size() - k]; // 根据BST的性质，先中序遍历再找到对应位置即可
    }
};

// 注意：对于BST而言，中序遍历之后就是从小到大的排序。

