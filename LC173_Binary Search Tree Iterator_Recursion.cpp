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
class BSTIterator { // 递归
private:
    void inorder(TreeNode* root, vector<int>& res) { // 中序遍历
        if (!root) {
            return;
        }
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) { // 启动中序遍历
        vector<int> res;
        inorder(root, res);
        return res;
    }
    
    vector<int> arr; // 保存中序遍历结果
    int idx; // 判断是否还有右节点
public:
    BSTIterator(TreeNode* root): idx(0), arr(inorderTraversal(root)) {} // 初始化，这种写法值得学习
    
    int next() {
        return arr[idx++]; // next就是负责把元素按照中序遍历输出，输出arr[idx]之后，idx自增
    }
    
    bool hasNext() {
        return (idx < arr.size()); // 右边有没有元素，取决于arr中的元素是否遍历完了
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

// reference https://leetcode-cn.com/problems/binary-search-tree-iterator/solution/er-cha-sou-suo-shu-die-dai-qi-by-leetcod-4y0y/