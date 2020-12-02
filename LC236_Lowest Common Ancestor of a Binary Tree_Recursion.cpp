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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) { // 递归
        if (root == q || root == p || root == nullptr) return root; // 基线条件，找到或没找到相应数值
        TreeNode* left = lowestCommonAncestor(root->left, p, q); // 因为要分析最早遇到的祖先，所以还是要全局考虑，即分析整棵树。采取后序遍历，后序遍历是天然的回溯过程，可以实现
        // 每个node的分析
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if (left != nullptr && right != nullptr) return root; // 对后序遍历的结果进行分析，如果left和right都有，那么这个目前的root就是最早遇到的祖先，return即可。
        if (left == nullptr) return right; // 如果left没找到，直接return right即可，因为不论right是有是无，left都没机会了，所以return right。
        return left; // left有就return left
    }
};

// reference https://mp.weixin.qq.com/s/n6Rk3nc_X3TSkhXHrVmBTQ 更详细的递归分析见链接