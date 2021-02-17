class TrieNode{  // 前缀树的实现
public:
    TrieNode* next[26]; // 前缀树存储26个小写字母，这里用ASCII码将这些字母对应到具体数字，存在next数组中。
    bool isword;
    TrieNode() {
        memset(next, NULL, sizeof(next));
        isword = false;
    }
    ~TrieNode() { // 析构函数。力扣中可以不写，实际中写上较好。
    // 虽然不写析构函数也能AC，甚至更快，但内存泄漏毕竟不是什么好玩的东西，还是写上吧。
        for(int i = 0; i < 26; i++) if(next[i]) delete next[i];
    }
};

/*
前缀树和二叉树的不同：
1.二叉树只有左右两个孩子节点，而这个TrieNode有26个next孩子节点。
2.多了一个bool变量isword，如果为true，表示该节点表示的字符串（准确地说，是从根节点一直next到此节点表示的字符串）
在Trie树中存在，否则不存在。
*/

class Trie {
    TrieNode* root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the Trie. */
    void insert(string word) {
        TrieNode*p = root;
        for(int i = 0; i < (int)word.size(); i++) {
            if (p->next[word[i]-'a'] == NULL)
                p->next[word[i]-'a'] = new TrieNode();
            p = p->next[word[i]-'a'];
        }
        p->isword = true;
    }

    /*
    遍历需要插入的string，同时指针p从root一直往下next，
    如果对应字符的next为NULL，就创建一个新的TrieNode，遍历完后，
    在最终那个TireNode标记为True，表示这个TrieNode对应的词在这课Trie树中存在。
    */
    
    /** Returns if the word is in the Trie. */
    bool search(string word) {
        TrieNode *p = root;
        for(int i = 0; i < (int)word.size() && p; i++){
            p = p->next[word[i]-'a'];
        }
        return p && p->isword;
    }

    /*
    和插入的思路类似，遍历string，同时指针p从root节点一直往下next，
    如果碰到对应字符的next[]为NULL或者string已经遍历完成，则退出循环。
    最后检查p是否为不为NULL以及isword是否为true，两者都满足则说明这个词存在于Trie树。
    */
    
    /** Returns if there is any word in the Trie that starts with the given prefix. */
    bool startsWith(string prefix) { // 前缀查找
        TrieNode* p = root;
        for(int i = 0; i < (int)prefix.size() && p; i++){
            p = p->next[prefix[i]-'a'];
        }
        return p;
    }

    /*
    实现上基本同查找，唯一的区别在于，无需检查isword是否为true。
    */

    ~Trie() {
        delete root;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */

 // reference https://zhuanlan.zhihu.com/p/34747612