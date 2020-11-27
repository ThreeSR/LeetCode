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
private:
    vector<int> inorder;
    void traversal(TreeNode* root){ // BST的性质就是，将tree按照中序遍历转成数组，会是递增的，我们可以以此判断BST
        if (root == NULL) return; // void函数也可以写return，return；即可
        traversal(root->left); // 中序遍历，把结果放入inorder中
        inorder.push_back(root->val);
        traversal(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        traversal(root); // 中序遍历
        for (int i = 1; i < inorder.size(); i++){ // 按照BST性质进行判断。注意：BST中元素也不能相等，所以只能是单调递增序列，因此if是大于等于
            if (inorder[i - 1] >= inorder[i]){
                return false;
            }
        }
        return true;
    }
};

// reference https://leetcode-cn.com/problems/validate-binary-search-tree/solution/98-yan-zheng-er-cha-sou-suo-shu-di-gui-die-dai-xia/ 详见Solution