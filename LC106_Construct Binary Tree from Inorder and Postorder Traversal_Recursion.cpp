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
    TreeNode* traversal(vector<int>& inorder, vector<int>& postorder) { // 利用中序+后序建立一棵树。此外，前序+中序也可以建一棵树。但是，前序+后序没有中序不行！
        if (postorder.size() == 0) return nullptr; // 最终的终止情况，由于递归，所以这个函数被调用多次。这里的条件看似与函数入口的条件重复，似乎多余，其实不然。
        int rootVal = postorder[postorder.size() - 1]; // 找到根节点的数值
        TreeNode* root = new TreeNode(rootVal); // 建立根节点
        if (postorder.size() == 1) return root; // 特判。在比较复杂的问题中，最好能特判的就直接输出结果，省得之后判断条件的时候麻烦。
        int delimiterIndex; // 先定义一个变量
        for (delimiterIndex = 0; delimiterIndex < inorder.size(); delimiterIndex++) { // 找寻切割点。我们的思路是，先在后序找根节点，再用这个值在中序中切割左右子树。再切割后序，再找根节点，如此循环。
            if (inorder[delimiterIndex] == rootVal) break;
        }
        vector<int> leftInorder(inorder.begin(), inorder.begin() + delimiterIndex); // 切割中序左树，注意：1.先切中序再后序； 2.切割区间是 左闭右开 。 理解这样的定义与赋值用法
        vector<int> rightInorder(inorder.begin() + delimiterIndex + 1, inorder.end()); // 中序右树。由于中间的根节点拿去了，所以这里开始是从inorder.begin() + delimiterIndex + 1而不是inorder.begin() + delimiterIndex
        postorder.resize(postorder.size() - 1); // 然后处理后序。先把后序的最后一个根节点拿掉。
        vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftInorder.size()); // 后序左树。这里切割需要借助中序的结果，显然左树不管中还是后，长度一样。
        vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end()); // 由于拿掉了最后的根节点，所以直接这样继续切割下去。
        root->left = traversal(leftInorder, leftPostorder); // 递归，左边处理左边
        root->right = traversal(rightInorder, rightPostorder); // 递归，右边处理右边
        return root; // 最后返回节点
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.size() == 0 || postorder.size() == 0) return nullptr; // 特判，这里与traversal进去的特判不同，并不是冗余的
        return traversal(inorder, postorder); // 给出结果
    }
};

// reference https://mp.weixin.qq.com/s/7r66ap2s-shvVvlZxo59xg 本题与LC105基本一致，可以一起写。