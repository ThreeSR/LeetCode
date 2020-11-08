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
    int minDepth(TreeNode* root) {
    queue<TreeNode*> q;
    if(root!=NULL){
        q.push(root);
    }
    else{
        return 0;
    }
    int depth = 1;
    int ans = 0;
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;++i){
            TreeNode* node = q.front();
            q.pop();
            if(node->left==nullptr && node->right==nullptr){
                ans = depth;
                break;
            } 
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        if(ans == depth) break;
        depth++;
        }
    return ans;
    }
};