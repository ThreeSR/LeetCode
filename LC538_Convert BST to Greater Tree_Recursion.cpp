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
    int pre = 0;  // 用来存储前面节点的数值
    void traversal(TreeNode* root) { // 反中序遍历
        if (root == nullptr) return;
        traversal(root->right); // 右
        root->val += pre; // 中    这样的相加就可以将比现节点大的数值加在一起
        pre = root->val;
        traversal(root->left); // 左
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        if (root == nullptr) return nullptr; // 特判
        traversal(root);
        return root;
    }
};

// reference https://mp.weixin.qq.com/s/hZtJh4T5lIGBarY-lZJf6Q