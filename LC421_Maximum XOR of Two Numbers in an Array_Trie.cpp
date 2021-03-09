class Trie
{
private:
    Trie* next[2]={nullptr}; // 初始化，因为这里对应的是二进制问题，所以next里面有2个即可
public:
    Trie() {}

    void insert(int x)  // 在前缀树中插入值x
    {
        Trie *root = this;
        // 高位存储来Trie的前面，所以我们从左向右存储
        for(int i = 30; i >= 0; i--)
        {
            // 取第i位的数字，30...0
            int u = x >> i & 1;
            // 若第u位为空，则创建一个新节点，然后root移动到下一个节点
            if (!root->next[u]) root->next[u] = new Trie();
            root = root->next[u];
        }
    }

    int srearch(int x)  // 在前缀树中寻找 x 的最大异或值
    {
        Trie *root = this;
        // res表示最大异或值，每次res*2表示左移一位，31循环后左移了31位了，+u表示加上当前的最低位数字
        int res = 0;
        for(int i = 30; i >= 0; i--) // 以下操作是在寻找x对应的异或运算的搭档
        {
            int u = x >> i & 1;
            // 若 x 的第 u 位存在，我们走到相反的方向去，因为异或总是|值|相反才取最大值的。这里运用了贪心算法的思路
            if (root->next[!u]) root = root->next[!u], res = res * 2 + !u; // 对于经过的每一位数，都将它们从2进制转为10进制
            // 相反方向的节点为空，只能顺着相同方向走了
            else root = root->next[u], res = res * 2 + u;
        }
        // 由于上面我们得到的是异或计算的另一个数组元素，此时我们需要将这个数组元素与x相异或，从而得到两个数的最大异或值
        res ^= x;
        return res;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie *root = new Trie();
        for(auto x : nums) root->insert(x); // 字典树成型
        int res = 0;
        for(auto x : nums) // 各个数字，挨个试最大异或值，找到最大即可
            res = max(res, root->srearch(x));
        return res;
    }
};

// reference https://leetcode-cn.com/problems/maximum-xor-of-two-numbers-in-an-array/solution/ctriemo-ban-ti-song-ban-zi-by-xiaoneng-tegw/