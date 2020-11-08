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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        if(root!=NULL) q.push(root);
        int counter = 0;
        vector<vector<int>> res;
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i=0;i<size;++i){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(counter%2==0){
                res.push_back(temp);
            }
            else{
                reverse(temp.begin(),temp.end());
                res.push_back(temp);
            }
            counter++;
        }
        return res;
    }
};