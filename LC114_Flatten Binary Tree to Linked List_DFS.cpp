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
    void flatten(TreeNode* root) {  // DFS
        stack<TreeNode*> st;
        vector<TreeNode*> result;
        while(!st.empty() || root != nullptr){
            while(root != nullptr){  // 类似于前序遍历，把最左边的数值存入
                st.push(root);
                result.push_back(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            root = root->right; // 前序遍历
        }
        for(int i = 1; i < result.size(); ++i){ // 形成要求的输出格式，就是左边null，右边有数值
            auto prev = result[i - 1];
            auto curr = result[i];
            prev->right = curr;
            prev->left = nullptr;
        }
    }
};

// reference https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list/solution/er-cha-shu-zhan-kai-wei-lian-biao-by-leetcode-solu/