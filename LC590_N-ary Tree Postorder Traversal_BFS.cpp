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
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(root==NULL) return res;
        stack<Node*> s;
        s.push(root);
        while(!s.empty()){
            int size = s.size();
            for(int i=0;i<size;++i){
                Node* node = s.top();
                s.pop();
                for(int j=0;j<node->children.size();++j){
                    s.push(node->children[j]);
                }
                res.push_back(node->val);
            }
        }
        reverse(res.begin(),res.end());  // 用栈的目的是使得进入的数据成为中右左的顺序，所以反转，成为左右中，成为后序遍历
        return res;
    }
};