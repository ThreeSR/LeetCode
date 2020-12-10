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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return root; // 特判，第一种情况
        if (root->val == key) { // 找到了
            if (root->left == nullptr) return root->right; // 左空右不空，第二种情况
            else if (root->right == nullptr) return root->left; // 左不空，右空，第三种情况，实质也包含左右都空的第四种情况
            else { // 第五种情况，就是左右都有节点。这时候比较麻烦。对于有序树而言，需要一些翻转。BST中还算变化小，如果在平衡树（比如红黑树）中，会更复杂。
                TreeNode* cur = root->right; // 因为要保证BST的有序性，所以根节点的右节点接棒，根节点右节点的最左节点，也就是根的右子树最小值的左节点接上根节点的左子树。这样BST大小有序。
                while (cur->left != nullptr) { // 这是第五种情况，需要先得到最左节点
                    cur = cur->left;
                }
                cur->left = root->left; // 根的左子树接到最左节点的左边
                TreeNode* temp = root; // 准备完成节点的删除交接
                root = root->right; // 交接 
                delete temp; // 删除
                return root; // 返回根
            }
        }
        if (root->val > key) root->left = deleteNode(root->left, key); // 上面是相等的处理，这边是数值偏小的处理，递归
        if (root->val < key) root->right = deleteNode(root->right, key); // 偏大的处理，递归
        return root; // 返回根
    }
};

// reference https://mp.weixin.qq.com/s/-p-Txvch1FFk3ygKLjPAKw