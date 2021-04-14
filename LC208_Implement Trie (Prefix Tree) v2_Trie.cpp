class TrieNode{  // 前缀树节点的实现
/*
前缀树和二叉树的不同：
1.二叉树只有左右两个孩子节点，而这个TrieNode有26个next孩子节点。
2.多了一个bool变量isword，如果为true，表示字符串（从根节点一直next到此节点的字符串）在Trie树中存在，否则不存在。
*/
public:
    TrieNode* next[26]; // 前缀树存储26个小写字母，这里用ASCII码将这些字母对应到具体数字，存在next数组中。
    bool isword;
    TrieNode() { // 构造函数
        memset(next, NULL, sizeof(next)); // 分配空间
        isword = false;
    }
    ~TrieNode() { // 析构函数。此处可以不写，实际中写上较好。
        for (int i = 0; i < 26; i++) {
            if(next[i]) delete next[i];
        }
    }
};

class Trie { // 前缀树的实现
public:
    TrieNode* root;
    Trie() { // 构造函数
        root = new TrieNode();
    }
    /*
    遍历需要插入的string，同时指针p从root一直往下next，
    如果对应字符的next为NULL，就创建一个新的TrieNode，遍历完后，
    在最终那个TireNode标记为True，表示这个TrieNode对应的词在这课Trie树中存在。
    */
    void insert(string word) {
        TrieNode*p = root;
        for(int i = 0; i < word.size(); i++) {
            if (p->next[word[i]-'a'] == NULL)
                p->next[word[i]-'a'] = new TrieNode();
            p = p->next[word[i]-'a'];
        }
        p->isword = true;
    }
    /*
    和插入的思路类似，遍历string，同时指针p从root节点一直往下next，
    如果碰到对应字符的next[]为NULL或者string已经遍历完成，则退出循环。
    最后检查p是否不为NULL以及isword是否为true，两者都满足则说明这个词存在于Trie树。
    */
    bool search(string word) {
        TrieNode *p = root;
        for(int i = 0; i < word.size() && p; i++){
            p = p->next[word[i]-'a'];
        }
        return p && p->isword;
    }
    /*
    前缀查找的实现类似于上面的查找，唯一的区别在于，无需检查isword是否为true。
    */
    bool startsWith(string prefix) { // 前缀查找
        TrieNode* p = root;
        for(int i = 0; i < prefix.size() && p; i++){
            p = p->next[prefix[i]-'a'];
        }
        return p;
    }
    ~Trie() { // 析构函数
        delete root;
    }
};


// reference https://leetcode-cn.com/problems/implement-trie-prefix-tree/solution/bao-mu-ji-jiao-cheng-zi-dian-shu-ling-ji-krrs/
