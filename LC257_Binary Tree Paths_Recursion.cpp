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
private:
    void traversal(TreeNode* cur, vector<int>& path, vector<string>& result) { // 递归+回溯，前序遍历。
        path.push_back(cur->val); // 中，这里放置当前节点的数值进入path中
        if (cur->left == nullptr && cur->right == nullptr) { // 说明到了叶子节点，这个时候就要总结前面的内容了
            string sPath; // 因为答案要求是string类型，所以这里需要一个sPath先放置结果
            for (int i = 0; i < path.size() - 1; i++) {
                sPath += to_string(path[i]); // 转到string的强制类型转换：to_string
                sPath += "->"; 
            }
            sPath += to_string(path[path.size() - 1]); // 最后一个字符后面不需要->，所以单独处理
            result.push_back(sPath); // 完成一条路径
            return; // void类型
        }
        if (cur->left) { // 左
            traversal(cur->left, path, result);
            path.pop_back(); // 回溯，vector是pop_back不是pop，不同于栈和队列
        }
        if (cur->right) { // 右
            traversal(cur->right, path, result);
            path.pop_back(); // 回溯
        }
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path;
        vector<string> result;
        if (root == nullptr) return result; // 特判
        traversal(root, path, result);
        return result;
    }
};

// https://mp.weixin.qq.com/s/Osw4LQD2xVUnCJ-9jrYxJA  树的前序，中序，后序遍历会用到很多地方。在一些题目要求下，其实是隐含遍历的内容在其中的。