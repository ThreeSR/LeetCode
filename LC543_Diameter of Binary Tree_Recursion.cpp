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
    int ans;  // 全局变量
    int depth(TreeNode* rt){
        if (rt == nullptr) return 0;
        int L = depth(rt->left);
        int R = depth(rt->right);
        ans = max(ans, L + R + 1);
        return max(L, R) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1; // 赋初值
        depth(root); // 虽然depth是一个有返回值的函数，但是也可以这么调用，不给它返回值的出口
        return ans - 1; // 我们关心的是ans，而不是depth的return值，所以上面不给它出口，下面直接用ans。这样的做法有点类似于认为depth是void类型，但不是。
    }
};

// reference https://leetcode-cn.com/problems/diameter-of-binary-tree/solution/er-cha-shu-de-zhi-jing-by-leetcode-solution/ 详见链接或Solution中的图片

/*
class Solution {
    int ans;
    int depth(TreeNode* rt){
        if (rt == NULL) {
            return 0; // 访问到空节点了，返回0
        }
        int L = depth(rt->left); // 左儿子为根的子树的深度
        int R = depth(rt->right); // 右儿子为根的子树的深度
        ans = max(ans, L + R + 1); // 计算d_node即L+R+1 并更新ans
        return max(L, R) + 1; // 返回该节点为根的子树的深度
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        depth(root);
        return ans - 1;
    }
};

*/