/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // 经典的BFS模板
public:
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*> q;
        int result = 0;
        if (root == nullptr) return 0;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left != nullptr && node->left->left == nullptr && node->left->right == nullptr) { // 因为要求是左节点，所以要有左边的倾向性。就是要加上->left！
                    result += node->left->val;
                }
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/gBAgmmFielojU5Wx3wqFTA