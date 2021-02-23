/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // 后序遍历+树状DP
public:
    // 本题是树状DP的经典题型    
    unordered_map<TreeNode*, int> f, g; // 构建哈希表
    
    void dfs(TreeNode* root){ // 深度优先搜索，后序遍历。树形题目在转化过程中常用后序遍历
        if (root == nullptr) return; // 特判
        dfs(root->left); // 后序遍历。使用后序的原因在于：对于每个root节点的分析，都需要对其下面的左右子节点进行考虑，因此需要左右中的遍历顺序，即后序
        dfs(root->right);
        f[root] = root->val + g[root->left] + g[root->right]; // f代表选当前节点，g代表不选当前节点；用f代表它的两个子节点不能用，用g代表子节点可用可不用
        g[root] = max(f[root->left], g[root->left]) + max(f[root->right], g[root->right]); // 因为g代表子节点可用可不用，所以是子节点上f与g求max
    }

    int rob(TreeNode* root) {
        dfs(root); // 先遍历求f与g
        return max(f[root], g[root]); // 得到最大值
    }
};

// reference https://leetcode-cn.com/problems/house-robber-iii/solution/da-jia-jie-she-iii-by-leetcode-solution/ 详见对应题解以及Solution中内容
