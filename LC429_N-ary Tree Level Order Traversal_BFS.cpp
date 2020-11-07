/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        if(root!=NULL) q.push(root);
        vector<vector<int>> res;
        vector<int> temp;
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;++i){
                Node* node = q.front();
                q.pop();
                for(int j=0;j<node->children.size();++j){ // size()方法已经检查节点有无
                    q.push(node->children[j]);  // 更多节点则进行遍历
                }
                temp.push_back(node->val);
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};

// reference https://leetcode-cn.com/problems/binary-tree-level-order-traversal/solution/er-cha-shu-ceng-xu-bian-li-deng-chang-wo-yao-da-sh/