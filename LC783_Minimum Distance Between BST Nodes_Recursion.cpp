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
    void traversal(TreeNode* root, vector<int>& result) { // 第一步：中序遍历，得到递增数组
        if (root == nullptr) return;
        traversal(root->left, result); // 左
        result.push_back(root->val); // 中
        traversal(root->right, result); // 右
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        int res = INT_MAX; // 为了找最小，所以初值是最大
        for (int i = 1; i < result.size(); i++) { // 第二步：对有序数组处理，得最小差值。最小差值肯定是两个相邻节点间的，否则差距更大。BST中没有相等节点，都是有序的。
            res = min(res, result[i] - result[i - 1]);
        }
        return res; // 得最小差值
    }
};


// reference https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes/solution/yi-ti-shuang-jie-liang-chong-fang-fa-fei-ieqc/
