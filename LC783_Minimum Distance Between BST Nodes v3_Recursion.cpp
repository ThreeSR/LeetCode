class Solution {
public:
int result = INT_MAX;
int pre = -1; // 此处pre仅仅存为一个数值，不用做Treenode*的指针
void traversal(TreeNode* cur) { // 中序遍历，边遍历边比较
    if (cur == NULL) return;
    traversal(cur->left);   // 左
    if (pre != -1){       // 中
        result = min(result, cur->val - pre); // 此时处理比较大小的事情
    }
    pre = cur->val; // 更新pre
    traversal(cur->right);  // 右
}
    int minDiffInBST(TreeNode* root) {
        traversal(root);
        return result; // 得到结果
    }
};

// reference https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes/solution/yi-ti-shuang-jie-liang-chong-fang-fa-fei-ieqc/