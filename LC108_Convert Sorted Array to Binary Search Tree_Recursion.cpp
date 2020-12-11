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
    TreeNode* traversal(vector<int>& nums, int left, int right) { // 本题有多种解法，所以和力扣给出的结果不同也可以。
        if (left > right) return nullptr; // 终止条件
        int mid = left + (right - left) / 2; // 找中间。 ！特别注意！：最好不要写成 int mid  = (left + right) / 2; 因为这样，如果left和right都太大，会超出整数范围限制
        // 因此，为了不超过范围，一般而言，中间值选取都是用 int mid = left + (right - left) / 2; 的形式，这个很重要。但在LeetCode上不会超出。
        TreeNode* root = new TreeNode(nums[mid]); // 树的构造，节点生成
        root->left = traversal(nums, left, mid - 1); // 左边。因为这是有序数组，所以我们才可以这么做。此外，由于本题要求是平衡树，所以取中间的值制造节点。
        root->right = traversal(nums, mid + 1, right); // 右边。在划定界限的时候，我们是左闭右闭地取值。这点在最后有所体现。
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;
        return traversal(nums, 0, nums.size() - 1); // 因为左闭右闭，所以是0到nums.size() - 1.
    }
};

// reference https://mp.weixin.qq.com/s/sy3ygnouaZVJs8lhFgl9mw