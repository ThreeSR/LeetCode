/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // 合并两棵树，分别对它们进行遍历，进行相加即可。遍历可以是前序，中序，后序。
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == nullptr) return t2; // t1无，那么t2上
        if (t2 == nullptr) return t1; // t2无，那么t1上
        t1->val += t2->val; // 前序遍历，对节点做处理
        t1->left = mergeTrees(t1->left, t2->left); // 左
        t1->right = mergeTrees(t1->right, t2->right); // 右
        return t1;
    }
};

// reference https://leetcode-cn.com/problems/merge-two-binary-trees/solution/617-he-bing-er-cha-shu-san-chong-di-gui-yi-chong-d/