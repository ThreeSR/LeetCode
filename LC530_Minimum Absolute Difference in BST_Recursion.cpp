/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // BST很关键！它是有序树，在中序遍历过后，可以得到一个有序数组。我们处理BST的问题都可以转成处理有序数组，那么我们会十分方便。
    vector<int> result;
private:
    void traversal(TreeNode* root, vector<int>& result) { // 中序遍历
        if (root == nullptr) return;
        traversal(root->left, result);
        result.push_back(root->val);
        traversal(root->right, result);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        result.clear();
        traversal(root, result);
        int res = INT_MAX;
        for (int i = 1; i <result.size(); i++) { // 对有序数组处理，得最小差值。最小差值肯定是两个相邻节点间的，否则差距更大。BST中没有相等节点，都是有序的。
            res = min(res, result[i] - result[i - 1]);
        }
        return res;
    }
};

// reference https://mp.weixin.qq.com/s/Hwzml6698uP3qQCC1ctUQQ