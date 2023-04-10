# LeetCode
```diff
+ _ + 下面是力扣题目的一些总结：编程语言主要是C++和Python，偶尔会有Java和C。
- _ - 刷力扣题纯粹是兴趣，这里不光有力扣，也有《剑指offer》和其他内容(#^.^#)
！_ ！如果你觉得我做得还行，那就给我Star吧！
# _ # 特别鸣谢微信公众号：代码随想录#
```
***
| 作者 | Three |
| :----: | :----: |
| 领英 | [![](https://camo.githubusercontent.com/0c4286a2bd43a8fe3b39f93c037c63612e014c62/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d2d6c696e6b6564696e3f6c6162656c3d4c696e6b6564496e266c6f676f3d4c696e6b6564496e267374796c653d736f6369616c)](https://www.linkedin.com/in/rui-sun-999717173 "Welcome") |
| 知乎 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/%E7%9F%A5%E4%B9%8E.png?raw=true"/>](https://www.zhihu.com/people/sun-rui-55-32 "Welcome") |
| 力扣 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/LeetCode.png?raw=true"/>](https://leetcode-cn.com/u/threesr/ "Hello World!") |
| CSDN | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/csdn.png?raw=true"/>](https://blog.csdn.net/Three3333333 "Welcome") |
:blush: :trophy: | :sun_with_face: :octocat:
 
:construction:	**Notice: This Page is Under Construction.** :bowtie:

**君子曰：学不可以已。** 

[代码书写规范](https://mp.weixin.qq.com/s/UR9ztxz3AyL3qdHn_zMbqw)

[:point_up_2: Top](#leetcode) 代表返回顶部

[:point_down:](#bottom) 代表到文档末尾

**Key Words :**  `C++`  `Python`  `Data Structure and Algorithm` `Java`
***
**特别注意**

:warning:

文档内容的顺序还会在后续调整，推荐做题顺序：（参考自[代码随想录](https://github.com/youngyangyang04)）

数组->链表->哈希表->字符串->栈与队列->树->回溯->贪心->动态规划->图论->高级数据结构

***
# Table

+ [学习资源](#learning-resources)
+ [一些感想]() （pending）
+ [剑指offer]() （pending） 
+ [数据结构](#数据结构)
     + [队列](#队列)
     + [链表](#链表)
     + [栈](#栈)
          + [单调栈](#单调栈)
          + [逆波兰表达式](#逆波兰表达式)
     + [哈希表](#哈希表)
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
               + [AVL树](#AVL树)
               + [红黑树](#红黑树)
          + [B树](#B树)
          + [字典树](#字典树)
          + [树状数组](#树状数组) *optional* 
          + [线段树](#线段树) *optional*
+ [重复元素的处理](#重复元素的处理)
     + 1.集合
     + 2.哈希表
     + 3.排序
     + 4.二分法
     + 5.摩尔投票法
     + 6.双指针法
+ [字符串处理](#string-manipulation)
     + [字符串匹配](#字符串匹配)
          + 1.KMP算法
          + 2.Rabin-Karp算法 *optional*
+ [位运算](#bit-operation)
     + [一些关于位运算的问题](#一些关于位运算的问题)
          + 1.什么时候用位运算？
          + 2.为什么要用位运算？
          + 3.移位右运算(>>)，如果某个数的最后一个数位在右移之前不为0，为1，那右移之后是不是就消失了？会有什么影响？
     + 1.与运算（&）的应用
          + Brian Kernighan算法
     + 2.异或运算（^）的应用
     + 3.加法器的实现
     + 4.汉明距离的计算 Hamming Distance
+ [数学](#math)
     + 整数翻转模板
     + 卡特兰数
     + 求组合数（公式书写）
     + [弗洛伊德判圈算法](https://zh.wikipedia.org/wiki/Floyd%E5%88%A4%E5%9C%88%E7%AE%97%E6%B3%95)
     + [杨辉三角](#杨辉三角)
     + [快速幂](#快速幂)
     + [前缀和](#前缀和)
     + [二分法](#二分法)
     + [公因数与公倍数](#公因数与公倍数)
     + [丑数](#丑数)
     + [NP问题](#NP问题)
     + [计算几何学](#计算几何学)
+ [递归](#recursion)
+ [二分搜索](#binary-search)
     + [旋转排序数组](#旋转排序数组)
+ [排序](#sort)
     + 比较类排序
          + 交换排序
               + 冒泡排序 Bubble Sort
               + 快速排序 Quick Sort
          + 插入排序
               + 简单插入排序 Insertion Sort
               + 希尔排序 Shell Sort
          + 选择排序
               + 简单选择排序 Selection Sort
               + 堆排序 Heap Sort
          + 归并排序 
               + 二路归并排序 Merge Sort 
               + 多路归并排序 Merge Sort 
     + 非比较排序
          + 计数排序 Counting Sort
          + 基数排序 Radix Sort
          + 桶排序 Bucket Sort
+ [回溯法](#backtracking)
     + 回溯法模板
     + 组合问题
     + 子集问题
     + 排列问题
     + 一些应用
          + 解数独
          + N皇后问题
          + P/NP问题
+ [贪心算法](#greedy-algorithm)
+ [动态规划](#dynamic-programming-dp)
     + [编辑距离（NLP应用）](#编辑距离)
     + [打家劫舍](#打家劫舍)
     + [买卖股票的最佳时机](#买卖股票的最佳时机)
     + [最长递增子序列问题](#最长递增子序列问题)
     + [最长重复子串问题](#最长重复子串问题)
     + [背包问题](#背包问题)
          + [0-1背包问题](#0-1背包问题)
          + [完全背包问题](#完全背包问题)
          + [动态规划下的排列组合问题](#动态规划下的排列组合问题)
+ [双指针](#double-pointer)
     + 快慢指针
     + [滑动窗口](#sliding-window)
+ [图论](#graph-theory)
     + 基本概念
     + 深拷贝与浅拷贝
     + [拓扑排序](#topological-sorting)
     + [并查集](#disjoint-set)
          + 并查集模板
     + [最小生成树](#minimum-spanning-trees-mst)
          + prim算法
          + kruskal算法
     + [最短路径问题](#shortest-path)
          + 迪杰斯特拉算法  [C++实现](https://github.com/ThreeSR/C-Plus-Plus/blob/master/graph/Dijkstra.cpp)  [Python实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/Dijkstra's_Algorithm.py)
          + Bellman-Ford算法
     + [网络流问题](#network-flow) *optional*
          + [基本概念](#基本概念)    
          + [最大流问题](#maximum-flow-problem)
               + [最大流最小割定理](#max-flow-min-cut-theorem)
               + [Ford-Fulkerson方法](#ford-fulkerson-method)
     + [概率图模型](#probabilistic-graphical-model) *optional*
          + [基本概念](#basic-concept)
          + [隐马尔科夫模型](#hidden-markov-model)
          + [马尔科夫随机场](#markov-random-field)
          + [条件随机场](#conditional-random-field)
          + [一些应用](#application)
     + [PageRank算法介绍](#PageRank算法介绍) *optional*
+ [脑筋急转弯](#brain-teaser)
+ [模拟法](#模拟法)
     + [螺旋矩阵](#螺旋矩阵)
     + [搜索二维矩阵](#搜索二维矩阵)
+ [其他](#others)
+ [结尾](#bottom)

***
## Learning Resources
:penguin:  :moyai:	
+ [算法导论](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/Introduction%20to%20Algorithms%203rd%20Edition.pdf)  经典名著
+ [算法图解](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/%E7%AE%97%E6%B3%95%E5%9B%BE%E8%A7%A3.pdf)  生动形象的算法书籍
+ [代码随想录](https://github.com/youngyangyang04)  微信公众号
+ [大话数据结构]()  pending
+ [Coursera数据结构与算法专项课程](https://www.coursera.org/specializations/data-structures-algorithms)  内容偏难，由UCSD出品的在线课程
+ [剑指OFFER 第2版](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/%E5%89%91%E6%8C%87OFFER%20%E7%AC%AC2%E7%89%88.pdf)  找工必备
+ [C++ Primer第四版](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/C%2B%2B%20Primer%E7%AC%AC%E5%9B%9B%E7%89%88.pdf)  C++经典巨著
+ [C++ 标准模板库(STL)](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/C%2B%2B_%E6%A0%87%E5%87%86%E6%A8%A1%E6%9D%BF%E5%BA%93(STL).pdf)  这个PDF是STL的简单总结，很适合初学者学习
+ [STL源码剖析](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/STL%E6%BA%90%E7%A0%81%E5%89%96%E6%9E%90%EF%BC%88%E6%89%B9%E6%B3%A8%E7%89%88%EF%BC%89.pdf) C++ STL经典教材 可以更好地理解STL的实现，对于STL的使用很有意义，但不适合初学
+ [Markdown语法](https://github.com/ThreeSR/README) 学会Markdown有助于养成记录的好习惯，CSDN、GitHub、简书等平台都有支持Markdown语法，学会它是很有意义的
+ [Markdown阅读软件](https://typora.io/) 这里推荐我使用的typora
+ [Vim的使用](https://zhuanlan.zhihu.com/p/68111471) Vim是一个效率（zhuang bi）神器，旨在无鼠标的纯键盘操作。[Vim资源](https://github.com/youngyangyang04/PowerVim) ， [帮助学习Vim的小游戏](https://github.com/jmoon018/PacVim)。
+ [Notion](https://www.notion.so/) 笔记神器，方便在不同端同步使用
+ [CSAPP]()  pending
+ [机器学习]()  pending

***
## 数据结构

### 队列

**Queue**

[LC239 Sliding Window Maximum 滑动窗口最大值](https://github.com/ThreeSR/LeetCode/blob/main/LC239_Sliding%20Window%20Maximum_Queue.cpp)  单调队列（从大到小），使用deque来实现单调队列，满足题目要求。这是一个“自己动手，丰衣足食”的方法，因为C++没有现成的单调队列使用，所以很考验能力。除了本题，[剑指Offer 59 - I 滑动窗口的最大值](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_59%20-%20I_%E6%BB%91%E5%8A%A8%E7%AA%97%E5%8F%A3%E7%9A%84%E6%9C%80%E5%A4%A7%E5%80%BC_Queue.cpp) 和本题相同。

其实，除了这个解法，还有别的方法，比如优先队列。这是[优先队列的题解](https://github.com/ThreeSR/LeetCode/blob/main/LC239_Sliding%20Window%20Maximum_Heap.cpp)。

[:point_up_2: Top](#leetcode)

### 链表

**Linked List**

链表节点的删除（经典的头结点处理，生成一个dummy的头结点。好处是之后删除节点不用把头结点分类讨论。）  [剑指offer 18](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_18_%E5%88%A0%E9%99%A4%E9%93%BE%E8%A1%A8%E7%9A%84%E8%8A%82%E7%82%B9_Linked%20List.cpp)

（注：dummy节点的设置有时候也称为哨兵技巧）

[LC83 Remove Duplicates from Sorted List 删除排序链表中的重复元素](https://github.com/ThreeSR/LeetCode/blob/main/LC83_Remove%20Duplicates%20from%20Sorted%20List_Linked%20List.cpp)  本题根据题目要求，跳过重复值的节点即可；**注意：：java和python的指针，使用.；C++使用->!!**   详情可以关注[我的力扣题解](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/solution/ju-yi-fan-san-yi-wen-dai-ni-shua-san-ti-linsn/)

[LC82 Remove Duplicates from Sorted List II 删除排序链表中的重复元素 II](https://github.com/ThreeSR/LeetCode/blob/main/LC82_Remove%20Duplicates%20from%20Sorted%20List%20II_Linked%20List.cpp)  本题和上面的LC83是同一类型题，只是在节点的删除上有所不同。这里的删除需要“斩草除根”地删去，所以要设置哑结点，比LC83更难一些。详情可以关注[我的力扣题解](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/solution/ju-yi-fan-san-yi-kou-qi-acsan-dao-shan-c-5xf0/)。

[LC61 Rotate List 旋转链表](https://github.com/ThreeSR/LeetCode/blob/main/LC61_Rotate%20List_Double%20Pointer.cpp)  简单来说，就是先让链表成环，然后把要移动的节点当作头结点，之后断开头结点前面的链接，从环再次变回链表。这时候就是结果。图解在Solution中，一目了然。[图一](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC61_Ans1.png) || [图二](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC61_Ans2.png)。也可以参见[我的力扣题解](https://leetcode-cn.com/problems/rotate-list/solution/shuang-zhi-zhen-fa-xiao-guo-hen-hao-si-l-3bd8/)

***
**反转链表**

[LC206 Reverse List 反转链表 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC206_Reverse%20List.py)  可以考虑把链表中的元素入栈，之后再出栈。但是这样的方法显然麻烦。

[LC92 Reverse Linked List II 反转链表 II](https://github.com/ThreeSR/LeetCode/blob/main/LC92_Reverse%20Linked%20List%20II_Linked%20List.cpp)  本题在上一题基础上，要求把一个区间内的链表进行反转，不再是全部进行反转。似乎可以将上一题当API使用，但应该会TLE。因此，需要有新的思路。这题的思路详见链接中的内容，是**典型的链表中的指针操作**，值得学习。[图解](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC92_Ans.gif)

除了上述解法，还有递归解法，虽然空间复杂度更高，但是更加简洁，详见[这里](https://leetcode-cn.com/problems/reverse-linked-list-ii/solution/bu-bu-chai-jie-ru-he-di-gui-di-fan-zhuan-lian-biao/)。

**注：递归应该是学习重点**
***

[:point_up_2: Top](#leetcode)

### 栈

**Stack**

[LC232 Implement Queue using Stacks 用栈实现队列](https://github.com/ThreeSR/LeetCode/blob/main/LC232_Implement%20Queue%20using%20Stacks_Stack.cpp) 本题要求使用栈来实现队列。既是对栈的综合考察，也是对队列的综合考察，是很有意义的一道题。

注：[剑指Offer_09 用两个栈实现队列](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_09_%E7%94%A8%E4%B8%A4%E4%B8%AA%E6%A0%88%E5%AE%9E%E7%8E%B0%E9%98%9F%E5%88%97_Stack.py)和本题一样。

[LC1047 Remove All Adjacent Duplicates In String 删除字符串中的所有相邻重复项](https://github.com/ThreeSR/LeetCode/blob/main/LC1047_Remove%20All%20Adjacent%20Duplicates%20In%20String_Stack.cpp)  本题还可以直接使用string解决，因为在C++中string有类似于stack的用法。如果使用stack解决，判断入栈元素和栈顶元素之间相等与否即可，相等则弹出栈顶元素，不相等就入栈。

***
#### 单调栈 

**Monotone Stack**

[LC84 Largest Rectangle in Histogram 直方图中的最大矩形](https://github.com/ThreeSR/LeetCode/blob/main/LC84_Largest%20Rectangle%20in%20Histogram_Stack.py)

[LC85 Maximal Rectangle 最大矩形](https://github.com/ThreeSR/LeetCode/blob/main/LC85_Maximal%20Rectangle_Stack.py)

推荐上面两道题一起写，你会发现LC84是LC85的API，这是一件很有趣的事情。解题过程困难，详细内容点开上面题目可见。

[LC739 Daily Temperatures 每日温度](https://github.com/ThreeSR/LeetCode/blob/main/LC739_Daily%20Temperatures_Stack.cpp) 需要使用单调递减栈，对较大的温度进行记录。对于单调栈的使用，是一个经典的套路。注意：所谓的单调递减栈，是指从栈底到栈顶，元素大小递减。

[LC503 Next Greater Element II 下一个更大元素 II](https://github.com/ThreeSR/LeetCode/blob/main/LC503_Next%20Greater%20Element%20II_Stack.cpp) 同样是单调递减栈，和LC739非常类似。最大的不同是：这道题需要使用**滚动数组**。滚动数组的使用需要借助取余（%）运算，详见链接。

[LC456 132 Pattern 132模式 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC456_132%20Pattern_Stack.py)  单调递减栈；维护当前元素左边最小值，维护比当前元素小的当前位置右边的最大值，再比较两个数值，判断是否存在132模式。在处理当前元素的右边元素时，需要使用单调递减栈维护。

一种比较好的，维护从开始位置到当前位置最小值的方法：

```python
        N = len(nums)
        leftMin = [float("inf")] * N # 用来存储从开始位置到i位置的最小值
        for i in range(1, N):
            leftMin[i] = min(leftMin[i - 1], nums[i - 1]) # 得到区间的最小值，这个方法很好
```

***
#### 逆波兰表达式

**Reverse Polish Notation RPN**

[LC150 Evaluate Reverse Polish Notation 逆波兰表达式求值](https://github.com/ThreeSR/LeetCode/blob/main/LC150_Evaluate%20Reverse%20Polish%20Notation_Stack.cpp)  本题涉及RPN。RPN是一个广泛用于计算机的表达式，目的就是把公式以后缀的形式送给电脑去解读，之后电脑执行公式中的内容，给出结果。RPN揭示了早期甚至现在很多电脑对于计算公式的处理。这种处理方法的底层实现是利用stack的数据结构，*了解它很有意义*。推荐阅读：[栈与队列：有没有想过计算机是如何处理表达式的？](https://mp.weixin.qq.com/s/hneh2nnLT91rR8ms2fm_kw)

力扣题目中，对于公式的处理，除了RPN，也有按照人的阅读顺序处理的题目，比如：[LC224 Basic Calculator 基本计算器](https://github.com/ThreeSR/LeetCode/blob/main/LC224_Basic%20Calculator_Stack.cpp)。这道题也是对于公式的处理，实现也是用stack，可以两题一起做，进行比较。

[LC227 Basic Calculator II 基本计算器 II](https://github.com/ThreeSR/LeetCode/blob/main/LC227_Basic%20Calculator%20II_Stack.cpp)  本题和LC224很像，但也有不同：1.添加了乘除法；2.去掉了括号。**注意**：**1.isdigit函数可以判断一个string是不是在'0'到'9'之间；2.可用动态数组实现stack；3.string中对于每一位数的string类型与int类型的关系应该小心处理**。

[LC1006 Clumsy Factorial 笨阶乘](https://github.com/ThreeSR/LeetCode/blob/main/LC1006_Clumsy%20Factorial_Stack.cpp)  关键在于处理乘除和加减的优先级问题，方案是加减先入栈，乘除和栈顶元素运算之后再入栈。这是一个很经典的想法，详情可见[我的力扣题解](https://leetcode-cn.com/problems/clumsy-factorial/solution/ji-shuang-yi-chong-si-lu-liang-dao-ti-mu-c8pq/)。

**注：力扣1006和力扣227是很相似的。**

[:point_up_2: Top](#leetcode)

***
### 哈希表

**Hash Table**

除了翻译为哈希表，这个数据结构也叫作散列表。有的时候，也管这个数据结构叫做字典。核心的特征是：一个键值（key）对应一个数值（value），二者存在映射关系。

在C++中，可以使用map<int, int>的结构进行实现；Python中可以使用dict()，即字典进行实现。

[LC697 Degree of an Array 数组的度](https://github.com/ThreeSR/LeetCode/blob/main/LC697_Degree%20of%20an%20Array_Hash%20Table.cpp)  需要建立*三个哈希表*进行相关内容的记录。比较考验哈希表的使用。

[LC705 Design HashSet 设计哈希集合](https://github.com/ThreeSR/LeetCode/blob/main/LC705_Design%20HashSet_HashTable.java)  哈希表思想的应用。本题需要设计一个哈希表，设计过程中不能调用哈希表的函数。虽然如此，我们依然可以借鉴哈希表的思想：设输入的数值为key，对应的value为true或false。已经知道输入数据的大小范围之后，设定一个不小于这个范围的数组，数组的下标就是key，对应数值是true或false。利用这样的想法结合题目，可以得到本题的代码。*这种想法是很巧妙的。*

[LC706 Design HashMap 设计哈希映射](https://github.com/ThreeSR/LeetCode/blob/main/LC706_Design%20HashMap_HashTable.java)  本题和LC705思路一致。

[:point_up_2: Top](#leetcode)

***

### 树 

**Tree**

树型数据结构**非常关键**，里面有很多重要的知识概念。

**目前，关于树的文档已经迁移至：[树（子文档）](https://github.com/ThreeSR/LeetCode/blob/main/Subdocument/Tree.md)**

#### 树的实现

##### 二叉树

#### 树的遍历

#### 堆

**Heap**

[:point_up_2: Top](#leetcode)

#### 二叉搜索树

**Binary Search Tree BST**

##### AVL树

**AVL Tree**

##### 红黑树

**Red-Black Tree or RB Tree**

#### B树

#### 字典树

**Trie Tree or 前缀树**

#### 树状数组

**Binary Indexed Tree**

#### 线段树

**Segment Tree**

[:point_up_2: Top](#leetcode)
***
## 重复元素的处理

### 1. 集合 Set

主要用于去重，但不见得效率会很高。一些相关的C++ set函数运用的题目： [LC217 (set去重)](https://github.com/ThreeSR/LeetCode/blob/main/LC217_Contains%20Duplicate_Set.cpp)
[LC287 (set寻找已有的元素，java语言)](https://github.com/ThreeSR/LeetCode/blob/main/LC287_Find%20the%20Duplicate%20Number_Set.java)

### 2. 哈希表 Hash Table 

哈希表主要用在重复元素的频次计算上，如果不是非得要算频次大小，哈希表并不见得是首选。   

哈希表value处理的模板 [LC501](https://github.com/ThreeSR/LeetCode/blob/main/LC501_Find%20Mode%20in%20Binary%20Search%20Tree_Hash%20Table.cpp)    

哈希表对重复元素的统计  

1. [剑指Offer_50_第一个只出现一次的字符](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_50_%E7%AC%AC%E4%B8%80%E4%B8%AA%E5%8F%AA%E5%87%BA%E7%8E%B0%E4%B8%80%E6%AC%A1%E7%9A%84%E5%AD%97%E7%AC%A6_Hash%20Table.cpp)  （这道题目在写的时候，注意C++返回空的char型字符是 return '' or return ' '  是**单引号**） 

2. [剑指Offer_53 - I_在排序数组中查找数字 I](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_53%20-%20I_%E5%9C%A8%E6%8E%92%E5%BA%8F%E6%95%B0%E7%BB%84%E4%B8%AD%E6%9F%A5%E6%89%BE%E6%95%B0%E5%AD%97%20I_Hash%20Table.cpp)  写的时候记得经典的哈希表统计方式：(**模板**)

```C++
        unordered_map<int, int> hashmap;
        for (int i = 0; i <= nums.size() - 1; i++) {
            hashmap[nums[i]]++;
        }
        // 根据实践，这里注意：在hashmap定义之后，并没有对其赋初值。但是可以直接进行自增。也就是说，
        // hashmap根据上面的定义之后，里面的value自动是0，不像int i; 那样，
        // 不能直接在赋值前i++
```
针对于本题，还有一点就是这题和[LC34](https://github.com/ThreeSR/LeetCode/blob/main/LC34_Find%20First%20and%20Last%20Position%20of%20Element%20in%20Sorted%20Array_Binary%20Search.cpp)相同，只是输出不同。输出的不同使得这道题比[LC34](https://github.com/ThreeSR/LeetCode/blob/main/LC34_Find%20First%20and%20Last%20Position%20of%20Element%20in%20Sorted%20Array_Binary%20Search.cpp)简单。

### 3. 排序 Sort  

排序是很万金油的方法，很多地方都会用到排序。在处理混乱的数据时，排序往往是很有效的第一步。处理重复元素、合并区间等问题时，排序都有很好的作用。对于排序，很重要的就是快速排序 [**Quick Sort**](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/QuickSort_Algorithm.py)，掌握这个程序很有必要。这里随便举一个例子：[LC56 合并区间](https://github.com/ThreeSR/LeetCode/blob/main/LC56_Merge%20Intervals_Greedy%20Algorithm.cpp)  在这一题中，一开始就要先排序，不然不好下手。

### 4. 二分法 [Binary Search](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/BinarySearch_Algorithm.py)  

在查找重复元素时，也可以用二分法。比如[LC287  Pending]()，这一题后续更新二分法解和C++的Set方法。 

### 5. 摩尔投票法 [**Boyer–Moore Majority Vote Algorithm**](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm) 

（针对于摩尔投票法，我之后有时间会写一篇CSDN介绍）。这个方法在计算最多的元素或者数量占优（大于总数的一半或者这部分元素大于另一部分元素数量）的一部分元素时，有很好的表现。整个算法的过程就像是投票，最终拥有绝对票数优势的人可以对消掉对手的票数。  在力扣中，运用此方法的题目有：[LC169 Majority Element](https://github.com/ThreeSR/LeetCode/blob/main/LC169_Majority%20Element_Boyer%E2%80%93Moore%20Majority%20Vote%20Algorithm.cpp)  [剑指offer 39](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_39_%E6%95%B0%E7%BB%84%E4%B8%AD%E5%87%BA%E7%8E%B0%E6%AC%A1%E6%95%B0%E8%B6%85%E8%BF%87%E4%B8%80%E5%8D%8A%E7%9A%84%E6%95%B0%E5%AD%97_Boyer%E2%80%93Moore%20Majority%20Vote%20Algorithm.cpp)（本题和LC169一样）  [LC229 Majority Element II](https://github.com/ThreeSR/LeetCode/blob/main/LC229_Majority%20Element%20II_Boyer%E2%80%93Moore%20Majority%20Vote%20Algorithm.cpp)（本题是LC169的升级版）

### 6. 双指针法  Double Pointer

[LC80 Remove Duplicates from Sorted Array II 删除有序数组中的重复项 II](https://github.com/ThreeSR/LeetCode/blob/main/LC80_Remove%20Duplicates%20from%20Sorted%20Array%20II_Double%20Pointer.cpp)

[LC26 Remove Duplicates from Sorted Array 删除有序数组中的重复项 Java代码](https://github.com/ThreeSR/LeetCode/blob/main/LC26_Remove%20Duplicates%20from%20Sorted%20Array_Double%20Pointer.java)  

以上两题详见[我的力扣题解](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/ju-yi-fan-er-ni-zhen-de-zhen-de-zhi-de-x-eicz/)。这两题是双指针应用于重复元素处理的模板。

总结这些方法的原因在于：力扣中很多题目需要对重复元素进行处理。有的时候题目目标不是重复元素，但过程中会遇到这个问题。因此作如上总结。

[:point_up_2: Top](#leetcode)
***
## String Manipulation

[LC228 Summary Ranges 合并区间](https://github.com/ThreeSR/LeetCode/blob/main/LC228_Summary%20Ranges_Naive%20Algorithm.cpp)  转为string类型：to_string()  在string类型里面加字符：append() eg: temp.append("->");  不像python直接 + 即可。

[LC648 Replace Words 单词替换](https://github.com/ThreeSR/LeetCode/blob/main/LC648_Replace%20Words_String%20Manipulation.cpp) 很好的锻炼字符串使用的题目。注意的点：1.stringstream sentenceWord(sentence); // 这种语法可以把一个句子的string拆成逐个word；2.if (sentence.empty()) { // 要灵活使用string下面的方法；3.while (sentenceWord >> word) { // 这个的意思是：把拆成word的sentenceWord中的各个单词逐个赋值给word；4.word = word.substr(0, i); // 这就是找到单词的前缀。一旦找到前缀，马上收手。；5.result += word + ' '; // 找不到前缀，那就是把本身的单词输出到result中。这也是符合题目的要求的。**特别注意：在C++中，也可以使用类似于Python的字符串处理方法。也可以用string下的 += 直接加长字符串。**

[LC14 Longest Common Prefix 最长公共前缀](https://github.com/ThreeSR/LeetCode/blob/main/LC14_Longest%20Common%20Prefix_String%20Manipulation.java)  思路简单：将第一个string设置成公共前缀，然后逐一和其他string比较，逐步减小公共子串的长度，如果最后还有公共部分，代表有公共前缀；反之则无，可以提前break。比较考验字符串处理的能力。

[LC1047 Remove All Adjacent Duplicates In String 删除字符串中的所有相邻重复项](https://github.com/ThreeSR/LeetCode/blob/main/LC1047_Remove%20All%20Adjacent%20Duplicates%20In%20String_String%20Manipulation.cpp)  本题也可以直接使用stack解决，但是使用string更加巧妙。和stack的思路相同，入string元素如果和string末尾元素相等，那么string末尾元素出string；反之新的元素入string。

[LC179 Largest Number 最大数](https://github.com/ThreeSR/LeetCode/blob/main/LC179_Largest%20Number_String%20Manipulation.cpp)  本题考查字符串处理加自定义排序，很有意义。其证明比较复杂，详细见[我的力扣题解](https://leetcode-cn.com/problems/largest-number/solution/ju-yi-fan-er-bu-guang-you-zui-da-shu-hua-uykb/)。

[剑指Offer45 把数组排成最小的数](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_45_%E6%8A%8A%E6%95%B0%E7%BB%84%E6%8E%92%E6%88%90%E6%9C%80%E5%B0%8F%E7%9A%84%E6%95%B0_String%20Manipulation.cpp)  本题和力扣179十分相似，只是把最大数改成了最小数。基本可以照搬代码，详细见[我的力扣题解](https://leetcode-cn.com/problems/largest-number/solution/ju-yi-fan-er-bu-guang-you-zui-da-shu-hua-uykb/)。

### 字符串匹配

#### 1.KMP算法 

[**背景知识**](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm)
> In computer science, the Knuth–Morris–Pratt string-searching algorithm (or KMP algorithm) searches for occurrences of a "word" W within a main "text string" S by employing the observation that when a mismatch occurs, the word itself embodies sufficient information to determine where the next match could begin, thus bypassing re-examination of previously matched characters.

> The algorithm was conceived by James H. Morris and independently discovered by Donald Knuth "a few weeks later" from automata theory. Morris and Vaughan Pratt published a technical report in 1970. The three also published the algorithm jointly in 1977. Independently, in 1969, Matiyasevich discovered a similar algorithm, coded by a two-dimensional Turing machine, while studying a string-pattern-matching recognition problem over a binary alphabet. This was the **first linear-time algorithm for string matching.**

[**相关理论**](https://mp.weixin.qq.com/s?__biz=MzUxNjY5NTYxNA==&mid=2247484428&idx=1&sn=c0e5573f5fe3b438dbe75f93f3f164fa&chksm=f9a2375dced5be4b8cfddf3236b7db8153b60092c87051bb8a6e4e87dad6c8b2c4cbcd5e2af5&scene=21#wechat_redirect) 

KMP算法的核心是找到模式串的**next数组**，也就是模式串的**前缀表（prefix table）**。

引入下面的定义：

对于要在文本串：aabaabaafa中查找是否出现过一个模式串：aabaaf。

1. 模式串
2. 文本串

这两个概念需要记清楚。

**前缀表是模式串自身的性质**，我们需要用模式串自身的性质，在文本串中进行匹配。

具体内容见相关理论的链接。

**模板**

```C++
// 前缀表的模板，前缀表是KMP算法的核心。
    void getNext(int* next, const string& s) {
        int j = -1;
        next[0] = j;
        for(int i = 1; i < s.size(); i++) { // 注意i从1开始
            while (j >= 0 && s[i] != s[j + 1]) { // 前后缀不相同了
                j = next[j]; // 向前回溯
            }
            if (s[i] == s[j + 1]) { // 找到相同的前后缀
                j++;
            }
            next[i] = j; // 将j（前缀的长度）赋给next[i]
        }
    }
```

[LC28 Implement strStr() 实现 strStr()](https://github.com/ThreeSR/LeetCode/blob/main/LC28_Implement%20strStr()_KMP.cpp) 这题就是经典的KMP算法的应用，很值得学习。一开始先制作前缀表，之后利用前缀表进行匹配，得到题目要的结果。

[LC459 Repeated Substring Pattern 重复的子字符串](https://github.com/ThreeSR/LeetCode/blob/main/LC459_Repeated%20Substring%20Pattern_KMP.cpp) 这题巧妙利用了KMP算法，展现了KMP算法处理重复子字符串的威力。

#### 2.Rabin-Karp Algorithm  

该算法具体可以参考《算法导论》，在我的GitHub中有Python的实现：[Rabin-Karp Algorithm](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/Rabin-Karp_Algorithm.py)。这个算法的思路挺好的，如果有时间可以进行学习。但应用程度上没有KMP广。

算法提出者主页：

[Richard M. Karp](https://www2.eecs.berkeley.edu/Faculty/Homepages/karp.html)  Professor Emeritus in UCB, received Turing Award in 1985.

[:point_up_2: Top](#leetcode)
***
## Bit Operation

**（这句话是给我自己提醒）！！一个数和1与运算不是本身！ 0 & 1 = 0 1 & 1 = 1  等于本身指的是数位，如果 8 & 1 = 1000 & 0001 = 0 != 8。这里要特别注意。 0x1 有提取extract的作用。**
                
### 一些关于位运算的问题

1.什么时候用位运算？    

当涉及到二进制、进制变化、数位操作、比较两个数异同的时候，就应该对位运算很敏感。

2.为什么要用位运算？    

1.*位运算有其速度优势*。在早期的计算机中，位运算的速度比加减乘除更快。随着计算机的发展，位运算的速度目前和加法差不多快，但还是比乘法快。这样一来，我们还是很有必要了解这个方法。

2.*了解位运算，对了解计算机底层的数据处理有帮助*。我们知道，计算机本质上只认识0101的二进制信息，在学习微机原理和数字逻辑电路的时候，我们经常和二进制打交道。在写题目的过程中，培养对二进制数的感觉，对后续学习这些重要课程有帮助。比如你如何用与门和异或门制作一个加法器？这就是用位运算实现加法运算的过程。

3.移位右运算(>>)，如果某个数的最后一个数位在右移之前不为0，为1，那右移之后是不是就消失了？会有什么影响？

就是消失了。影响就是地板除。针对于右移运算，一个数某位为1，右移之后应该也是像为0那样，就直接消失了。比如 9 = 1001 >> 1 == 0100 == 4。如果用除法，就是9/2=4，地板除的功效。所以，在一些语言中，int / int 的运算有时会直接归类成地板除。背后的原理应该和移位运算有关。

再者，这个数消失了也没什么关系，我们用位运算，要满足的是题目的目的，数据能不能留下来不关键。比如[LC477](https://github.com/ThreeSR/LeetCode/blob/main/LC477_Total%20Hamming%20Distance_Bit%20Operation.py)，我们统计1的个数就好，原本是什么数跟我们的求解无关。

[:point_up_2: Top](#leetcode)

### 1.与运算（&）的应用

判断二进制数有多少个1，可以使用 X & (X-1)的方法。也即布莱恩·克尼根算法  [Brian Kernighan Algorithm](https://www.geeksforgeeks.org/count-set-bits-in-an-integer/)

典型例题有：

[LC338 Counting Bits 比特位计数](https://github.com/ThreeSR/LeetCode/blob/main/LC338_Counting%20Bits_DP.cpp)  针对本题，[详见我的力扣题解](https://leetcode-cn.com/problems/counting-bits/solution/c-bu-lai-en-ke-ni-gen-suan-fa-dong-tai-g-17ym/)。

[LC191 Number of 1 Bits 位1的个数](https://github.com/ThreeSR/LeetCode/blob/main/LC191_Number%20of%201%20Bits_Bit%20Operation.cpp)  针对本题，[详见我的力扣题解](https://leetcode-cn.com/problems/number-of-1-bits/solution/xue-hui-zhe-yi-ti-zai-shua-liang-dao-ti-fnb7x/)。

### 2.异或运算（^）的应用  

异或运算是非常经常用到的位运算，C++中用 ^ 表示XOR。

推荐阅读的材料：[真实世界的异或运算](https://mp.weixin.qq.com/s/pDXzZoSByzYKkim71qCsCw)

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_Bit%20Operation.cpp)  LC389主要从find difference角度理解异或运算的用途

[LC268_Missing Number 缺失的数](https://github.com/ThreeSR/LeetCode/blob/main/LC268_Missing%20Number_Bit%20Operation.cpp)  LC268这道题从配对的角度理解异或运算，并且着重使用性质：0和任何数异或都是那个数本身。

从不同角度理解同一个运算，有时可以得到很精妙的解法。因为相同数异或为0，不同为1，所以从结果为1的角度，可以认为是find difference；从结果为0的角度，可以认为是pairing。正好，在LC389中要从find difference入手；在LC268中要从pairing入手。

总结：多角度理解同一个运算或算法在解题时很必要。

[LC765 Couples Holding Hands 情侣牵手 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC765_Couples%20Holding%20Hands_Bit%20Operation.py#L8) 这是2021年2月14日——情人节的每日一题。里面涉及到位运算中的异或运算。同时，它也有贪心算法的思想在其中。目前的问题在于：如何证明贪心策略是正确的？（虽然很多时候，贪心策略不好被证明，有的时候就是通过简单的尝试，然后跟着感觉走。）详细具体的内容见[我的力扣题解](https://leetcode-cn.com/problems/couples-holding-hands/solution/wei-yun-suan-pythontong-su-yi-dong-rang-9qubg/)。[LC765 Couples Holding Hands 情侣牵手 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC765_Couples%20Holding%20Hands_Bit%20Operation.cpp)

[LC1486 XOR Operation in an Array 数组异或操作](https://github.com/ThreeSR/LeetCode/blob/main/LC1486_XOR%20Operation%20in%20an%20Array_Naive%20Algorithm.cpp) 直接模拟即可，详见[我的力扣题解](https://leetcode-cn.com/problems/xor-operation-in-an-array/solution/yi-huo-yun-suan-zhi-jie-mo-ni-ji-ke-dan-1849u/)

[LC1611 使整数变为 0 的最少操作次数](https://leetcode-cn.com/problems/minimum-one-bit-operations-to-make-integers-zero/)  pending...

***

**数组中数字出现的次数**

如果给你一个数组，所有数字都是出现两次，只有一个出现了一次，你要怎么做去把它提取出来？

答案就是`对所有数值进行异或运算`。但如果数组中有两个数字都只出现了一次，你要怎么甄别？

[剑指Offer_56 - I 数组中数字出现的次数](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_56%20-%20I_%E6%95%B0%E7%BB%84%E4%B8%AD%E6%95%B0%E5%AD%97%E5%87%BA%E7%8E%B0%E7%9A%84%E6%AC%A1%E6%95%B0_Bit%20Operation.cpp)  本题就是涉及了上面所述的问题。想法分三步走：1.异或所有数值，得到不为0（从右往左）的第一位；2.以此为依据，对原数组数值进行分组，分组就是按照那一位是否为0；3.各自组内异或，得到两个只出现一次的数值。这样做能成功，还是因为其他数是成对出现，都抵消掉了，只剩落单的数本身。*很巧妙的思想！*

pending...

***

### 3.加法器的实现

加法器的实现主要靠与运算和异或运算，是很有必要掌握的一种方法。*（关于加法和位运算，我之后会写一篇CSDN介绍）*

下面是用位运算实现加法器的代码模板：

```Python
    def addBinary(self, a: str, b: str) -> str:  # 位运算实现加法  经典处理
        x = int(a, 2)  # 这个函数使得数据从10进制变到2进制
        y = int(b, 2)
        while y:
            z = x ^ y  # 异或运算，这个是模拟加法过程中1+0=1 1+1=0 0+0=0 的过程
            carry = (x & y) << 1 # 异或模拟加法，弊病在于没有记录进位。这里记录进位。进位是用与运算模拟，注意：因为是进位，所以要左移运算1个单位
            x, y = z, carry
        return bin(x)[2:]  # bin(x)函数用于将x返回成2进制的形式。这里的形式是'0b1010'的样式。因为addBinary函数变成str类型（函数定义），所以
        # return bin(x)  return的是"0b1010"样式。我们的结果中不希望有0b，所以是[2:],把前面两个"0b"去掉。
```

```C++
// 递归版 Pending
```

[LC67 Add Binary 二进制数相加](https://github.com/ThreeSR/LeetCode/blob/main/LC67_Add%20Binary_Bit%20Operation.py) 

[LC371 Sum of Two Integers 两个整数相加]() Pending

负数是怎么在加法器中处理的？Pending

不同语言是怎么处理不同进制数的？何时需要进行转换？可以直接非二进制逻辑运算吗？ Pending

### 4.汉明距离的计算  Hamming Distance

什么是汉明距离？    指的是这两个数字的二进制数对应位不同的数量。

如何用位运算实现汉明距离？    首先，对两个数进行异或运算；之后对异或运算结果中1的个数进行统计，使用布莱恩·克尼根算法  [Brian Kernighan Algorithm](https://www.geeksforgeeks.org/count-set-bits-in-an-integer/)。统计结果就是汉明距离。

[LC461 Hamming Distance 汉明距离](https://github.com/ThreeSR/LeetCode/blob/main/LC461_Hamming%20Distance_Bit%20Operation.cpp)  这一题就是汉明距离的模板，因此我不在Markdown文档中独立放置汉明距离的模板。

[LC477 Total Hamming Distance 数组中全部数字的汉明距离之和 C++版](https://github.com/ThreeSR/LeetCode/blob/main/LC477_Total%20Hamming%20Distance_Bit%20Operation.cpp)  这里的C++版，用的思路和Python版不同。一开始，先进行组合（回溯），之后套用[LC461](https://github.com/ThreeSR/LeetCode/blob/main/LC461_Hamming%20Distance_Bit%20Operation.cpp)的模板。这样做可以得到正确答案，但是超时。因此详见[Python版](https://github.com/ThreeSR/LeetCode/blob/main/LC477_Total%20Hamming%20Distance_Bit%20Operation.py)，可以AC。做C++超时版本的目的在于：1.更好地理解回溯就是暴力枚举；2.复习回溯法知识和汉明距离模板。在[Python版](https://github.com/ThreeSR/LeetCode/blob/main/LC477_Total%20Hamming%20Distance_Bit%20Operation.py)中，并没有用到汉明距离公式，思路比较不同。这也告诉我们：有模板固然好，但不能深陷其中。

[LC477 Total Hamming Distance 数组中全部数字的汉明距离之和 Python版](https://github.com/ThreeSR/LeetCode/blob/main/LC477_Total%20Hamming%20Distance_Bit%20Operation.py)  这一版本是将所有数组中的数的同一数位进行并行处理，统计这一数位上0和1的个数，运用乘法原理进行相乘，得到有几种组合方式，也就有多大的汉明距离。

[:point_up_2: Top](#leetcode)
***
## Math

**目前，数学部分已经移到[子文档——Math Theory](https://github.com/ThreeSR/LeetCode/blob/main/Subdocument/Math%20Theory.md)中。**
 
 ### 杨辉三角
 
 ### 快速幂
 
 ### 前缀和
 
 ### 二分法
 
 ### 公因数与公倍数
 
 ### 丑数
 
 ### NP问题
 
 ### 计算几何学
 
[:point_up_2: Top](#leetcode)
***
## Recursion

反中序遍历 

遍历是常用的处理手段。除了遍历自身能出题之外，遍历也可以用在其他题目中，当做题目中数据处理的一部分。比如在二叉搜索树（BST）中，可以用中序遍历把树转换为一个vector，接下来，对这个vector进行处理即可。处理有序vector显然比BST要简单得多。  

[LC538](https://github.com/ThreeSR/LeetCode/blob/main/LC538_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)  本题和 [LC1038](https://github.com/ThreeSR/LeetCode/blob/main/LC1038_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)相同

中序遍历

[LC173 Binary Search Tree Iterator 二叉搜索树迭代器](https://github.com/ThreeSR/LeetCode/blob/main/LC173_Binary%20Search%20Tree%20Iterator_Recursion.cpp)  利用BST的性质进行中序遍历，之后按照题目要求进行迭代器的构造。**本题的代码书写方法值得学习！**

[:point_up_2: Top](#leetcode)
***
## Binary Search 

**[算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/BinarySearch_Algorithm.py)**

二分搜索是非常容易出错的内容，出错原因在于对于处理的目标不够清晰。很多时候，面对二分搜索的题目，我们不能直接套模板，而是根据模板和其思想，有针对性地根据题目进行改动。改动的地方可能很细微，比如一个等号的差别；也可能很大，比如left和right移动的差别。不管如何，写二分搜索的题目，**一定要目标清晰，并且对二分搜索的原理十分清晰**。

**注意：**一般在：1.处理**有序数组**的查找时；2.当时间复杂度要求是**O(logn)** 时，就应该想到要用二分搜索。此外，有时候数组可能无序，可以先进行排序，再进行二分搜索。

大家应该会发现，在二分搜索里面，**旋转排序数组** 是一个很常见的题型。之后会进行总结。

[LC33 Search in Rotated Sorted Array 搜索旋转排序数组 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC33_Search%20in%20Rotated%20Sorted%20Array_Binary%20Search.cpp)  本题比下面的力扣81简单一些，但思路相同。主要不同在于本题没有重复元素，所以少了一些比较tricky的前置操作。建议看[java版代码](https://github.com/ThreeSR/LeetCode/blob/main/LC33_Search%20in%20Rotated%20Sorted%20Array_Binary%20Search.java)，思路更清晰。

[LC81 Search in Rotated Sorted Array II 搜索旋转排序数组 II](https://github.com/ThreeSR/LeetCode/blob/main/LC81_Search%20in%20Rotated%20Sorted%20Array%20II_Binary%20Search.cpp) 首先，去除后端的重复元素；再者，寻找旋转点；最后，对前后两段有序数组分别进行二分搜索。细节很麻烦，详见链接。本题是力扣33的升级版，主要不同在于增加了重复元素。

[LC34 !](https://github.com/ThreeSR/LeetCode/blob/main/LC34_Find%20First%20and%20Last%20Position%20of%20Element%20in%20Sorted%20Array_Binary%20Search.cpp)

[LC35](https://github.com/ThreeSR/LeetCode/blob/main/LC35_Search%20Insert%20Position_Binary%20Search.cpp)

[LC74 Search a 2D Matrix 搜索二维矩阵](https://github.com/ThreeSR/LeetCode/blob/main/LC74_Search%20a%202D%20Matrix_Binary%20Search.cpp)  将矩阵中每一行元素级联在一行，之后运用二分搜索，找到结果。实际操作可以在原地操作。此外，本题还有[模拟法求解](https://github.com/ThreeSR/LeetCode/blob/main/LC74_Search%20a%202D%20Matrix_Naive%20Algorithm.cpp)。详情可见[我的力扣题解](https://leetcode-cn.com/problems/search-a-2d-matrix/solution/ti-yi-lei-jie-yi-wen-dai-ni-wan-cheng-li-tux0/)。

[LC1818_Minimum Absolute Sum Difference_绝对差值和](https://github.com/ThreeSR/LeetCode/blob/main/LC1818_Minimum%20Absolute%20Sum%20Difference_BinarySearch.java) 排序加二分搜索。首先，对题目先进行“数学建模”，知道要找寻什么样的最小值；接着，思考如何找到想要的数值。如果直接找，需要O(n²)。考虑到是中等题目，所以应该降低时间复杂度。可以考虑先排序，再二分搜索。排序算法的复杂度是O(nlogn)，之后的二分搜索是O(logn)，在二分搜索外面应该还要有一层for循环，所以整体来说二分部分是O(nlogn)。整体代码的复杂度也就是O(nlogn)，相比于之前，时间复杂度降低了。

[LC162 Find Peak Element 寻找峰值](https://github.com/ThreeSR/LeetCode/blob/main/LC162_Find%20Peak%20Element_BinarySearch.java)  **本题是非典型的二分搜索，尽管数组是无序的，但不影响搜索结果；当看到时间复杂度的要求是O(logn)时，就应该想到二分搜索。**

**在确定好目标之后，剩下寻找数值的时候。可以考虑二分搜索作为搜索策略。但值得一提的是，二分搜素需要事先排序！所以说，对于未排序的数组使用二分搜索也就是排序+二分搜索的方法。**

***

### 旋转排序数组

**特殊的二分搜索**

一般而言，二分搜索应用于已排序的内容。下面的题目原本是已排序的，但是因为一些人为操作，改变了原本完美的排序，变成了有一定“瑕疵”的排序内容。这时候不用太犹豫，也是可以使用二分搜索的。

[LC153 Find Minimum in Rotated Sorted Array 寻找旋转排序数组中的最小值 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC153_Find%20Minimum%20in%20Rotated%20Sorted%20Array_Binary%20Search.cpp)  本题直接二分搜索即可，不难。不要因为排序数组被节点切断，而犹豫是否要用二分搜索。事实证明，二分搜索是可行的。使用搜索的时候，注意数组的性质即可。[C语言版代码](https://github.com/ThreeSR/LeetCode/blob/main/LC153_Find%20Minimum%20in%20Rotated%20Sorted%20Array_Binary%20Search.c)。详情也可以参见[我的力扣题解](https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array/solution/tu-jie-er-fen-sou-suo-wu-zhang-tu-yi-dao-rtf5/)

[**LC154 旋转数组的最小数字**](https://github.com/ThreeSR/LeetCode/blob/main/LC154_Find%20Minimum%20in%20Rotated%20Sorted%20Array%20II_Binary%20Search.cpp)  本题是**非典型**的二分搜索，前面说到，一般二分搜索需要是排列好的数组。但这里是基于排列好的数组下，对数组某一个位置进行了截断并移动（详见题目）。这样一来，不满足有序数组的条件。但这样的变化很特殊，经过分类讨论，依然可以得出可以使用二分搜索的结论。这是一道非典型的二分搜索题目，很值得写的题目。此外，在剑指offer中，有一道题和这题一样，可以顺便一起写掉。

剑指offer：[剑指Offer_11_旋转数组的最小数字](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_11_%E6%97%8B%E8%BD%AC%E6%95%B0%E7%BB%84%E7%9A%84%E6%9C%80%E5%B0%8F%E6%95%B0%E5%AD%97_Binary%20Search.cpp)

**注意，虽然这三道题和前面的两道旋转排序数组相似，但是二分处理的手法却不相同。这就是所谓的模板相通，但是我们需要根据题目的变动改变自己的代码和自己的思想。但本质是不变的。**

***

[:point_up_2: Top](#leetcode)
***

## Sort

排序是非常重要的内容，很值得学习。一般来说，我们经常遇到的是十种排序，也可以叫做**十大排序**，如下图所示：

[<img width="800" height="600" src="https://img2018.cnblogs.com/blog/849589/201903/849589-20190306165258970-1789860540.png"/>](https://img2018.cnblogs.com/blog/849589/201903/849589-20190306165258970-1789860540.png "十大排序")

**注意：有关排序的内容，已经移到[子文档——排序](https://github.com/ThreeSR/LeetCode/blob/main/Subdocument/Sort.md)之中。相关内容需要在该文档中查看。**

### 比较类排序

#### 交换排序

##### 冒泡排序

##### 快速排序

#### 插入排序

##### 简单插入排序

##### 希尔排序

#### 选择排序

##### 简单选择排序

##### 堆排序 

#### 归并排序

##### 二路归并排序 

##### 多路归并排序

### 非比较排序

#### 计数排序

#### 基数排序

#### 桶排序 

[:point_up_2: Top](#leetcode)
***
## Backtracking  

### [回溯法模板](https://mp.weixin.qq.com/s/gjSgJbNbd1eAA5WkA-HeWw)  

总的来说，回溯法做的事情就是暴力枚举，只不过我们通过回溯这种写法，让暴力枚举的这个过程“优美”了一些。（可能这就是“暴力美学”吧）那么会有什么问题涉及到“暴力美学”呢？

目前，该部分的内容已经转移到[子文档——Backtracking](https://github.com/ThreeSR/LeetCode/blob/main/Subdocument/Backtracking.md)之中。

### 组合问题

### 子集问题

### 排列问题

### 比较难的应用问题

[:point_up_2: Top](#leetcode)
***
## Greedy Algorithm

[LC452 Minimum Number of Arrows to Burst Balloons 用最少的箭戳破气球](https://github.com/ThreeSR/LeetCode/blob/main/LC452_Minimum%20Number%20of%20Arrows%20to%20Burst%20Balloons_Greedy%20Algorithm.cpp)

[LC56 合并区间](https://github.com/ThreeSR/LeetCode/blob/main/LC56_Merge%20Intervals_Greedy%20Algorithm.cpp)  本题在方法上和[LC452 用最少的箭戳破气球](https://github.com/ThreeSR/LeetCode/blob/main/LC452_Minimum%20Number%20of%20Arrows%20to%20Burst%20Balloons_Greedy%20Algorithm.cpp)有相似之处，都要处理区间的重叠。

[LC435 Non-overlapping Intervals 无覆盖的区间](https://github.com/ThreeSR/LeetCode/blob/main/LC435_Non-overlapping%20Intervals_Greedy%20Algorithm.cpp)  这题在方法上和上面两道题有相似之处，可以类比。在解题思路上，从对立面入手，简化过程。

[LC738 Monotone Increasing Digits 单调递增数字](https://github.com/ThreeSR/LeetCode/blob/main/LC738_Monotone%20Increasing%20Digits_Greedy%20Algorithm.cpp)  **字符串到整数的处理**；赋值的时候，**小心数组的数据类型**；多考虑特例。

[LC605 Can Place Flowers 种花问题](https://github.com/ThreeSR/LeetCode/blob/main/LC605_Can%20Place%20Flowers_Greedy%20Algorithm.cpp)  这题是2021年1月1日的每日一题。在新的一年，种下一颗种子，辛勤浇水施肥，静待开花结果。本题找到题目中种花必须间隔的硬性要求，并利用，不难求解。

[LC781 Rabbits in Forest 森林中的兔子](https://github.com/ThreeSR/LeetCode/blob/main/LC781_Rabbits%20in%20Forest_Greedy%20Algorithm.cpp)  首先，用一个哈希表记录每个数字出现的次数；再者，有x只兔子都回答y，则至少有 向上取整（x / （y + 1）） 种不同的颜色，且每种颜色有y+1只兔子，因此兔子数至少为 向上取整的数值乘以（y + 1）。

有一些用法需要学习：
+ `for (auto &[y, x] : count) {`
+ `ans += (x + y) / (y + 1) * (y + 1); // 这是向上取整的意思，需要记住！`

关于为什么上式是向上取整？首先要明白，C++中`/`整数除法代表向下取整。所以为了`/`有向上取整的效果，需要在`x / y`的基础上，变成`(x + y - 1) / y`的形式。为什么不是`(x + y) / y`的形式？是因为防止意外情况，比如`5 / 5`向上取整，就要是`(5 + 5 - 1) / 5 = 9 / 5 = 1`，否则变成`2`。

总结：要记住 **(x + y - 1) / y 是 x / y 向上取整的形式！！** 这种形式改变的是结果，`/`除法运算本身对于整数依然是向下取整的！

[:point_up_2: Top](#leetcode)
***
## Dynamic Programming DP

目前，动态规划的内容已经移到[子文档](https://github.com/ThreeSR/LeetCode/blob/main/Subdocument/Dynamic%20Programming.md)之中。

### 动态规划的一般问题

[:point_up_2: Top](#leetcode)
***
### 背包问题

####  1.0-1背包问题

0-1背包问题的学习可以参考这两篇文章：

+ [动态规划：关于01背包问题，你该了解这些！](https://mp.weixin.qq.com/s/FwIiPPmR18_AJO5eiidT6w) 
+ [动态规划：关于01背包问题，你该了解这些！（滚动数组）](https://mp.weixin.qq.com/s/M4uHxNVKRKm5HPjkNZBnFA)

我把文章中的模板放在下面,分别对应二维和一维背包问题：

```C++
void 2D_BagProblem() {
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bagWeight = 4;

    // 二维数组
    vector<vector<int>> dp(weight.size() + 1, vector<int>(bagWeight + 1, 0));

    // 初始化 
    for (int j = bagWeight; j >= weight[0]; j--) { // 注意，这里需要倒序赋值，不然value会被重复添加。
        dp[0][j] = dp[0][j - weight[0]] + value[0];
    }

    // weight数组的大小 就是物品个数
    for(int i = 1; i < weight.size(); i++) { // 遍历物品
        for(int j = 0; j <= bagWeight; j++) { // 遍历背包容量
            if (j < weight[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);

        }
    }

    cout << dp[weight.size() - 1][bagWeight] << endl;
}

int main() {
    2D_BagProblem();
}

```

```C++
void 1D_BagProblem() {
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bagWeight = 4;

    // 初始化
    vector<int> dp(bagWeight + 1, 0);
    for(int i = 0; i < weight.size(); i++) { // 遍历物品
        for(int j = bagWeight; j >= weight[i]; j--) { // 遍历背包容量
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    cout << dp[bagWeight] << endl;
}

int main() {
    1D_BagProblem();
}
```

关于上述代码的详细解释，见上面的两篇文章。非常感谢微信公众号：代码随想录。

[:point_up_2: Top](#leetcode)

####  2.完全背包问题

基本内容：[动态规划：关于完全背包，你该了解这些！](https://mp.weixin.qq.com/s?__biz=MzUxNjY5NTYxNA==&mid=2247486748&idx=1&sn=dca9f65b75a75c50c502ae8aba279877&chksm=f9a23e4dced5b75b6a2d7cac3534c23124717b06fe3e4a67f52099300fb329e466932232645f&cur_album_id=1485825793120387074&scene=189#rd)

代码模板：
```C++
// 先遍历物品，在遍历背包
void test_CompletePack() {
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bagWeight = 4;
    vector<int> dp(bagWeight + 1, 0);
    for(int i = 0; i < weight.size(); i++) { // 遍历物品
        for(int j = weight[i]; j <= bagWeight; j++) { // 遍历背包容量
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    cout << dp[bagWeight] << endl;
}
int main() {
    test_CompletePack();
}
```

```C++
// 先遍历背包，再遍历物品
void test_CompletePack() {
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bagWeight = 4;

    vector<int> dp(bagWeight + 1, 0);

    for(int j = 0; j <= bagWeight; j++) { // 遍历背包容量
        for(int i = 0; i < weight.size(); i++) { // 遍历物品
            if (j - weight[i] >= 0) dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    cout << dp[bagWeight] << endl;
}
int main() {
    test_CompletePack();
}
```

上面的两个模板改变了for循环的顺序，在完全背包问题中，for循环顺序**可以交换**。这一点不同于0-1背包。

但是也要注意：**模板对应的是一般情况下的完全背包问题，所以在完全背包中，大部分情况可以交换for循环位置，也有不能交换的时候！**

#### 3.动态规划下的排列组合问题

关于排列组合问题，其实并不陌生。在回溯法就已经学过。但力扣中有那么一种排列组合问题，**它不需要把每一个结果都枚举出来，它只需要返回结果的个数**。遇到这种题，用DP即可。

我们要明白，回溯的好处是暴力枚举，可以把所有结果都完整呈现出来，但是缺点是浪费时间。如果一些题目不需要那么完整的结果，我们就不应该用回溯去浪费时间。遇到能用DP解决的问题就用DP，不然很可能超时。使用回溯其实是一种不得已的办法。

模板
```C++
// pending
```

[:point_up_2: Top](#leetcode)
***
## Double Pointer

[剑指Offer_57_和为s的两个数字](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_57_%E5%92%8C%E4%B8%BAs%E7%9A%84%E4%B8%A4%E4%B8%AA%E6%95%B0%E5%AD%97_Double%20Pointer.py)  充分利用原数组的自增条件，进行加数的合理寻找。本题有点像二分查找，但不需要二分查找。其实二分查找也是左右两个指针进行移动。广义上说，二分搜索也是双指针法的应用，但比较特殊并且自身应用面很广，因此可以独立作为一个类型。

[LC21 Merge Two Sorted Lists 合并两个有序链表](https://github.com/ThreeSR/LeetCode/blob/main/LC21_Merge%20Two%20Sorted%20Lists_Double%20Pointer.py)  运用双指针，把元素从小到大放进新的链表中。 **当一个链表结束了，此时可以直接把另一个链表的剩余部分接进结果中。**   本题和[剑指offer25 Merge Two Sorted Lists](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87offer_25_Merge%20Two%20Sorted%20Lists_Double%20Pointer.py)相同。     详情可见[我的力扣题解](https://leetcode-cn.com/problems/merge-sorted-array/solution/ji-shuang-qing-xi-yi-dong-yi-chong-si-xi-d51i/)

[LC26 Remove Duplicates from Sorted Array 移除排序数组中的重复元素 Java代码](https://github.com/ThreeSR/LeetCode/blob/main/LC26_Remove%20Duplicates%20from%20Sorted%20Array_Double%20Pointer.java)  用双指针进行前后两个元素判别，剔除重复元素。详见[我的力扣题解](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/solution/ju-yi-fan-er-lei-xing-ti-mu-de-tong-jie-az96x/)

[剑指Offer22 链表中倒数第k个节点](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_22_%E9%93%BE%E8%A1%A8%E4%B8%AD%E5%80%92%E6%95%B0%E7%AC%ACk%E4%B8%AA%E8%8A%82%E7%82%B9_Double%20Pointer.cpp)  双指针中的快慢指针，一个指针先走k步，之后另外一个指针跟着走。等到快指针到末尾，慢指针就是指向倒数第K个元素。

这种**快慢指针**的题目是双指针法常见题型。一般来说，快慢指针分为两种：

1.一个指针先抢跑，另外一个指针过一段时间再追。具体就是本题。

2.两个指针同时起跑，一个的速度是另一个的两倍。这种情况会跟[弗洛伊德判圈算法（Floyd Cycle Detection Algorithm）](https://zh.wikipedia.org/wiki/Floyd%E5%88%A4%E5%9C%88%E7%AE%97%E6%B3%95)一起考察。比如[LC142 Linked List Cycle II](https://github.com/ThreeSR/LeetCode/blob/main/LC142_Linked%20List%20Cycle%20II_Double%20Pointer.cpp)。

所以你会发现，双指针法在解决链表的问题上有比较好的表现。在处理链表的时候，我们没办法像处理数组那样遍历、查找。有的时候会有些干着急。双指针法为我们处理链表问题提供了比较好的工具。

[LC61 Rotate List 旋转链表](https://github.com/ThreeSR/LeetCode/blob/main/LC61_Rotate%20List_Double%20Pointer.cpp)  简单来说，就是先让链表成环，然后把要移动的节点当作头结点，之后断开头结点前面的链接，从环再次变回链表。这时候就是结果。图解在Solution中，一目了然。[图一](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC61_Ans1.png) || [图二](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC61_Ans2.png)。也可以参见[我的力扣题解](https://leetcode-cn.com/problems/rotate-list/solution/shuang-zhi-zhen-fa-xiao-guo-hen-hao-si-l-3bd8/)

[LC88 Merge Sorted Array 合并两个有序数组](https://github.com/ThreeSR/LeetCode/blob/main/LC88_Merge%20Sorted%20Array_Double%20Pointer.py)  合并有序内容的题目，都可以设置双指针求解。类似的题目还有[LC21 Merge Two Sorted Lists 合并两个有序链表](https://github.com/ThreeSR/LeetCode/blob/main/LC21_Merge%20Two%20Sorted%20Lists_Double%20Pointer.py)。**值得小心的是：当一个链表或者数组中还有剩余元素时，要记得把它们也加进结果中，不要忘了！**    详情可见[我的力扣题解](https://leetcode-cn.com/problems/merge-sorted-array/solution/ji-shuang-qing-xi-yi-dong-yi-chong-si-xi-d51i/)

[剑指Offer 21 调整数组顺序使奇数位于偶数前面](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_21_%E8%B0%83%E6%95%B4%E6%95%B0%E7%BB%84%E9%A1%BA%E5%BA%8F%E4%BD%BF%E5%A5%87%E6%95%B0%E4%BD%8D%E4%BA%8E%E5%81%B6%E6%95%B0%E5%89%8D%E9%9D%A2_Double%20Pointer.cpp)  首尾指针

[程序员面试金典17.21_直方图的水量 C++](https://github.com/ThreeSR/LeetCode/blob/main/%E7%A8%8B%E5%BA%8F%E5%91%98%E9%9D%A2%E8%AF%95%E9%87%91%E5%85%B817.21_%E7%9B%B4%E6%96%B9%E5%9B%BE%E7%9A%84%E6%B0%B4%E9%87%8F_Double%20Pointer.cpp)  本题和[LC42接雨水](https://github.com/ThreeSR/LeetCode/blob/main/LC42_Trapping%20Rain%20Water%20I_Double%20Pointer.py)相同，详情可以[参考我的力扣题解](https://leetcode-cn.com/problems/volume-of-histogram-lcci/solution/shuang-zhi-zhen-an-xing-qiu-jie-xiang-xi-d162/)

除了C++代码，还有：[C代码](https://github.com/ThreeSR/LeetCode/blob/main/%E7%A8%8B%E5%BA%8F%E5%91%98%E9%9D%A2%E8%AF%95%E9%87%91%E5%85%B817.21_%E7%9B%B4%E6%96%B9%E5%9B%BE%E7%9A%84%E6%B0%B4%E9%87%8F_Double%20Pointer.c)；[Java代码](https://github.com/ThreeSR/LeetCode/blob/main/%E7%A8%8B%E5%BA%8F%E5%91%98%E9%9D%A2%E8%AF%95%E9%87%91%E5%85%B817.21_%E7%9B%B4%E6%96%B9%E5%9B%BE%E7%9A%84%E6%B0%B4%E9%87%8F_Double%20Pointer.java)；[Python代码](https://github.com/ThreeSR/LeetCode/blob/main/%E7%A8%8B%E5%BA%8F%E5%91%98%E9%9D%A2%E8%AF%95%E9%87%91%E5%85%B817.21_%E7%9B%B4%E6%96%B9%E5%9B%BE%E7%9A%84%E6%B0%B4%E9%87%8F_Double%20Pointer.py)。

[LC42 Trapping Rain Water I 接雨水 I](https://github.com/ThreeSR/LeetCode/blob/main/LC42_Trapping%20Rain%20Water%20I_Double%20Pointer.py)  本题使用双指针法，逐层处理。详情可以参考[我的力扣题解](https://leetcode-cn.com/problems/volume-of-histogram-lcci/solution/shuang-zhi-zhen-an-xing-qiu-jie-xiang-xi-d162/)

[LC80 Remove Duplicates from Sorted Array II 删除有序数组中的重复项 II](https://github.com/ThreeSR/LeetCode/blob/main/LC80_Remove%20Duplicates%20from%20Sorted%20Array%20II_Double%20Pointer.cpp)  本题可以设置快慢指针，删去多余元素，保留需要的即可。最终返回需要的数值的数量。

这道题目可以拓展，首先，基于一般的双指针，可以进行抽象，变成[类似于脑筋急转弯的形式](https://github.com/ThreeSR/LeetCode/blob/main/LC80_Remove%20Duplicates%20from%20Sorted%20Array%20II_Brain%20Teaser.cpp)，内容更加精简高效；再者，比如数组中的元素不能超过一个，即[LC26 Remove Duplicates from Sorted Array 删除有序数组中的重复项](https://github.com/ThreeSR/LeetCode/blob/main/LC26_Remove%20Duplicates%20from%20Sorted%20Array_Double%20Pointer.cpp)，那么基于上面的代码，修改一下代码的一小部分即可，这部分的拓展详见[我的力扣题解](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/ju-yi-fan-er-ni-zhen-de-zhen-de-zhi-de-x-eicz/)；除了这种抽象后的双指针，也可以使用一般方法解决[力扣26（java语言）](https://github.com/ThreeSR/LeetCode/blob/main/LC26_Remove%20Duplicates%20from%20Sorted%20Array_Double%20Pointer.java)

[LC27 Remove Element 移除元素](https://github.com/ThreeSR/LeetCode/blob/main/LC27_Remove%20Element_Double%20Pointer.cpp)  本题和上面的力扣80，力扣26都很相似，直接模拟，使用双指针把要剔除的数值剔除就好，其他的正常保留。最终也是返回修改后数组的长度。

[LC611 Valid Triangle Number 有效三角形的个数 C++代码](https://github.com/ThreeSR/LeetCode/blob/main/LC611_Valid%20Triangle%20Number_Double%20Pointer.cpp) 宗旨是三角形的两边之和大于第三边。针对于不等式的题目，应该先考虑排序。在排序之后，限定好范围。使用双指针，得到满足条件的三角形个数。方法比较实用巧妙。[LC611 Valid Triangle Number 有效三角形的个数 Java代码](https://github.com/ThreeSR/LeetCode/blob/main/LC611_Valid%20Triangle%20Number_Double%20Pointer.java)

[LC941 Valid Mountain Array 有效的山脉数组](https://github.com/ThreeSR/LeetCode/blob/main/LC941_Valid%20Mountain%20Array_Double%20Pointer.cpp) 典型的双指针应用，注意数组的边界问题！

### Sliding Window

#### 模板
```C++
// Pending
```

[LC643 Maximum Average Subarray I 子数组最大平均数 I](https://github.com/ThreeSR/LeetCode/blob/main/LC643_Maximum%20Average%20Subarray%20I_Sliding%20Window.cpp)  滑动窗口，维护两个指针和内部的和值。**注意：C++的[强制类型转换](http://c.biancheng.net/cpp/biancheng/view/3297.html)。** 基本用法：static_cast<double>(Sum);

[LC424 Longest Repeating Character Replacement 替换后的最长重复子串](https://github.com/ThreeSR/LeetCode/blob/main/LC424_Longest%20Repeating%20Character%20Replacement_Double%20Pointer.cpp)  用一个数组计算各个单词的频次，之后维护两个指针进行移动。数组起到了哈希表的作用。**注意：这里有一个问题：为什么不能用int num[26]? int num[26]和vector<int> 定义数组的区别。**  相关问题见[链接](https://leetcode-cn.com/problems/longest-repeating-character-replacement/solution/ti-huan-hou-de-zui-chang-zhong-fu-zi-fu-n6aza/773269/)
     
[LC1208 Get Equal Substrings Within Budget 尽可能使字符串相等](https://github.com/ThreeSR/LeetCode/blob/main/LC1208_Get%20Equal%20Substrings%20Within%20Budget_Sliding%20Window.cpp)  **经典的滑动窗口题型**。1.右指针放进for循环移动；2.字母的ASCII码运算（直接运算）；3.（*highlight*）**最大长度不用保存维护**，到最后直接输出即可。

[LC1423 Maximum Points You Can Obtain from Cards 可获得的最大点数](https://github.com/ThreeSR/LeetCode/blob/main/LC1423_Maximum%20Points%20You%20Can%20Obtain%20from%20Cards_Sliding%20Window.cpp) 本题有点脑筋急转弯，需要**逆向思维**。运用滑窗求得固定窗口下的最小值，之后用全部元素和值减去最小值就是可获得的最大点数。

[LC1052 Grumpy Bookstore Owner 爱生气的书店老板](https://github.com/ThreeSR/LeetCode/blob/main/LC1052_Grumpy%20Bookstore%20Owner_Sliding%20Window.cpp)  分类计算，分成使用技能之前客户满意数加上使用技能之后的个数。详细内容可见[我的力扣题解](https://leetcode-cn.com/problems/grumpy-bookstore-owner/solution/xiang-yao-zhi-fu-ni-jiu-bu-neng-lao-shen-eep0/)。

[LC995 Minimum Number of K Consecutive Bit Flips K连续位的最小翻转次数](https://github.com/ThreeSR/LeetCode/blob/main/LC995_Minimum%20Number%20of%20K%20Consecutive%20Bit%20Flips_Sliding%20Window.cpp)  判断条件与分类讨论的转换十分巧妙，队列元素的维护也值得学习。详解见：[LC995_Ans](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC995.jpg)

[LC1004 Max Consecutive Ones III 最大连续1的个数 III](https://github.com/ThreeSR/LeetCode/blob/main/LC1004_Max%20Consecutive%20Ones%20III_Sliding%20Window.cpp) 滑动窗口的应用，记录可以转变的个数，维护最大值即可。思路见[截图](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC1004_Ans.jpg)。

[]()

[:point_up_2: Top](#leetcode)
***
## Graph Theory

**目前，图论部分已经移到[子文档——Graph Theory](https://github.com/ThreeSR/LeetCode/blob/main/Subdocument/Graph%20Theory.md)中。**

图是一种**非常重要**的数据结构，它很复杂。关于它的表达和常用的一些方法，后续更新。

[LC133 Clone Graph 克隆图](https://github.com/ThreeSR/LeetCode/blob/main/LC133_Clone%20Graph_BFS.cpp)  很有意义的一道题，涉及到计算机中**浅拷贝和深拷贝的概念**，值得学习。有趣的是，在Python中，*一句话*就可以把这道题搞定：[Pyhton代码](https://github.com/ThreeSR/LeetCode/blob/main/LC133_Clone%20Graph_Graph.py)。

### Topological Sorting

拓扑排序相关知识: 1.[简书](https://www.jianshu.com/p/b59db381561a)；2.[维基百科](https://en.wikipedia.org/wiki/Topological_sorting)。

> 1.什么是拓扑排序？
在图论中，拓扑排序（Topological Sorting）是一个有向无环图（DAG, Directed Acyclic Graph）的所有顶点的线性序列。且该序列必须满足下面两个条件：
每个顶点出现且只出现一次。
若存在一条从顶点 A 到顶点 B 的路径，那么在序列中顶点 A 出现在顶点 B 的前面。
有向无环图（DAG）才有拓扑排序，非DAG图没有拓扑排序一说。
所以，这里选课程显然是一个拓扑排序的过程。具体见链接：[简书](https://www.jianshu.com/p/b59db381561a)

>2.什么是入度和出度？
如果存在一条有向边 A --> B，则这条边给 A 增加了 1 个出度，给 B 增加了 1 个入度。

[LC207 Course Schedule 课程表](https://github.com/ThreeSR/LeetCode/blob/main/LC207_Course%20Schedule_BFS.cpp)  典型的拓扑排序，值得学习。

[LC210 Course Schedule II 课程表II](https://github.com/ThreeSR/LeetCode/blob/main/LC210_Course%20Schedule%20II_BFS.cpp)  本题和LC207很接近，只是最后要输出一个可行解而不是进行bool判断。因此，我们加一个result，把最终结果给出就好。**注意：无的时候return一个花括号，代表空数组。**

### Disjoint Set  

#### [相关原理](https://blog.csdn.net/liujian20150808/article/details/50848646)(这是我见过的最有趣的CSDN博客)

**我写的[关于并查集的CSDN博文](https://blog.csdn.net/Three3333333/article/details/112393251)。**

并查集是图论中的一种重要方法，也是一种高级的数据结构，掌握它非常有必要。

> 关于并查集的英文名称：In computer science, a disjoint-set data structure, also called a union–find data structure or merge–find set, is a data structure that stores a collection of disjoint (non-overlapping) sets.（摘自[维基百科](https://en.wikipedia.org/wiki/Disjoint-set_data_structure)） 因此，在这里，因为一开始接触到的英文名是disjoint set，所以我将关于并查集的代码都用disjoint set当作后缀。其实更多人更习惯称其为union find set。

下面是并查集的模板，在[我的GitHub](https://github.com/ThreeSR/Data-Structure/blob/master/Disjoint%20Set%20Template.cpp)中可以找到C++代码。这个模板需要根据不同的题目进行改动，但万变不离其宗。

```C++
// 并查集模板
class DisjointSet {
    private:
        int[maxNum] father; // maxNum根据题目要求来设定，比如LC547省份数量，maxNum设置为210即可。
    public:
        void init(int n) { // initialize disjoint set
            for (int i = 0; i < n; i++) {
                father[i] = i;
            }
        }
        // find函数有两种写法
        // 写法一
        int find(int x) {
            int root = x;
            while (root != father[root]) { // 寻根
                root = father[root];
            }
            int originalFather;
            while (x != root) {  // 路径压缩
                originalFather = father[x];
                father[x] = root;
                x = originalFather;
            }
        }
        // 写法二
        int find(int x) {
            return x == father[x] ? x : father[x] = find(father[x]);  // 代码简洁，并且已经有路径压缩包含其中。
        }
        // union的写法
        void union2(int x, int y) { // 这里取名为union2的原因是，union是C++中的一个关键字，以示不同。也可以取名为merge或者join
            int rootX = find(x);
            int rootY = find(y);
            if (rootX != rootY) {
                father[rootX] = rootY; // 合并
            }
        }
        bool same(int x, int y) {
            return find(x) == find(y); // 判断两个元素是不是来自于同一个集合
        }
};
int main() {
    DisjointSet UnionFind;
    int n = ... // 根据题目要求得到
    UnionFind.init(n); // n的来源是题目的内容，对并查集进行初始化
    // 之后根据题目要求进行相应处理即可
}
```

[:point_up_2: Top](#leetcode)

### Minimum Spanning Trees MST

### Shortest Path

### Network Flow

### Probabilistic Graphical Model

**概率图模型 PGM**

### PageRank算法介绍

[:point_up_2: Top](#leetcode)
***
## Brain Teaser

**脑筋急转弯**

力扣中有这么一类题，它们很需要思维转弯，但不是很依赖于数据结构或特定的算法。这就是脑筋急转弯的题型。偶尔做一做，锻炼锻炼思维也是很好的。

[LC189 Rotate Array 旋转数组](https://github.com/ThreeSR/LeetCode/blob/main/LC189_Rotate%20Array_Brain%20Teaser.cpp)

[LC448 Find All Numbers Disappeared in an Array 找到所有数组中消失的数字 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC448_Find%20All%20Numbers%20Disappeared%20in%20an%20Array_Brain%20Teaser.cpp)

[LC448 Find All Numbers Disappeared in an Array 找到所有数组中消失的数字 Java](https://github.com/ThreeSR/LeetCode/blob/main/LC448_Find%20All%20Numbers%20Disappeared%20in%20an%20Array_Brain%20Teaser.java)

[LC561 Array Partition I 数组拆分 I C++](https://github.com/ThreeSR/LeetCode/blob/main/LC561_Array%20Partition%20I_Brain%20Teaser.cpp)

[LC561 Array Partition I 数组拆分 I Python](https://github.com/ThreeSR/LeetCode/blob/main/LC561_Array%20Partition%20I_Brain%20Teaser.py)

关于LC561的题解，详见[我写的力扣题解](https://leetcode-cn.com/problems/array-partition-i/solution/shua-ti-qi-shi-ye-bu-yi-ding-xu-yao-fu-z-yybe/)。

[LC331 Verify Preorder Serialization of a Binary Tree 验证二叉树的前序序列化 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC331_Verify%20Preorder%20Serialization%20of%20a%20Binary%20Tree_Brain%20Teaser.py)  善于发现前序遍历和题目中对于数据结构的格式之间的规律

[LC80 Remove Duplicates from Sorted Array II 删除排序数组中的重复项 II](https://github.com/ThreeSR/LeetCode/blob/main/LC80_Remove%20Duplicates%20from%20Sorted%20Array%20II_Brain%20Teaser.cpp)  本题是**“原地改动”数组的模范题目**，还有其他的“原地”修改的题目和本题思路相似，都是直接在原数组上进行更新，但前面更新之后的内容不会影响到后面正在进行的操作。需要掌握这种思想。其实，**这是一种抽象化的双指针法**，详见[我的力扣题解](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/ju-yi-fan-er-ni-zhen-de-zhen-de-zhi-de-x-eicz/)（和本题相似的还有[力扣26](https://github.com/ThreeSR/LeetCode/blob/main/LC26_Remove%20Duplicates%20from%20Sorted%20Array_Double%20Pointer.cpp)。）

[LC319 Bulb Switcher 灯泡开关](https://github.com/ThreeSR/LeetCode/blob/main/LC319_Bulb%20Switcher_Brain%20Teaser.cpp) **本题非常简洁**，很棒的思路！！

[:point_up_2: Top](#leetcode)
***
## 模拟法

什么是模拟法?

模拟法就是模拟题目中的要求，一步步完成。简单来说就是用最直观的方法解题，思考过程中可能没有涉及比较高深的数据结构知识，就是运用最基础的知识平平淡淡地解答。

***
### 螺旋矩阵

螺旋矩阵类的问题算是模拟法的经典题型，这类题一共包含三道题。它之所以重要，是因为螺旋矩阵的考察很基础，很考验一个人的编程基本功。在面试的时候，是有可能遇到这类题型的。

按照难度递增的顺序，应该先写螺旋矩阵II，再是I，最后是III。

[LC59 Spiral Matrix II 螺旋矩阵II Python](https://github.com/ThreeSR/LeetCode/blob/main/LC59_Spiral%20Matrix%20II_Naive%20Algorithm.py)  本题是把生成好的数字从矩阵中按照螺旋的顺序读取出来。只要控制好上下左右移动的变化，就可以很简单地写出答案。

[LC54 Spiral Matrix 螺旋矩阵 Java](https://github.com/ThreeSR/LeetCode/blob/main/LC54_Spiral%20Matrix_Naive%20Algorithm.java)  本题和上面的LC59很类似，不同在于：要从二维数组中读取矩阵中的数值，这里的数值不是按照规律给好的，是随机乱序的，这一点和LC59不同。除了这一点，本题也是把矩阵中的元素按照螺旋的顺序输出，控制好边界即可。其实你会发现，如果你先写了本题，上面的LC59也会迎刃而解，相当于一举两得。类型题的好处就在这里。

注：[剑指Offer_29 顺时针打印矩阵](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_29_%E9%A1%BA%E6%97%B6%E9%92%88%E6%89%93%E5%8D%B0%E7%9F%A9%E9%98%B5_Naive%20Algorithm.py)和本题相同。
 
[LC885 Spiral Matrix III 螺旋矩阵III](https://github.com/ThreeSR/LeetCode/blob/main/LC885_Spiral%20Matrix%20III_Naive%20Algorithm.py)  本题和上面两道的差异会大一些。~~这一点从题号上面也可以看得出。~~ 主要的差异在于：本题需要一些trick，没有那么naive。在螺旋移动的过程中，需要找寻其中的规律，之后写成代码解题。难点在于：1.如何在会移动出边界的情况下进行移动的模拟？ 2.如何较好地把规律总结成代码进行模拟？ 具体见代码中的内容。
***
### 搜索二维矩阵

[LC74 Search a 2D Matrix 搜索二维矩阵](https://github.com/ThreeSR/LeetCode/blob/main/LC74_Search%20a%202D%20Matrix_Naive%20Algorithm.cpp)  本题可以使用暴力法直接AC，但不提倡。可以考虑以右上角元素或左下角元素为标度，进行target与各个矩阵中元素的大小比较。向左或向下移动（针对于右上角而言），找到目标。

[LC240 Search a 2D Matrix II 搜索二维矩阵 II](https://github.com/ThreeSR/LeetCode/blob/main/LC240_Search%20a%202D%20Matrix%20II_Naive%20Algorithm.cpp)  本题思路和LC74一样。

此外，[力扣74还有二分法的解题思路](https://github.com/ThreeSR/LeetCode/blob/main/LC74_Search%20a%202D%20Matrix_Binary%20Search.cpp)。

详情可以关注[我的力扣题解](https://leetcode-cn.com/problems/search-a-2d-matrix/solution/ti-yi-lei-jie-yi-wen-dai-ni-wan-cheng-li-tux0/)
***
[LC485 Max Consecutive Ones 最大连续1的个数 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC485_Max%20Consecutive%20Ones_Naive%20Algorithm.cpp) 相关内容见[我的力扣题解](https://leetcode-cn.com/problems/max-consecutive-ones/solution/yi-ci-forxun-huan-pythoncjian-dan-fang-b-hpbd/)；Python版代码：
[LC485 Max Consecutive Ones 最大连续1的个数 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC485_Max%20Consecutive%20Ones_Naive%20Algorithm.py)

[LC566 Reshape the Matrix 重塑矩阵](https://github.com/ThreeSR/LeetCode/blob/main/LC566_Reshape%20the%20Matrix_Naive%20Algorithm.cpp) reshape原本的矩阵，按照顺序填入数字即可。

[LC674 Longest Continuous Increasing Subsequence 最长连续递增子序列](https://github.com/ThreeSR/LeetCode/blob/main/LC674_Longest%20Continuous%20Increasing%20Subsequence_Naive%20Algorithm.py)

[LC665 Non-decreasing Array 非递减数列](https://github.com/ThreeSR/LeetCode/blob/main/LC665_Non-decreasing%20Array_Naive%20Algorithm.cpp) 小心非递减序列的判断，需要分类讨论；题目虽简单，但是容易错；判断递增的函数is_sorted(nums.begin(), nums.end());的使用。

[LC766 Toeplitz Matrix 托普利茨矩阵](https://github.com/ThreeSR/LeetCode/blob/main/LC766_Toeplitz%20Matrix_Naive%20Algorithm.cpp) 模拟法，找到元素间的对应关系，保证本位置元素和右下角的元素相等即可。

[LC896 Monotonic Array 单调数组](https://github.com/ThreeSR/LeetCode/blob/main/LC896_Monotonic%20Array_Naive%20Algorithm.cpp) 关注单调递增和单调递减的两种情况，最后进行或运算。
除了上述解法，还可以直接调用函数：is_sorted(A.begin(), A.end()) || is_sorted(A.rbegin(), A.rend()); 进行操作，对数组的单调性进行判断。注意迭代器中：rbegin(), rend()的用法。[LC896 Monotonic Array 单调数组 解法二](https://github.com/ThreeSR/LeetCode/blob/main/LC896_Monotonic%20Array%20(API)_Naive%20Algorithm.cpp)

[LC1603 Design Parking System 设计停车系统](https://github.com/ThreeSR/LeetCode/blob/main/LC1603_Design%20Parking%20System_Naive%20Algorithm.cpp)  本题使用简单的模拟法即可求解，相当于是一道C++ Class使用的模板题。

[LC73 Set Matrix Zeroes 矩阵置零](https://github.com/ThreeSR/LeetCode/blob/main/LC73_Set%20Matrix%20Zeroes_Naive%20Algorithm.cpp)  先记录零的位置，再对相应行或者列进行置零即可。

[LC1486 XOR Operation in an Array 数组异或操作](https://github.com/ThreeSR/LeetCode/blob/main/LC1486_XOR%20Operation%20in%20an%20Array_Naive%20Algorithm.cpp) 直接模拟即可，详见[我的力扣题解](https://leetcode-cn.com/problems/xor-operation-in-an-array/solution/yi-huo-yun-suan-zhi-jie-mo-ni-ji-ke-dan-1849u/)
                                  
[LC1337 The K Weakest Rows in a Matrix 矩阵中战斗力最弱的 K 行](https://github.com/ThreeSR/LeetCode/blob/main/LC1337_The%20K%20Weakest%20Rows%20in%20a%20Matrix_Naive%20Algorithm.cpp) 直接模拟，代码非常清晰。
                                  
[LC447 Number of Boomerangs 回旋镖的数量](https://github.com/ThreeSR/LeetCode/blob/main/LC447_Number%20of%20Boomerangs_Naive%20Algorithm.cpp)  注意哈希表的语法格式，注意关键元素的提取以及**占位符的使用**

[:point_up_2: Top](#leetcode)
***
## Others

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_ASCII.cpp)  C++中ASCII码的应用

[:point_up_2: Top](#leetcode)
***
# Bottom
