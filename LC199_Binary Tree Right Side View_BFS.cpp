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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        if(root != NULL){
            q.push(root);
        }
        while(!q.empty()){
            int size = q.size();
           for(int i=0;i<size;++i){
               auto node = q.front();
               q.pop();
               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
               if(i==size-1) res.push_back(node->val); 
            } 
        }
        return res;
    }
};