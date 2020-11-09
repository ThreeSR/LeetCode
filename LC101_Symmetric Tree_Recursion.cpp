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
    bool check(TreeNode* p,TreeNode* q) {
        if(!p && !q) return true;
        if(!p || !q) return false;
        return (p->val) == (q->val) && check(p->left,q->right) && check(p->right,q->left); 
    }
public:
    bool isSymmetric(TreeNode* root){
        return check(root,root);
    }
};

// reference https://leetcode-cn.com/problems/symmetric-tree/solution/dui-cheng-er-cha-shu-by-leetcode-solution/
// 我们可以实现这样一个递归函数，通过「同步移动」两个指针的方法来遍历这棵树，pp 指针和 qq 指针一开始都指向这棵树的根，随后 pp 右移时，
// qq 左移，pp 左移时，qq 右移。每次检查当前 pp 和 qq 节点的值是否相等，如果相等再判断左右子树是否对称。
// 用镜像对称方法，假装是两棵树，用两个指针移动实现比较。
