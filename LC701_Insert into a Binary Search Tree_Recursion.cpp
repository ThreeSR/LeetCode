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
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) { // 增加的节点和原有的都不相同
        if (root == NULL ) { // 节点空，就加一个，然后返回
            TreeNode* node = new TreeNode(val);
            return node;
        }
        if (val > root->val) root->right = insertIntoBST(root->right, val); // 因为BST有序，所以可以这样增加。注意，增加的和原有的不同，所以不取等号
        if (val < root->val) root->left = insertIntoBST(root->left, val);
        return root;        
    }
};

// reference https://mp.weixin.qq.com/s/lwKkLQcfbCNX2W-5SOeZEA