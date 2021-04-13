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
int result = INT_MAX;
TreeNode* pre;
void traversal(TreeNode* cur) { // 中序遍历，边遍历边比较
    if (cur == NULL) return;
    traversal(cur->left);   // 左
    if (pre != NULL){       // 中
        result = min(result, cur->val - pre->val); // 此时处理比较大小的事情
    }
    pre = cur; // 更新pre
    traversal(cur->right);  // 右
}
    int minDiffInBST(TreeNode* root) {
        traversal(root);
        return result; // 得到结果
    }
};


// reference https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes/solution/yi-ti-shuang-jie-liang-chong-fang-fa-fei-ieqc/
