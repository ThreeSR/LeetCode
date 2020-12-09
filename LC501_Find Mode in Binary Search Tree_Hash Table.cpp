/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution { // 这是树结构下，对于众数求解的通用解法。并不局限于BST，所以本题在BST限定下，用这样的方法有点亏。
private:
    void traversal(TreeNode* root, unordered_map<int, int>& hashmap) { // 前序遍历，其实任何遍历都可以
        if (root == NULL) return;
        hashmap[root->val]++;
        traversal(root->left, hashmap);
        traversal(root->right, hashmap);
    }
    bool static cmp(const pair<int, int>& a, const pair<int, int>& b) { // 为sort写函数
        return a.second > b.second;
    }
public:
    vector<int> findMode(TreeNode* root) { // 要明确，C++没办法对hash表的value直接进行比较。所以要绕道，变成pair<int, int>之后，再做处理。
        vector<int> result;
        unordered_map<int, int> hashmap; // key是数值，value是频次。我们希望对频次排序，但C++没办法直接排序。
        if (root == NULL) return result; // 特判
        traversal(root, hashmap); // 遍历
        vector<pair<int, int>> vec(hashmap.begin(), hashmap.end()); // 将原本哈希表变成pair<int, int>，方便后续处理。
        sort(vec.begin(), vec.end(), cmp); // 频次从大到小排序
        result.push_back(vec[0].first); // 首先放入频次最大的数值。注意，.first访问时，不要加括号变成：.first()
        for (int i = 1; i < vec.size(); i++) { // 这一步在于，防止众数不止一个
            if (vec[i].second == vec[0].second) result.push_back(vec[i].first); // 放置多余的众数
            else break; // 一旦出现频次不再相等，那么众数必然只有一个，没有继续比较下去的必要，break即可 
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/KSAr6OVQIMC-uZ8MEAnGHg      这是一个很好的，对哈希表中value进行处理的模板