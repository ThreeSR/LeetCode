/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {  // 贪心算法
private:
    int result;
    int traversal(TreeNode* cur) { // 首先是后序遍历。这是因为贪心的思路导致的，我们希望从叶子结点的父节点开始部署摄像头，这样节约资源。
    // 不从头开始是因为叶子的基数大，根节点只有一个，叶子有好多。这体现了贪心的想法，因此这道题本质是贪心算法。
        if (cur == nullptr) return 2; // 分三种情况思考，0代表没有覆盖，1代表安装了摄像头，2代表有覆盖但没有摄像头。
        // 上面，如果是空节点，那么判定为2号状态，原因见链接。
        int left = traversal(cur->left); // 后序遍历
        int right = traversal(cur->right);
        if (left == 2 && right == 2) return 0;
        else if (left == 0 || right == 0) {
            result++;
            return 1;
        } else return 2;
    }
public:
    int minCameraCover(TreeNode* root) {
        result = 0;
        // 这里的if语句判别了根节点是否最后是空的，如果是，需要加入一个摄像头。
        if (traversal(root) == 0) result++;
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/kCxlLLjWKaE6nifHC3UL2Q
/*
详细解答见链接，这个解答非常好。
class Solution {
private:
    int result;
    int traversal(TreeNode* cur) {

        // 空节点，该节点有覆盖
        if (cur == NULL) return 2;

        int left = traversal(cur->left);    // 左
        int right = traversal(cur->right);  // 右

        // 情况1
        // 左右节点都有覆盖
        if (left == 2 && right == 2) return 0;

        // 情况2
        // left == 0 && right == 0 左右节点无覆盖
        // left == 1 && right == 0 左节点有摄像头，右节点无覆盖
        // left == 0 && right == 1 左节点有无覆盖，右节点摄像头
        // left == 0 && right == 2 左节点无覆盖，右节点覆盖
        // left == 2 && right == 0 左节点覆盖，右节点无覆盖
        if (left == 0 || right == 0) {
            result++;
            return 1;
        }

        // 情况3
        // left == 1 && right == 2 左节点有摄像头，右节点有覆盖
        // left == 2 && right == 1 左节点有覆盖，右节点有摄像头
        // left == 1 && right == 1 左右节点都有摄像头
        // 其他情况前段代码均已覆盖
        if (left == 1 || right == 1) return 2;

        // 以上代码我没有使用else，主要是为了把各个分支条件展现出来，这样代码有助于读者理解
        // 这个 return -1 逻辑不会走到这里。
        return -1;
    }

public:
    int minCameraCover(TreeNode* root) {
        result = 0;
        // 情况4
        if (traversal(root) == 0) { // root 无覆盖
            result++;
        }
        return result;
    }
};

*/