# Tree

***
## 写在前面

因为主文档太长，不容易维护，所以建立子文档以辅助。

本篇内容是[主文档](https://github.com/ThreeSR/LeetCode/blob/main/README.md)中的**树部分**的扩展。
***

| 作者 | Three |
| :----: | :----: |
| 领英 | [![](https://camo.githubusercontent.com/0c4286a2bd43a8fe3b39f93c037c63612e014c62/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d2d6c696e6b6564696e3f6c6162656c3d4c696e6b6564496e266c6f676f3d4c696e6b6564496e267374796c653d736f6369616c)](https://www.linkedin.com/in/rui-sun-999717173 "Welcome") |
| 知乎 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/%E7%9F%A5%E4%B9%8E.png?raw=true"/>](https://www.zhihu.com/people/sun-rui-55-32 "Welcome") |
| 力扣 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/LeetCode.png?raw=true"/>](https://leetcode-cn.com/u/threesr/ "Hello World!") |
| CSDN | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/csdn.png?raw=true"/>](https://blog.csdn.net/Three3333333 "Welcome") |
:blush: :trophy: | :sun_with_face: :octocat:

**悟已往之不谏，知来者之可追。**

[:point_up_2: Top](#tree) 代表返回顶部

[:point_down:](#bottom) 代表到文档末尾

**如果你觉得我做得还行，那就给我Star吧！**

特别鸣谢：

*注：下面的排序代码由Python，Java和C++语言完成*

**Key Words :**  `C++`  `Python`  `Java` `Tree` 

***

## Table

+ [树](#树)
     + [树的实现](#树的实现)
          + [二叉树](#二叉树)
          + [N叉树](#N叉树)
     + [树的遍历](#树的遍历)
          + 前序遍历
          + 中序遍历
          + 后续遍历
          + 层序遍历
     + [堆](#堆)
     + [二叉搜索树](#二叉搜索树)
          + [AVL树](#AVL树) *optional*
          + [红黑树](#红黑树)
     + [B树](#B树)
     + [字典树](#字典树)
     + [树状数组](#树状数组) *optional* 
     + [线段树](#线段树) *optional*

## 树

**Tree**

树型数据结构**非常关键**，里面有很多重要的知识概念。

### 树的实现

#### 二叉树

相关概念

注：
1. 堆本身是完全二叉树，从分类的角度而言，应该是二叉树的类别下。但因为堆本身也是一个大类，所以堆被单独拿出来，放在后面。
2. 二叉搜索树和堆同理。

二叉树C++实现
```C++
 // Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
```

二叉树Python实现
```python
# Definition for a binary tree node.
class TreeNode:
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right
```

二叉树Java实现
```java
 // Definition for a binary tree node.
 public class TreeNode {
     int val;
     TreeNode left;
     TreeNode right;
     TreeNode(int x) { val = x; }
 }
```
#### N叉树

N叉树C++实现
```C++
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;
    Node() {}
    Node(int _val) {
        val = _val;
    }
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
```

N叉树Python实现
```python

```

### 树的遍历

遍历有三种，分别是前中后序遍历；树的类型可以分为二叉树和N叉树。

+ 前序遍历 
     + [LC144 Binary Tree Preorder Traversal 二叉树的前序遍历 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC144_Binary%20Tree%20Preorder%20Traversal_Recursion.py)
     + [LC589 N-ary Tree Preorder Traversal N叉树的前序遍历 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC589_N-ary%20Tree%20Preorder%20Traversal_Recursion.py) || [C++](https://github.com/ThreeSR/LeetCode/blob/main/LC589_N-ary%20Tree%20Preorder%20Traversal_Recursion.cpp)
+ 中序遍历 
     + [LC94 Binary Tree Inorder Traversal 二叉树的中序遍历 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC94_Binary%20Tree%20Inorder%20Traversal_Recursion.py) [C++版代码](https://github.com/ThreeSR/LeetCode/blob/main/LC94_Binary%20Tree%20Inorder%20Traversal_Recursion.cpp)
+ 后序遍历 
     + [LC145 Binary Tree Postorder Traversal 二叉树的后序遍历 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC145_Binary%20Tree%20Postorder%20Traversal_Recursion.py)
     + [LC590 N-ary Tree Postorder Traversal N叉树的后序遍历 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC590_N-ary%20Tree%20Postorder%20Traversal_BFS.cpp)
+ 层序遍历
     + [LC102 Binary Tree Level Order Traversal 二叉树的层序遍历 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC102_Binary%20Tree%20Level%20Order%20Traversal_BFS.cpp) || [Python](https://github.com/ThreeSR/LeetCode/blob/main/LC102_Binary%20Tree%20Level%20Order%20Traversal_BFS.py) || [Java](https://github.com/ThreeSR/LeetCode/blob/main/LC102_Binary%20Tree%20Level%20Order%20Traversal_BFS.java)
     + [LC429 N-ary Tree Level Order Traversal N叉树的层序遍历 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC429_N-ary%20Tree%20Level%20Order%20Traversal_BFS.cpp)

[LC110 Balanced Binary Tree 平衡二叉树 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC110_Balanced%20Binary%20Tree_Recursion.cpp) 本题需要根据平衡二叉树的原理，对一棵树的平衡性进行分析。具体使用的思路是后序遍历。注：[剑指Offer_55-II 平衡二叉树](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_55-II_%E5%B9%B3%E8%A1%A1%E4%BA%8C%E5%8F%89%E6%A0%91_Recursion.py)和本题一样。

[剑指Offer_54 二叉搜索树的第k大节点](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_54_%E4%BA%8C%E5%8F%89%E6%90%9C%E7%B4%A2%E6%A0%91%E7%9A%84%E7%AC%ACk%E5%A4%A7%E8%8A%82%E7%82%B9_Recursion.cpp)  本题可以先利用BST的性质：即中序遍历之后，输出结果为升序的数组。中序遍历之后，找对应位置的数值输出即可。这是一种思路，应该还可以优化，比如：逆中序遍历，k--，得到对应数值break即可。这个代码pending...

### 堆

**Heap**

堆这个数据结构可以用来排序，常用在Top-K频次的问题上。也用在一定范围内最大值或者最小值的提取上。

[LC239 Sliding Window Maximum 滑动窗口最大值](https://github.com/ThreeSR/LeetCode/blob/main/LC239_Sliding%20Window%20Maximum_Heap.cpp)  本题也可以自己制造数据结构求解[单调队列](https://github.com/ThreeSR/LeetCode/blob/main/LC239_Sliding%20Window%20Maximum_Queue.cpp)，但是用堆更简单。我们在意的是最大值，所以用堆弹出最大值，然后让窗口持续移动即可。**要小心的是大顶堆的最大值或者堆内部的一些数值已经不在窗口之中，这一点要注意维护。**

[:point_up_2: Top](#tree)

### 二叉搜索树

**Binary Search Tree BST**

**[介绍](https://zh.wikipedia.org/wiki/%E4%BA%8C%E5%85%83%E6%90%9C%E5%B0%8B%E6%A8%B9)**

![二叉搜索树](https://user-images.githubusercontent.com/36061421/114441764-6006f800-9bfe-11eb-950d-58e5800213a1.png)

二叉查找树（Binary Search Tree），也称为二叉查找树、有序二叉树（ordered binary tree）或排序二叉树（sorted binary tree），是指一棵空树或者具有下列性质的二叉树：
1. 若任意节点的左子树不空，则左子树上所有节点的值均小于它的根节点的值；
2. 若任意节点的右子树不空，则右子树上所有节点的值均大于或等于它的根节点的值；
3. 任意节点的左、右子树也分别为二叉查找树；

二叉查找树相比于其他数据结构的优势在于查找、插入的时间复杂度较低，为O(log(n))。虽然二叉查找树的最坏效率是O(n)，但它支持动态查询，且有很多改进版的二叉查找树可以使树高为O(log(n))，从而将最坏效率降至O(log(n))，如AVL树、红黑树等。

那么，什么时候BST效率最低呢？一棵正常的BST，应该是像一棵树一样左右展开，如果每一个节点的叠加都只是在同一侧，那么这棵树会变成“数组”，丧失了树型结构的优势。这个时候就是BST效率最低的时候。我们需要避免这样的情况。避免的方式就是**控制好左子树和右子树的高度差**。如果高度差不会很大，那么树型结构就有所保障，效率不会严重退化。

针对上述问题，引进[平衡树的概念](https://zh.wikipedia.org/wiki/%E5%B9%B3%E8%A1%A1%E6%A0%91)。

平衡树平衡的内容就是左右子树的高度差。下面的AVL树和红黑树都是**自平衡二叉查找树（self-balancing binary search tree）**。当然了，实际应用中不只有二叉树，所以关于自平衡的树，还有[B树](https://zh.wikipedia.org/wiki/B%E6%A0%91)。B树可以看作是原有二叉树的推广，详见下面的内容。

**相关力扣题目**

[LC530 Minimum Absolute Difference in BST 二叉搜索树的最小绝对差](https://github.com/ThreeSR/LeetCode/blob/main/LC530_Minimum%20Absolute%20Difference%20in%20BST_Recursion.cpp)  本题有两种方案，一是对BST中序遍历，得到递增数组，再进行一次for循环。另一种方案是边比较边遍历。详见[我的力扣题解](https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes/solution/yi-ti-shuang-jie-liang-chong-fang-fa-fei-ieqc/)

[LC783 Minimum Distance Between BST Nodes 二叉搜索树节点最小距离 链接一](https://github.com/ThreeSR/LeetCode/blob/main/LC783_Minimum%20Distance%20Between%20BST%20Nodes_Recursion.cpp)  本题和上面的题目相同。本题的第一个链接是对应上一题的方案一，第二个链接对应方案二，第三个链接将`pre`存成`int`类型，没有使用`Treenode*`类型。[LC783 Minimum Distance Between BST Nodes 二叉搜索树节点最小距离 链接二](https://github.com/ThreeSR/LeetCode/blob/main/LC783_Minimum%20Distance%20Between%20BST%20Nodes%20v2_Recursion.cpp)   ；   [LC783 Minimum Distance Between BST Nodes 二叉搜索树节点最小距离 链接三](https://github.com/ThreeSR/LeetCode/blob/main/LC783_Minimum%20Distance%20Between%20BST%20Nodes%20v3_Recursion.cpp) 。 详见[我的力扣题解](https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes/solution/yi-ti-shuang-jie-liang-chong-fang-fa-fei-ieqc/)

[LC173 Binary Search Tree Iterator 二叉搜索树迭代器](https://github.com/ThreeSR/LeetCode/blob/main/LC173_Binary%20Search%20Tree%20Iterator_Recursion.cpp)  利用BST的性质进行中序遍历，之后按照题目要求进行迭代器的构造。**本题的代码书写方法值得学习！**

*参考链接*

[代码实现 Python](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/Binary%20Search%20Tree.py)

[CSDN](https://blog.csdn.net/u010089444/article/details/70854510)

[博客园](https://www.cnblogs.com/gaochundong/p/binary_search_tree.html)

#### AVL树

[简介](https://zh.wikipedia.org/wiki/AVL%E6%A0%91)

> AVL树（Adelson-Velsky and Landis Tree）是计算机科学中最早被发明的**自平衡二叉查找树**。在AVL树中，任一节点对应的两棵子树的**最大高度差为1**，因此它也被称为高度平衡树。查找、插入和删除在平均和最坏情况下的时间复杂度都是O(log(n))。增加和删除元素的操作则可能需要借由一次或多次*树旋转*，以实现树的重新平衡。AVL树得名于它的发明者G. M. Adelson-Velsky和Evgenii Landis，他们在1962年的论文《An algorithm for the organization of information》中公开了这一数据结构。

[:point_up_2: Top](#tree)

#### 红黑树

**Red-Black Tree or RB Tree**

[代码实现 Python](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/Red%20Black%20Tree.py)

[相关介绍](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)

> In computer science, a red–black tree is a kind of **self-balancing binary search tree**. Each node stores an extra bit representing "color" ("red" or "black"), used to ensure that the tree remains approximately balanced during insertions and deletions.

> When the tree is modified, the new tree is rearranged and "repainted" to restore the coloring properties that constrain how unbalanced the tree can become in the worst case. The properties are designed such that this rearranging and recoloring can be performed efficiently.

> The re-balancing is not perfect, but guarantees searching in O(log n) time, where n is the number of nodes of the tree. The insertion and deletion operations, along with the tree rearrangement and recoloring, are also performed in O(log n) time.

> Tracking the color of each node requires only 1 bit of information per node because there are only two colors. The tree does not contain any other data specific to its being a red–black tree so its memory footprint is almost identical to a classic (uncolored) binary search tree. In many cases, the additional bit of information can be stored at no additional memory cost.

详细内容见[算法导论](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/Introduction%20to%20Algorithms%203rd%20Edition.pdf) || [简书](https://www.jianshu.com/p/e136ec79235c) 

对于红黑树的理解可以浅尝辄止，因为它实在是太复杂了。知道它是关联容器（set，multiset，map，multimap）的底层实现即可，这样有助于我们使用关联容器。

[:point_up_2: Top](#tree)

### B树

> 在计算机科学中，B树（B-tree）是一种自平衡的树，能够保持数据有序。这种数据结构能够让查找数据、顺序访问、插入数据及删除的动作，都在对数时间内完成。B树，概括来说是一个**一般化**的二叉查找树（binary search tree）**一个节点可以拥有2个以上的子节点**。与自平衡二叉查找树不同，B树适用于读写相对大的数据块的存储系统，例如磁盘。B树减少定位记录时所经历的中间过程，从而加快存取速度。B树这种数据结构可以用来描述外部存储。这种数据结构常被应用在数据库和文件系统的实现上。

B树还可以分为：B+树，2-3树，2-3-4树。（pending）

推荐阅读:[数据库索引，到底是什么做的？](https://mp.weixin.qq.com/s?__biz=MjM5ODYxMDA5OQ==&mid=2651961486&idx=1&sn=b319a87f87797d5d662ab4715666657f&chksm=bd2d0d528a5a84446fb88da7590e6d4e5ad06cfebb5cb57a83cf75056007ba29515c85b9a24c&scene=21#wechat_redirect)  里面谈及了B树和B+树的应用。

[:point_up_2: Top](#tree)

### 字典树

**Trie Tree or 前缀树**

[简介](https://en.wikipedia.org/wiki/Trie)：
> In computer science, a trie, also called digital tree or *prefix tree*, is a type of search tree, **a tree data structure used for locating specific keys from within a set**. These keys are most often strings, with links between nodes defined **not by the entire key, but by individual characters**. In order to access a key (to recover its value, change it, or remove it), **the trie is traversed depth-first**, following the links between nodes, which represent each character in the key.

> 当我们关注的不是一整个字符串，而要关注字符串中的逐个组成字母时，我们需要用到字典树。

相关概念链接：[CSDN](https://blog.csdn.net/weixin_39778570/article/details/81990417) ; [博客园](https://www.cnblogs.com/TheRoadToTheGold/p/6290732.html)。

基本概念：

前缀树的样子：

![](https://img-blog.csdn.net/20180823221048359?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl8zOTc3ODU3MA==/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)

Trie又被称为前缀树、字典树，所以当然是一棵树。上面这棵Trie树包含的字符串集合是{in, inn, int, tea, ten, to}。每个节点的编号是我们为了描述方便加上去的。树中的每一条边上都标识有一个字符。这些字符可以是任意一个字符集中的字符。比如对于都是小写字母的字符串，字符集就是’a’-‘z’；对于都是数字的字符串，字符集就是’0’-‘9’；对于二进制字符串，字符集就是0和1。

比如上图中3号节点对应的路径0123上的字符串是inn，8号节点对应的路径0568上的字符串是ten。终结点与集合中的字符串是一一对应的。

[字典树模板（Click Here！）](https://github.com/ThreeSR/Data-Structure/blob/master/Trie%20Templete.cpp)

[字典树模板2（Click Here！）](https://github.com/ThreeSR/LeetCode/blob/main/LC208_Implement%20Trie%20(Prefix%20Tree)%20v2_Trie.cpp)

（其实从上面的定义也可以看出，字典树也是一种string manipulation的方法。）

实现代码：

```C++
class TrieNode{  // 前缀树的实现
public:
    TrieNode* next[26]; // 前缀树存储26个小写字母，这里用ASCII码将这些字母对应到具体数字，存在next数组中。
    bool isword;
    TrieNode() { // 构造函数
        memset(next, NULL, sizeof(next)); // 分配空间
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
    void insert(string word) { // 字典树的核心操作之一：插入元素
        TrieNode*p = root;
        for(int i = 0; i < (int)word.size(); i++) {
            if (p->next[word[i]-'a'] == NULL)
                p->next[word[i]-'a'] = new TrieNode();
            p = p->next[word[i]-'a'];
        }
        p->isword = true; // 在单词末尾，将状态变为true。
    }

    /*
    遍历需要插入的string，同时指针p从root一直往下next，
    如果对应字符的next为NULL，就创建一个新的TrieNode，遍历完后，
    在最终那个TireNode标记为True，表示这个TrieNode对应的词在这课Trie树中存在。
    */
    
    /** Returns if the word is in the Trie. */
    bool search(string word) { // 搜索一个单词是否存在。搜索操作也是字典树常见操作
        TrieNode *p = root;
        for(int i = 0; i < (int)word.size() && p; i++){
            p = p->next[word[i]-'a'];
        }
        return p && p->isword; // p为false直接无，p为true，p->isword为false，代表不是完整单词，也是无。
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

    ~Trie() { // 析构
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
```

上面的代码也是LC208的题解。

参考链接：[知乎：一篇文章搞懂Trie树 | C++实现以及实战练习](https://zhuanlan.zhihu.com/p/34747612)

**（注：关于代码中memset的使用：[C++之memset函数](https://www.cnblogs.com/Tang-tangt/p/9342103.html)）**

memset的使用：

```C++
头文件：<string.h> 或 <memory.h>

void *memset(void *s, int ch, size_t n);

memset(结构体/数组名 , 用于替换的ASCII码对应字符 , 前n个字符 );

memset(结构体/数组名 , "用于替换的字符“ , 前n个字符 );

函数解释：将s中的前n个字节用ch替换并且返回s

函数作用：在一段内存块中填充某一个给定的值，常用于较大的对结构体和数组的清零操作。

#include<iostream>
//#include"string.h"
using namespace std;
int main()
{
    char str[10];
    str[9] = 'w';
    memset(str,97,9);
    for(int i=0;i<10;i++){
        cout<<str[i]<<" ";
    }
    return 0;
} 

输出：a a a a a a a a a w

#include<iostream>
//#include"string.h"
using namespace std;
int main()
{
    char str[10];
    str[9] = 'w';
    memset(str,97,sizeof(char)*10);
    for(int i=0;i<10;i++){
        cout<<str[i]<<" ";
    }
    return 0;
} 

输出：a a a a a a a a a a

几个注意事项

1.memset是以字节为单位，初始化内存块。

2.当结构体类型中包含指针时，在使用memset初始化时需要小心。

3.当结构体或类的本身或其基类中存在虚函数时，也需要谨慎使用memset。

```

题目：

[LC648 Replace Words 单词替换](https://leetcode-cn.com/problems/replace-words/)

[LC208 Implement Trie (Prefix Tree) 实现 Trie (前缀树)](https://github.com/ThreeSR/LeetCode/blob/main/LC208_Implement%20Trie%20(Prefix%20Tree)_Trie.cpp)  实现一个前缀树，实现插入和搜索的功能。前缀树模板题。详情可见[我的力扣题解](https://leetcode-cn.com/problems/implement-trie-prefix-tree/solution/bao-mu-ji-jiao-cheng-zi-dian-shu-ling-ji-krrs/)

[LC1178 Number of Valid Words for Each Puzzle 猜字谜](https://github.com/ThreeSR/LeetCode/blob/main/LC1178_Number%20of%20Valid%20Words%20for%20Each%20Puzzle_Trie.cpp)  2021年元宵节的题目，很应景...  这题难度高，使用了回溯法加字典树。将word变成字典树，puzzle用回溯得到各个子集，去字典树上尝试，看能得到几种结果。其中还有*erase和unique函数的使用，用于去重*，值得学习。

[HDU_OJ 1251 统计难题](https://github.com/ThreeSR/LeetCode/blob/main/HDU1251_%E7%BB%9F%E8%AE%A1%E9%9A%BE%E9%A2%98_Trie.cpp)  代码为C++，可以AC。纯粹的字典树模板题。[题目链接](http://acm.hdu.edu.cn/showproblem.php?pid=1251)

[LC421 Maximum XOR of Two Numbers in an Array 数组中两个数的最大异或值](https://github.com/ThreeSR/LeetCode/blob/main/LC421_Maximum%20XOR%20of%20Two%20Numbers%20in%20an%20Array_Trie.cpp)  字典树的应用。在字典树成型之后，需要使用贪心算法的思想，得到最大异或值。

[:point_up_2: Top](#tree)

### 树状数组

**Binary Indexed Tree**

<!-- [CSDN](https://blog.csdn.net/Yaokai_AssultMaster/article/details/79492190) -->

树状数组的结构：

![](https://img2018.cnblogs.com/blog/1448672/201810/1448672-20181003121604644-268531484.png)

类似于二叉树，但不同。

黑色数组代表原来的数组（下面用A[i]代替），红色结构代表我们的树状数组(下面用C[i]代替)，发现没有，每个位置只有一个方框，令每个位置存的就是子节点的值的和，则有：

+ C[1] = A[1];
+ C[2] = A[1] + A[2];
+ C[3] = A[3];
+ C[4] = A[1] + A[2] + A[3] + A[4];
+ C[5] = A[5];
+ C[6] = A[5] + A[6];
+ C[7] = A[7];
+ C[8] = A[1] + A[2] + A[3] + A[4] + A[5] + A[6] + A[7] + A[8];

可以发现，这颗树是有规律的：

`C[i] = A[i-2^k+1] + A[i-2^k+2] + ... + A[i];   // **k为i的二进制中从最低位到高位连续零的长度**` 注：^代表幂运算，比如2^k是2的k次方。

例如i = 8(1000)时候，k = 3，可自行验证。（对于k的定义，理解要到位！）

树状数组是通过对原数组进行部分区间的累加而得到的内容，这个思路有些像排序中的计数排序。对于树状数组，我们需要实现两个主要功能：**1.计算区间和；2.对数组中元素a[i]进行update。**之所以叫树状数组，就是利用数组在树型拓扑下完成了树型结构的内容。

为什么我们需要树型结构？

一般而言，对于查找或者update，时间复杂度都是O(n)级别。如果n的系数比较小，其实时间复杂度也不会很高。问题就是有的时候，系数会非常大。这时候我们希望降低时间复杂度。一般来说，对O(n)进行优化就是考虑O(log n)——对数型复杂度。从线性复杂度跨到对数型复杂度，可以使用树型结构。树型结构的实现不会很麻烦，使用数组即可。下面的线段树也是如此。其实，不光是实现方式上，线段树和树状数组很像，在使用原因上，二者也很相似。对于线段树而言，也是考虑把线性时间复杂度降成对数型。

明白了基本背景之后，可以对上述概念公式化。

`Step 1`

对于功能一（区间和）：`SUM[1到7] = C[7] + C[6] + C[4] = A[1] + ... + A[7]`，可以总结规律：`SUM[1到i] = C[i] + C[i-2^(k1)] + C[(i-2^(k1))-2^(k2)] + ...`。（规律不证明，可以自行思考与尝试）从规律中，可以看到“递归”的思路：`即“i”一直被“i-2^(k1)”替代`。这里强调一下：**k1是C[i]中的k，k2是C[i-2^(k1)]的k....**

根据“递归”的思路，我们应该要去解决`2^(k1)`的计算问题。如果这里放一个for循环去计算，那就小题大做了。我们可以使用位运算的办法：`2^k = i&(i^(i-1));`（这个式子大家可以试试看，是成立的。如果想不明白，就好好理解k的定义。）看上去这个式子已经很简洁了，但其实有更好的处理：`2^k = i&(-i);` **注意：计算机中，负数是以补码的形式表达。补码就是当下数值二进制下取反之后加1**。理解了什么是补码以及负数的表达，这个更简洁的式子应该很好明白。

`Step 2`

功能二（对元素进行update）：上面谈到的功能一，其实是在树状数组（下面用BIT简称）已经生成后进行的讨论。功能二可以认为是对已有元素的update，也可以认为对不存在的元素进行补充，BIT成型。根据`C[i] = A[i-2^k+1] + A[i-2^k+2] + ... + A[i]; `的式子可知：`如果求A[i]包含在哪些位置里，会有A[i]包含于C[i + 2k]、C[(i + 2k) + 2k]...；`。在求C[i]的时候，首先对C数组进行初始化，之后一步步用数组A更新数组C。然后得到BIT（刚刚成型的BIT或是更新数值之后的BIT）。

树状数组实现：

[BIT模板](https://github.com/ThreeSR/Data-Structure/blob/master/Binary%20Indexed%20Tree%20Templete.cpp)

```C++
int n;
int a[1005], c[1005]; // 对应原数组和树状数组

int lowbit(int x) { // 2的k次方运算
    return x & (-x);
}

void update(int i, int k) { // 在i位置加上k数值
    while(i <= n) { // 因为是改变了i位置的数值，根据BIT的结构，和i前面的内容无关，
    // 从i开始到总长度n的BIT数值需要按照BIT定义去刷新。这里注意：这边的k就是一个更改的数值，不是
    // 上面介绍BIT原理时定义的k。
        c[i] += k; // update数值，加上k。这个k可以大于零，也可以小于零。
        i += lowbit(i); // 按照公式中index的要求进行变化
    }
}

int getsum(int i) {  // 求A[1]到A[i]的和（区间和）
    int result = 0; 
    while (i > 0) {
        result += c[i]; // 求和公式
        i -= lowbit(i); // 按照公式中index的要求进行变化
    }
    return result; // 和值
}
```

参考链接：[树状数组详解](https://www.cnblogs.com/xenny/p/9739600.html)。

[HDU_OJ 1166 敌兵布阵](https://github.com/ThreeSR/LeetCode/blob/main/HDU1166_%E6%95%8C%E5%85%B5%E5%B8%83%E9%98%B5_BIT.cpp)  本题是BIT的模板题，很有意义。[题目链接](http://acm.hdu.edu.cn/showproblem.php?pid=1166)

[LC307 Range Sum Query - Mutable 区域和检索 - 数组可修改 Java语言](https://github.com/ThreeSR/LeetCode/blob/main/LC307_Range%20Sum%20Query%20-%20Mutable_BIT.java)  力扣中的BIT模板题

[:point_up_2: Top](#tree)

### 线段树

**Segment Tree**

线段树示意图：

![](https://upload-images.jianshu.io/upload_images/3415798-d4bdd5d19ad20012.png?imageMogr2/auto-orient/strip|imageView2/2/w/476/format/webp)

一般而言，线段树的每一个节点存放的都是三个内容：1.区间左边界数值；2.区间右边界数值；3.本节点数值。本节点数值指的是在区间左右边界之中的最大值、最小值或者总和。显然，线段树的叶子结点就是数组中的各个元素。我们在建造线段树的时候，需要**从底向上**建造。

那么，线段树这样的存储有什么好处？ 
+ 树型结构可以更快地对元素进行查询（query）和更新（update）；
+ 相较于上面的BIT，线段树（ST）的功能更多。比如除了求区间和，ST还可以求区间最大值或最小值。可以依据自己的需求，制作一个适合于自己的ST。

根据上面的好处，可以看到：和BIT相比，ST的功能更多。但如果只是纯粹地处理区间和，还是选择BIT更好，因为实现代码更加简单。

其实从线段树的示意图可以看到，**ST就是基于原数组的内容，在其基础上进行上层结构的创建**。我们针对一个数组创建这样的一个结构，目的就是在未来处理这些数据的时候，可以更有效地进行update和query。

下面，来分析一下ST的制作过程：

首先应明确：

1. 在给定了大小给定了叶子结点数目的时候这个线段树就已经确定了，我们不能进行添加和删除元素，不是说不能对已有叶子结点赋值，是不能对其进行扩大或者减小。因为在大多数情况中，对于线段树来说，区间本身都是固定的，不考虑新增和删除元素。所以用数组存储的话，**直接用静态数组就好了，不用动态数组。**
2. **线段树的大小一定要开叶子结点数目（即原有点对点的数据数组大小）的四倍**。例如叶子结点数目是maxn，那么我们通常会开线段树的大小为maxn<<2。因为线段树也是一颗完全二叉树，当最大的时候可能是满二叉树。（相关证明见[线段树入门（Segment Tree）详细整理](https://blog.csdn.net/hzf0701/article/details/107859659?utm_medium=distribute.pc_relevant.none-task-blog-baidujs_title-1&spm=1001.2101.3001.4242)）
3. **我们进行乘除法运算的时候要使用位运算**（<< >>一定要仔细理解这两个运算符），而避免使用基本的数学运算，因为我们会频繁使用结点坐标更新，用位运算会更快一点，而且还可以防WR。
4. 在表示坐标的时候，若一个结点下标为i，那么它的父节点就是i>>1。如果这个结点是这个父节点的左孩子，那么右孩子下标就是i+1。如果这个结点是父节点的右孩子，那么左孩子的下标就是i-1。那个这个结点的左孩子下标就是i<<1，右孩子下标就是(i<<1)|1（这里一定要使用括号改变运算符优先级，因为位运算的优先级属实低。）（*在下标的问题上，可以类比堆结构。二者有很强的相似性！*）
5. 要根据你想解决的问题来设置结点的数据信息。区间求和和区间最值所进行的是不太一样的，所更改的信息也都要注意，但都是一个本质，就是从下往上更新，到达根节点就退出。
6. 线段树不一定是满二叉树，也就是说线段树的叶子结点不一定是在最后一层。线段树也不一定是完全二叉树（切记！）。但我们可以把线段树看成是满二叉树，对于不存在的结点我们视为空就行。

在了解了上面的内容后，可以进行代码操作：（C++）

**第一步：树型结构的创建**

**自上而下**

```C++

int father[maxn]; // 存储一个数值在线段树中的下标，此处maxn就是输入数据的个数。

struct Node {
	int left;
	int right;
	int value;
}node[maxn << 2];

void BuildTree(int i, int l, int r) { // 自上而下地建造树
	node[i].left = l;
    	node[i].right = r;
	node[i].value = 0; // 赋初值，都是0。这些数值的更新之后再做，先把树型结构做出来
	if (l == r) { // 说明到了叶子节点
		father[l] = i;       // 保存l（是字母l，不是数字1）位置的输入数值在线段树中的下标，因为i是node的标号，代表第i个node
		return;            // 到了叶子结点自然要返回
	}
	BuildTree(i << 1, l, (l + r) / 2);  // 初始化左子树
	BuildTree(i << 1 | 1, (l + r) / 2 + 1, r); // 初始化右子树。
}
```

明白上述操作，需要明白数据源。数据源一般来自于两方面：1.键盘即时输入；2.已经放置在数组中的元素。从ST的结构可以看到，叶子节点的个数就是数据源的数据个数。
+ 如果我们无法预知键盘输入的数值具体为多少，那么我们需要设一个很大的叶子节点个数，对应地，树的节点数需要是叶子结点4倍，整棵树也会很大，有一定的浪费。**这里要小心用不到的ST部分对于整体ST的影响，我们不能让空置的部分影响到结果**。比如某些题目要去求max与min，这时候开辟节点的min与max初值应该赋为inf与-inf，保证这些空置节点不会干扰结果。
+ 如果我们用的是数组里面的元素，那么我们开辟的空间为nums.size()即可，不用太多。

根据上面的内容，分析maxn的取值，可以发现：如果数据确定，maxn取nums.size()即可；如果数据数量不确定，那么maxn取一个很大的数就好。

再者，谈谈father数组。这个数组的功能就是将原本输入数据的下标映射成线段树中的下标。我们需要明白，上述过程是ST的成型。所谓成型就是建立ST的骨架，里面是没有我们要输入的数值的。此时ST里面的value是我们人为加入的初值，还没有实际意义。之后有实际意义的数据需要经过update操作进入ST之中。上面谈到，有实际意义的数据有两个来源。对于即时输入，我们也是先定下来这次输入多少，然后for循环cin输入数据，这个过程会有一个输入数据的先后顺序，这些数据需要放入已经建立好的ST对应的叶子结点位置，需要一个映射把输入顺序映射到叶子位置；对于数组元素，就是在for循环的时候，将nums数组中的元素一个个送进ST相应叶子位置，需要一个位置上的映射。这些映射的功能就是father数组在做的工作，我们需要一个这样的数组。从上面的讲解可以知道：father数组的大小就是输入数据的个数。如果不能确定输入的具体个数，那也取一个很大的数值即可。

**第二步：元素更新**

**自下而上**

```C++
void UpdateTree(int i) { // 自下而上地update树
	if (i == 1) return; // 说明已到达根节点
	int fi = i >> 1; // 获取父结点的下标
	// node[fi].value = max(node[fi << 1].value, node[fi << 1 | 1].value); // 获得最大值
	node[fi].value = node[fi << 1].value + node[fi << 1 | 1].value; // 获得两段区间总和   具体获得什么需要根据题目要求而定
	UpdateTree(fi);
}
```

第一步已经建立好了树型结构，该有的线段区间值都已完备，就差node的value值需要更新。update就是更新每一个node的value值。value根据题目要求而定，可以是区间和，也可以是最大值、最小值。

**第三步：区间查询**

**自上而下**

```C++
// 区间查询，调用函数时为QueryTree(1,l,r)，即从根节点自上往下查询
int QueryTree(int i,int l,int r){
	int sum = 0;
	if (l == node[i].left && r == node[i].right) {
		// 如果刚好就是这个区间，我们直接返回
		sum += node[i].value;
		return sum;
	}
	i = i << 1; // 如果没有刚刚好，那么就先查询这个节点的左子节点
	if (l <= node[i].right) {
		// 说明部分包含左子树
		if (r <= node[i].right) {
			// 说明全包含在左子树
			sum += QueryTree(i, l, r);
		}
		else {
			sum += QueryTree(i, l, node[i].right); // 只包含部分
		}
	}
	i += 1; // 查询右子节点
	if (r >= node[i].left) {
		// 说明部分包含右子树
		if (l >= node[i].left){
			// 说明全包含在右子树。
			sum += QueryTree(i, l, r);
		}
		else {
			sum += QueryTree(i, node[i].left, r); // 部分包含
		}
	}
	return sum; // 返回求得的区间和
}

```

**第三步就是根据第二步update的功能，得到相应区间内的结果**。比如update的是max或min，那么query的时候就关注max与min；如果update的是区间和，那么query就关注区间和。这一步根据第二步而变，第二步根据题目要求而变。如果一个节点需要更多功能，那么第一步node的结构体需要更加复杂，也需要变。

总之，基础的ST如上所示。变体或更复杂的结构详见题目要求，基本思想就是如上所示。以上代码可以实现用ST求区间和，[完整代码点击这里！（**线段树区间和模板**）](https://github.com/ThreeSR/Data-Structure/blob/master/Segment%20Tree%20Templete_Range%20Sum.cpp)

参考链接：[线段树入门（Segment Tree）详细整理](https://blog.csdn.net/hzf0701/article/details/107859659?utm_medium=distribute.pc_relevant.none-task-blog-baidujs_title-1&spm=1001.2101.3001.4242)

[HDU1754 I Hate It](https://github.com/ThreeSR/LeetCode/blob/main/HDU1754_I%20Hate%20It_Segment%20Tree.cpp) **线段树求最大值的模板题**，考察的是对区间最大值的选取。 [题目链接](http://acm.hdu.edu.cn/showproblem.php?pid=1754)

[POJ3264 Balanced Lineup](https://github.com/ThreeSR/LeetCode/blob/main/POJ3264_Balanced%20Lineup_Segment%20Tree.cpp) 本题的ST中需要存两个值，一个是min，另一个是max。因为在最后，需要输出max-min的数值。算是比较进阶的ST题目。 [题目链接](http://poj.org/problem?id=3264)

[LC327 Count of Range Sum 区间和的个数](https://github.com/ThreeSR/LeetCode/blob/main/LC327_Count%20of%20Range%20Sum_Segment%20Tree.cpp)  本题用另一种风格（指针）创建了ST，并且使用一些方法减少ST的开销。详见链接。


[:point_up_2: Top](#tree)

## Bottom
