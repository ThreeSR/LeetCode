int maxDepth(struct TreeNode *root) {
    if (root == NULL) return 0;
    return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
