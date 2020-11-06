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
private:
    vector<int> result;
    void traversal (Node* root) {
        if (root == NULL) return;
        result.push_back(root->val);
        for (int i = 0; i < root->children.size(); i++) {
            traversal(root->children[i]);
        }
    }

public:
    vector<int> preorder(Node* root) {
        result.clear();
        traversal(root);
        return result;  //这段代码目的在于满足原题要求
    }
};

// reference https://leetcode-cn.com/problems/n-ary-tree-preorder-traversal/solution/che-di-chi-tou-qian-zhong-hou-xu-di-gui-fa-di-gui-/