/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// class Solution { // 这是两种写法写在一起，第二个更好，第一个更清晰
// public:
//     TreeNode* constructMaximumBinaryTree(vector<int>& nums) { // 用的是前序遍历的思想
//         TreeNode* node = new TreeNode(0);
//         if (nums.size() == 1) { // 特判
//             node->val = nums[0];
//             return node;
//         }
//         int maxVal = 0;
//         int maxValIndex = 0;
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] > maxVal) { // 找最大值，进行切割
//                 maxVal = nums[i];
//                 maxValIndex = i;
//             }     
//         }
//         node->val = maxVal; // 中
//         if (maxValIndex > 0) { // 左 不等式保证左边有数值
//             vector<int> leftTree(nums.begin(), nums.begin() + maxValIndex);
//             node->left = constructMaximumBinaryTree(leftTree);
//         }
//         if (maxValIndex < nums.size() - 1) { // 右
//             vector<int> rightTree(nums.begin() + maxValIndex + 1, nums.end());
//             node->right = constructMaximumBinaryTree(rightTree);
//         }
//         return node;
//     }
// };
class Solution {
private:
    TreeNode* Traversal(vector<int>& nums, int left, int right) { // 依然前序遍历。这时切割体现在函数上，不对数组本身动手脚。这里左闭右开。
        if (left >= right) return nullptr; // 因为左闭右开，所以等于也是nullptr
        int maxValIndex = left; // 不切割数组本身，对函数切割。所以每次根据left定义index
        for (int i = left + 1; i < right; i++) { // 以right结尾
            if (nums[i] > nums[maxValIndex]) maxValIndex = i;
        }
        TreeNode* node = new TreeNode(nums[maxValIndex]); // 中   在节点定义的时候就应该把数值赋好
        node->left = Traversal(nums, left, maxValIndex); // 左
        node->right = Traversal(nums, maxValIndex + 1, right); // 右 这三行构成前序遍历
        return node;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return Traversal(nums, 0, nums.size()); // 写nums.size()而不是这个-1，是因为左闭右开。注意管理好区间取值
    }
};

// reference https://mp.weixin.qq.com/s/1iWJV6Aov23A7xCF4nV88w