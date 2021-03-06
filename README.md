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

文档内容的顺序还会在后续调整，推荐做题顺序： 

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
          + 单调栈
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
+ [递归](#recursion)
+ [二分搜索](#binary-search)
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
     + 编辑距离（NLP应用）
     + 背包问题
          + 0-1背包问题
          + 完全背包问题
          + 动态规划下的排列组合问题
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
          + [最大流](#maximum-flow-problem)
               + [Ford-Fulkerson方法](#ford-fulkerson-method)
     + [概率图模型](#probabilistic-graphical-model) *optional*
          + [基本概念](#basic-concept)
          + [隐马尔科夫模型](#hidden-markov-model)
          + [马尔科夫随机场](#markov-random-field)
          + [条件随机场](#conditional-random-field)
          + [一些应用](#application)
+ [脑筋急转弯](#brain-teaser)
+ [模拟法](#模拟法)
     + [螺旋矩阵](#螺旋矩阵)
+ [其他](#others)
+ [结尾](#bottom)

***
## Learning Resources
:penguin:  :moyai:	
+ [算法导论](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/Introduction%20to%20Algorithms%203rd%20Edition.pdf)  经典名著
+ [算法图解](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/%E7%AE%97%E6%B3%95%E5%9B%BE%E8%A7%A3.pdf)  生动形象的算法书籍
+ [代码随想录](https://github.com/youngyangyang04)  微信公众号
+ [大话数据结构]()
+ [Coursera数据结构与算法专项课程](https://www.coursera.org/specializations/data-structures-algorithms)  内容偏难，由UCSD出品的在线课程
+ [剑指OFFER 第2版](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/%E5%89%91%E6%8C%87OFFER%20%E7%AC%AC2%E7%89%88.pdf)  找工必备
+ [C++ Primer第四版](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/C%2B%2B%20Primer%E7%AC%AC%E5%9B%9B%E7%89%88.pdf)  C++经典巨著
+ [C++ 标准模板库(STL)](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/C%2B%2B_%E6%A0%87%E5%87%86%E6%A8%A1%E6%9D%BF%E5%BA%93(STL).pdf)  这个PDF是STL的简单总结，很适合初学者学习
+ [STL源码剖析](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/STL%E6%BA%90%E7%A0%81%E5%89%96%E6%9E%90%EF%BC%88%E6%89%B9%E6%B3%A8%E7%89%88%EF%BC%89.pdf) C++ STL经典教材 可以更好地理解STL的实现，对于STL的使用很有意义，但不适合初学
+ [Markdown语法](https://github.com/ThreeSR/README) 学会Markdown有助于养成记录的好习惯，CSDN、GitHub、简书等平台都有支持Markdown语法，学会它是很有意义的
+ [Markdown阅读软件](https://typora.io/) 这里推荐我使用的typora
+ [Vim的使用](https://zhuanlan.zhihu.com/p/68111471) Vim是一个效率（zhuang bi）神器，旨在无鼠标的纯键盘操作。[Vim资源](https://github.com/youngyangyang04/PowerVim) ， [帮助学习Vim的小游戏](https://github.com/jmoon018/PacVim)。
+ [Notion](https://www.notion.so/) 笔记神器，方便在不同端同步使用
+ [CSAPP]()
+ [机器学习]()

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

[:point_up_2: Top](#leetcode)

### 栈

**Stack**

[LC232 Implement Queue using Stacks 用栈实现队列](https://github.com/ThreeSR/LeetCode/blob/main/LC232_Implement%20Queue%20using%20Stacks_Stack.cpp) 本题要求使用栈来实现队列。既是对栈的综合考察，也是对队列的综合考察，是很有意义的一道题。

注：[剑指Offer_09 用两个栈实现队列](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_09_%E7%94%A8%E4%B8%A4%E4%B8%AA%E6%A0%88%E5%AE%9E%E7%8E%B0%E9%98%9F%E5%88%97_Stack.py)和本题一样。

**单调栈 monotone stack：**

[LC84 Largest Rectangle in Histogram 直方图中的最大矩形](https://github.com/ThreeSR/LeetCode/blob/main/LC84_Largest%20Rectangle%20in%20Histogram_Stack.py)

[LC85 Maximal Rectangle 最大矩形](https://github.com/ThreeSR/LeetCode/blob/main/LC85_Maximal%20Rectangle_Stack.py)

推荐上面两道题一起写，你会发现LC84是LC85的API，这是一件很有趣的事情。解题过程困难，详细内容点开上面题目可见。

[LC739 Daily Temperatures 每日温度](https://github.com/ThreeSR/LeetCode/blob/main/LC739_Daily%20Temperatures_Stack.cpp) 需要使用单调递减栈，对较大的温度进行记录。对于单调栈的使用，是一个经典的套路。注意：所谓的单调递减栈，是指从栈底到栈顶，元素大小递减。

[LC503 Next Greater Element II 下一个更大元素 II](https://github.com/ThreeSR/LeetCode/blob/main/LC503_Next%20Greater%20Element%20II_Stack.cpp) 同样是单调递减栈，和LC739非常类似。最大的不同是：这道题需要使用**滚动数组**。滚动数组的使用需要借助取余（%）运算，详见链接。

### 哈希表

**Hash Table**

除了翻译为哈希表，这个数据结构也叫作散列表。有的时候，也管这个数据结构叫做字典。核心的特征是：一个键值（key）对应一个数值（value），二者存在映射关系。

在C++中，可以使用map<int, int>的结构进行实现；Python中可以使用dict()，即字典进行实现。

[LC697 Degree of an Array 数组的度](https://github.com/ThreeSR/LeetCode/blob/main/LC697_Degree%20of%20an%20Array_Hash%20Table.cpp)  需要建立*三个哈希表*进行相关内容的记录。比较考验哈希表的使用。

[:point_up_2: Top](#leetcode)

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

总结这些方法的原因在于：力扣中很多题目需要对重复元素进行处理。有的时候题目目标不是重复元素，但过程中会遇到这个问题。因此作如上总结。

[:point_up_2: Top](#leetcode)
***
## String Manipulation

[LC228 Summary Ranges 合并区间](https://github.com/ThreeSR/LeetCode/blob/main/LC228_Summary%20Ranges_Naive%20Algorithm.cpp)  转为string类型：to_string()  在string类型里面加字符：append() eg: temp.append("->");  不像python直接 + 即可。

[LC648 Replace Words 单词替换](https://github.com/ThreeSR/LeetCode/blob/main/LC648_Replace%20Words_String%20Manipulation.cpp) 很好的锻炼字符串使用的题目。注意的点：1.stringstream sentenceWord(sentence); // 这种语法可以把一个句子的string拆成逐个word；2.if (sentence.empty()) { // 要灵活使用string下面的方法；3.while (sentenceWord >> word) { // 这个的意思是：把拆成word的sentenceWord中的各个单词逐个赋值给word；4.word = word.substr(0, i); // 这就是找到单词的前缀。一旦找到前缀，马上收手。；5.result += word + ' '; // 找不到前缀，那就是把本身的单词输出到result中。这也是符合题目的要求的。**特别注意：在C++中，也可以使用类似于Python的字符串处理方法。也可以用string下的 += 直接加长字符串。**

[LC14 Longest Common Prefix 最长公共前缀](https://github.com/ThreeSR/LeetCode/blob/main/LC14_Longest%20Common%20Prefix_String%20Manipulation.java)  思路简单：将第一个string设置成公共前缀，然后逐一和其他string比较，逐步减小公共子串的长度，如果最后还有公共部分，代表有公共前缀；反之则无，可以提前break。比较考验字符串处理的能力。

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

典型例题有：[LC338](https://github.com/ThreeSR/LeetCode/blob/main/LC338_Counting%20Bits_DP.cpp)  针对本题，[详见我的力扣题解](https://leetcode-cn.com/problems/counting-bits/solution/c-bu-lai-en-ke-ni-gen-suan-fa-dong-tai-g-17ym/)。

### 2.异或运算（^）的应用  

异或运算是非常经常用到的位运算，C++中用 ^ 表示XOR。

推荐阅读的材料：[真实世界的异或运算](https://mp.weixin.qq.com/s/pDXzZoSByzYKkim71qCsCw)

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_Bit%20Operation.cpp)  LC389主要从find difference角度理解异或运算的用途

[LC268_Missing Number 缺失的数](https://github.com/ThreeSR/LeetCode/blob/main/LC268_Missing%20Number_Bit%20Operation.cpp)  LC268这道题从配对的角度理解异或运算，并且着重使用性质：0和任何数异或都是那个数本身。

从不同角度理解同一个运算，有时可以得到很精妙的解法。因为相同数异或为0，不同为1，所以从结果为1的角度，可以认为是find difference；从结果为0的角度，可以认为是pairing。正好，在LC389中要从find difference入手；在LC268中要从pairing入手。

总结：多角度理解同一个运算或算法在解题时很必要。

[LC765 Couples Holding Hands 情侣牵手 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC765_Couples%20Holding%20Hands_Bit%20Operation.py#L8) 这是2021年2月14日——情人节的每日一题。里面涉及到位运算中的异或运算。同时，它也有贪心算法的思想在其中。目前的问题在于：如何证明贪心策略是正确的？（虽然很多时候，贪心策略不好被证明，有的时候就是通过简单的尝试，然后跟着感觉走。）详细具体的内容见[我的力扣题解](https://leetcode-cn.com/problems/couples-holding-hands/solution/wei-yun-suan-pythontong-su-yi-dong-rang-9qubg/)。[LC765 Couples Holding Hands 情侣牵手 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC765_Couples%20Holding%20Hands_Bit%20Operation.cpp)

[LC1611 使整数变为 0 的最少操作次数](https://leetcode-cn.com/problems/minimum-one-bit-operations-to-make-integers-zero/)  pending...

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

[LC7 翻转整数](https://github.com/ThreeSR/LeetCode/blob/main/LC7_Reverse%20Integer_Math.cpp)

下面给出整数翻转的模板：（不同题目不同条件下，需要微调。在不同进制下可以使用，比如LC190）：

```C++
        long long rem = 0, y = 0; // 防止溢出
        int flag = x; // 留一个做比较
        while(x != 0){  // 常见处理
            y = y * 10 + x % 10;
            x = x / 10;
        }
        // 这个模板很简单，在处理翻转的时候，就可以不用栈、队列之类的数据结构了。
        // 不过在定义变量的时候，要小心溢出！
```

[LC9 Palindrome Number 回文数](https://github.com/ThreeSR/LeetCode/blob/main/LC9_Palindrome%20Number_Math.cpp)  关于回文，还有其他题目，到时候一起分析。本题和LC7与LC190很像，也是进行翻转，之后进行是否回文的评判。方法上基本一致。

[LC190 Reverse Bits 二进制数翻转](https://github.com/ThreeSR/LeetCode/blob/main/LC190_Reverse%20Bits_Math.cpp)  这一题和[LC7](https://github.com/ThreeSR/LeetCode/blob/main/LC7_Reverse%20Integer_Math.cpp)非常相似，但是不同。因为这里**二进制有32位的硬性要求，导致2进制数前面的0也要进行翻转，不像10进制从第一位非0数进行翻转。**所以在[LC7](https://github.com/ThreeSR/LeetCode/blob/main/LC7_Reverse%20Integer_Math.cpp)的基础上，要对循环进行修改，把while循环改成for循环更合适。

[LC62 组合数公式](https://github.com/ThreeSR/LeetCode/blob/main/LC62_Unique%20Paths_Math.cpp)  这道题很简单，可以从中学到写长串公式的代码的方法。比如在一些NLP早期模型中，很需要运用概率论的方法对文本进行分析（like [朴素贝叶斯](https://github.com/ThreeSR/Coursera/blob/main/Natural%20Language%20Processing%20Specialization%20in%20Coursera/NLP%20with%20Classification%20and%20Vector%20Spaces/week2/C1_W2_Assignment.ipynb)(链接中内容是Coursera的自然语言处理专项课程中的作业，可以学习)）。在这些公式中，有的就是求积或者转换成log进行求和，可以用类似本题的写法完成长串公式的书写。

[LC66 加一 Plus One Java代码 进位的模板处理](https://github.com/ThreeSR/LeetCode/blob/main/LC66_Plus%20One_Math.java)  关于数学中digits的考法，主要是两种：1.0的处理，比如100，翻转后是001，按照十进制应该是1，去掉前面的0；2，进位的处理，比如本题。digits类题目，涉及的运算可以是：位运算，取模运算。涉及的题目应用比如整数翻转，回文数判断等等。digits是数学类题目里面很经常遇到的类型，**有空我会把digits下的题目总结，归成数学下面的一个大类别。**

[LC989 Add to Array-Form of Integer 对数组形式的整数进行相加](https://github.com/ThreeSR/LeetCode/blob/main/LC989_Add%20to%20Array-Form%20of%20Integer_Math.cpp)  本题和[LC66 加一 Plus One](https://github.com/ThreeSR/LeetCode/blob/main/LC66_Plus%20One_Math.java)很像，也是考察对于加法的理解。应该弄明白数位相加和进位的关系。此外，对于这种类型的题目，应该明白：**不能用很简单的思路去做**，比如：把数组转换为整数->相加->把结果再转换为数组。不能的原因是A数组太长了，没办法用整形数表示。再者，根据经验也知道力扣不能这么简单。所以本题是逐位相加，注意进位问题。

[LC96 卡特兰数](https://github.com/ThreeSR/LeetCode/blob/main/LC96_Unique%20Binary%20Search%20Trees_Math.cpp)  本题也可以用[动态规划的思路理解](https://mp.weixin.qq.com/s/8VE8pDrGxTf8NEVYBDwONw)，在找到潜在递推关系之后，可以动归。

[LC142 Linked List Cycle II](https://github.com/ThreeSR/LeetCode/blob/main/LC142_Linked%20List%20Cycle%20II_Double%20Pointer.cpp)  [**弗洛伊德判圈算法（Floyd Cycle Detection Algorithm）**](https://zh.wikipedia.org/wiki/Floyd%E5%88%A4%E5%9C%88%E7%AE%97%E6%B3%95)  [本题数学推导](https://mp.weixin.qq.com/s/_QVP3IkRZWx9zIpQRgajzA)  此算法也可用于[LC287  Pending]()。

[LC812 Largest Triangle Area 最大三角形面积 Java](https://github.com/ThreeSR/LeetCode/blob/main/LC812_Largest%20Triangle%20Area_Math.java)  鞋带公式  也可用海伦公式求解，暴力解。

[LC867 Transpose Matrix 转置矩阵](https://github.com/ThreeSR/LeetCode/blob/main/LC867_Transpose%20Matrix_Math.cpp)  先定义一个与原矩阵行列相反的矩阵，再用 B[j][i] = A[i][j] 赋值即可，可见[我的力扣题解](https://leetcode-cn.com/problems/transpose-matrix/solution/zhi-jie-zhuan-zhi-jiu-hao-c-by-threesr-4re5/)

[LC238 Product of Array Except Self 数组中除自身以外的乘积](https://github.com/ThreeSR/LeetCode/blob/main/LC238_Product%20of%20Array%20Except%20Self_Math.py)  这道题非常巧妙，把原问题转换成一个上三角和下三角矩阵，这个矩阵的主对角线元素都是1，通过对矩阵里面的同行元素求积，得到结果。具体算法可见Solution中[LC238_Ans](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC238_Ans.jpg)。  本题和[剑指Offer 66 构建乘积数组](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_66_%E6%9E%84%E5%BB%BA%E4%B9%98%E7%A7%AF%E6%95%B0%E7%BB%84_Math.py)相同。

[LC1018 Binary Prefix Divisible By 5 被5整除的二进制前缀](https://github.com/ThreeSR/LeetCode/blob/main/LC1018_Binary%20Prefix%20Divisible%20By%205_Math.cpp)  难点在于如果不对当下结果取余，会溢出。就算是使用long long类型，也会溢出。直接边取余边进行后续运算，不会对结果造成影响，在题目的参考链接中有证明过程。

[LC1232 Check If It Is a Straight Line 检查点是不是在同一直线上](https://github.com/ThreeSR/LeetCode/blob/main/LC1232_Check%20If%20It%20Is%20a%20Straight%20Line_Math.cpp)  题目很简单，有几个小细节：1.斜率的式子应该从相除变成交叉相乘积相等，因为怕斜率不存在的情况；2.**变相乘之后，要小心数字溢出**。好在本题不用考虑。但其他题目写的时候应该有所提防。

[LC628 Maximum Product of Three Numbers 三个数的最大乘积](https://github.com/ThreeSR/LeetCode/blob/main/LC628_Maximum%20Product%20of%20Three%20Numbers_Math.cpp)  这道题乍一看非常简单，好像递减排序之后取前三个相乘即可。但是要**小心负数！！**。这是一个力扣的常见套路，在样例中全给你正数，给你一种非负整数的错觉，其实不然。所以**一定小心负数，看清楚题目要求**。对于负数的考量，其实在代码中稍微变化即可，思路还是很巧妙的。对于代码中的**分类讨论能力**是需要加强的。

[LC724 Find Pivot Index 寻找数组的中心索引](https://github.com/ThreeSR/LeetCode/blob/main/LC724_Find%20Pivot%20Index_Math.cpp)  本题用简单的模拟法即可求解，但在求解的过程中，依照方法的不同，需要用不同的数学公式进行分析。可以详见链接中的题解。

[LC888 Fair Candy Swap 公平的糖果棒交换](https://github.com/ThreeSR/LeetCode/blob/main/LC888_Fair%20Candy%20Swap_Math.cpp)  找寻潜在数学关系可以简便求解，有一些用法可以注意：1.因为返回一个即可，所以可使用unordered_set<int>；2.accumulate方法在C++中可以有求和效果。
 
 ### 杨辉三角
 
 杨辉三角也称帕斯卡三角（Pascal's Triangle），解题思路就是利用不同行之间的递推公式。
 
 [LC118 Pascal's Triangle 杨辉三角](https://github.com/ThreeSR/LeetCode/blob/main/LC118_Pascal's%20Triangle_Math.cpp) 
 
 [LC119 Pascal's Triangle II 杨辉三角 II](https://github.com/ThreeSR/LeetCode/blob/main/LC119_Pascal's%20Triangle%20II_Math.cpp)
 
 C++中，直接 .resize 就可以改变动态数组大小： triYangHui[i].resize(i + 1); 
 
 ### 快速幂
 
 快速幂是一种常用的求幂运算的方法，也是Python中pow(x, n)函数的底层实现。该算法可以把求幂的时间复杂度从O(n)降到O(log n)。
 
 [LC50 Pow(x, n) Pow(x, n) Python](https://github.com/ThreeSR/LeetCode/blob/main/LC50_Pow(x%2C%20n)_Math.py)  快速幂算法的实现，很经典的算法，值得学习：[算法截图1](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC50_Ans1.jpg)，[算法截图2](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC50_Ans2.jpg)。
 
 ### 前缀和
 
 前缀和的概念类似于GRE中的percentile（百分位数），可以利用这种思想求某个覆盖范围内的和值。
 
 [LC303 Range Sum Query - Immutable 区域和检索 - 数组不可变](https://github.com/ThreeSR/LeetCode/blob/main/LC303_Range%20Sum%20Query%20-%20Immutable_Math.py)  一维前缀和，求数组中某一段范围内的和值。  
 
 [LC304 Range Sum Query 2D - Immutable 二维区域和检索 - 矩阵不可变](https://github.com/ThreeSR/LeetCode/blob/main/LC304_Range%20Sum%20Query%202D%20-%20Immutable_Math.py) 二维前缀和。为了求解这个问题，可以把问题分成两步：1.求前缀和preSum；2.利用第一步求到的前缀和求矩阵中覆盖范围的面积大小。依照前缀和的定义，可以利用下面两张图中的思路，按照公式写出答案：[第一步：求解preSum](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC304_Ans1.jpg) , [第二步：求解覆盖面积](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC304_Ans2.jpg) 。**结合图片中内容和代码进行分析**

[:point_up_2: Top](#leetcode)
***
## Recursion

反中序遍历 

遍历是常用的处理手段。除了遍历自身能出题之外，遍历也可以用在其他题目中，当做题目中数据处理的一部分。比如在二叉搜索树（BST）中，可以用中序遍历把树转换为一个vector，接下来，对这个vector进行处理即可。处理有序vector显然比BST要简单得多。  

[LC538](https://github.com/ThreeSR/LeetCode/blob/main/LC538_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)  本题和 [LC1038](https://github.com/ThreeSR/LeetCode/blob/main/LC1038_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)相同

[:point_up_2: Top](#leetcode)
***
## Binary Search 

**[算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/BinarySearch_Algorithm.py)**

**注意：**一般在：1.处理**有序数组**的查找时；2.当时间复杂度要求是**O(logn)** 时，就应该想到要用二分搜索。此外，有时候数组可能无序，可以先进行排序，再进行二分搜索。

[LC33](https://github.com/ThreeSR/LeetCode/blob/main/LC33_Search%20in%20Rotated%20Sorted%20Array_Binary%20Search.cpp)

[LC34 !](https://github.com/ThreeSR/LeetCode/blob/main/LC34_Find%20First%20and%20Last%20Position%20of%20Element%20in%20Sorted%20Array_Binary%20Search.cpp)

[LC35](https://github.com/ThreeSR/LeetCode/blob/main/LC35_Search%20Insert%20Position_Binary%20Search.cpp)

[**LC154 旋转数组的最小数字**](https://github.com/ThreeSR/LeetCode/blob/main/LC154_Find%20Minimum%20in%20Rotated%20Sorted%20Array%20II_Binary%20Search.cpp)  本题是**非典型**的二分搜索，前面说到，一般二分搜索需要是排列好的数组。但这里是基于排列好的数组下，对数组某一个位置进行了截断并移动（详见题目）。这样一来，不满足有序数组的条件。但这样的变化很特殊，经过分类讨论，依然可以得出可以使用二分搜索的结论。这是一道非典型的二分搜索题目，很值得写的题目。此外，在剑指offer中，有一道题和这题一样，可以顺便一起写掉。

剑指offer：[剑指Offer_11_旋转数组的最小数字](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_11_%E6%97%8B%E8%BD%AC%E6%95%B0%E7%BB%84%E7%9A%84%E6%9C%80%E5%B0%8F%E6%95%B0%E5%AD%97_Binary%20Search.cpp)

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

**（这句话是给我自己提醒） 模板在使用的时候，一定一定要记住，在迭代过程中，i和index的关系分清楚！！调用backtracking的时候，是i + 1还是index + 1想清楚！！错太多次了！**

总的来说，回溯法做的事情就是暴力枚举，只不过我们通过回溯这种写法，让暴力枚举的这个过程“优美”了一些。（可能这就是“暴力美学”吧）那么会有什么问题涉及到“暴力美学”呢？

### 1.组合问题

[LC77 Combinations 组合](https://github.com/ThreeSR/LeetCode/blob/main/LC77_Combinations_Backtracking.cpp)  最基础的回溯法题目

[LC39 Combination Sum 组合总和](https://github.com/ThreeSR/LeetCode/blob/main/LC39_Combination%20Sum_Backtracking.cpp)

[LC40 Combination Sum II 组合总和2](https://github.com/ThreeSR/LeetCode/blob/main/LC40_Combination%20Sum%20II_Backtracking.cpp)

[LC216 Combination Sum III 组合总和3](https://github.com/ThreeSR/LeetCode/blob/main/LC216_Combination%20Sum%20III_Backtracking.cpp)

实际应用：

[LC17 Letter Combinations of a Phone Number 电话号码中的字母组合](https://github.com/ThreeSR/LeetCode/blob/main/LC17_Letter%20Combinations%20of%20a%20Phone%20Number_Backtracking.cpp)

[LC131 Palindrome Partitioning 分割回文串](https://github.com/ThreeSR/LeetCode/blob/main/LC131_Palindrome%20Partitioning_Backtracking.cpp)

[LC93 Restore IP Addresses 复原IP地址](https://github.com/ThreeSR/LeetCode/blob/main/LC93_Restore%20IP%20Addresses_Backtracking.cpp)

### 2.子集问题

[LC78 Subsets 子集](https://github.com/ThreeSR/LeetCode/blob/main/LC78_Subsets_Backtracking.cpp)

[LC90 Subsets II 子集2](https://github.com/ThreeSR/LeetCode/blob/main/LC90_Subsets%20II_Backtracking.cpp)

[LC491 Increasing Subsequences 递增子序列 解法一](https://github.com/ThreeSR/LeetCode/blob/main/LC491_Increasing%20Subsequences_Backtracking%20I.cpp)

[LC491 Increasing Subsequences 递增子序列 解法二](https://github.com/ThreeSR/LeetCode/blob/main/LC491_Increasing%20Subsequences_Backtracking%20II.cpp)

### 3.排列问题

[LC46 Permutations 全排列](https://github.com/ThreeSR/LeetCode/blob/main/LC46_Permutations_Backtracking.cpp)

[LC47 Permutations II 全排列2](https://github.com/ThreeSR/LeetCode/blob/main/LC47_Permutations%20II_Backtracking.cpp)

### 4.比较难的应用问题

[LC332 Reconstruct Itinerary 重新安排行程](https://github.com/ThreeSR/LeetCode/blob/main/LC332_Reconstruct%20Itinerary_Backtracking.cpp)

[LC51 N-Queens N皇后问题](https://github.com/ThreeSR/LeetCode/blob/main/LC51_N-Queens_Backtracking.cpp)  这个问题很有名，涉及到算法理论中关于NP完全性的讨论。（Plus，国际象棋是很有意思的益智游戏。）

这里关于**NP问题**，再多说几句：
```
计算机可以解决各种计算问题。在计算机科学中，计算问题可以分为几大类，比如 NL、P、NP、PSPACE 等。

P 类问题

P 类问题指的是所有可以由一个确定型图灵机在多项式表达的时间内解决的问题。简单来说，P 类问题就是能在多项式时间内解决的问题。举个例子，
冒泡排序就是 P 类问题，因为该算法的时间复杂度为 O(n²)，不是指数级的。

NP 类问题

相反，NP 类问题指的是需要由一个非确定型图灵机在多项式表达的时间内解决的问题。简单来说，NP 类问题的算法比 P 类问题慢很多。
著名的 NP 类问题：旅行家推销问题（TSP）。即有一个推销员，要到 n 个城市推销商品，他要找出一个包含所有n个城市的环路，这个环路
的路径小于 a。我们知道这个问题如果单纯的用枚举法来列举的话会有(n-1)! 种解，已经不是多项式时间的算法了(注：阶乘的复杂度比多项式高得多)
。但重要的是，如果给定一个解，我们可以在多项式时间内验证该解是否正确。

P=NP?

也就是，我们能在多项式的时间内验证某个 NP 类问题的解是否正确，可是我们却不知道 NP 类问题是否存在一个多项式时间的算法，
能够保证在多项式时间内求出问题的解（注意，这里是不知道，不是不存在）。所以这就引出了一个难题：NP 类问题= P 类问题？即，
是否所有能在多项式时间内验证解的正确性的问题，都是具有多项式时间算法的问题呢？

大多数人都认为 P≠NP，但是没有人能证明。如果有人能够证明 P=NP，那么就会极大地推动计算机的发展，因为我们可以通过更快的算法来解决搜索问题，
而且人们无需机器学习的算法，也能解决很多困难的决策问题。
```
那么，N皇后问题怎么和NP问题扯上关系的呢？

pending...

[LC37 Sudoku Solver 解数独](https://github.com/ThreeSR/LeetCode/blob/main/LC37_Sudoku%20Solver_Backtracking.cpp)  本题也是非常有名的题目。

[**LC79 单词搜索**](https://github.com/ThreeSR/LeetCode/blob/main/LC79_Word%20Search_Backtracking.py)  本题目需要对每一个格子中字母进行排列组合（枚举），找到可行解。所以用回溯法。本题是用Python实现。

[:point_up_2: Top](#leetcode)
***
## Greedy Algorithm

[LC452 Minimum Number of Arrows to Burst Balloons 用最少的箭戳破气球](https://github.com/ThreeSR/LeetCode/blob/main/LC452_Minimum%20Number%20of%20Arrows%20to%20Burst%20Balloons_Greedy%20Algorithm.cpp)

[LC56 合并区间](https://github.com/ThreeSR/LeetCode/blob/main/LC56_Merge%20Intervals_Greedy%20Algorithm.cpp)  本题在方法上和[LC452 用最少的箭戳破气球](https://github.com/ThreeSR/LeetCode/blob/main/LC452_Minimum%20Number%20of%20Arrows%20to%20Burst%20Balloons_Greedy%20Algorithm.cpp)有相似之处，都要处理区间的重叠。

[LC435 Non-overlapping Intervals 无覆盖的区间](https://github.com/ThreeSR/LeetCode/blob/main/LC435_Non-overlapping%20Intervals_Greedy%20Algorithm.cpp)  这题在方法上和上面两道题有相似之处，可以类比。在解题思路上，从对立面入手，简化过程。

[LC738 Monotone Increasing Digits 单调递增数字](https://github.com/ThreeSR/LeetCode/blob/main/LC738_Monotone%20Increasing%20Digits_Greedy%20Algorithm.cpp)  **字符串到整数的处理**；赋值的时候，**小心数组的数据类型**；多考虑特例。

[LC605 Can Place Flowers 种花问题](https://github.com/ThreeSR/LeetCode/blob/main/LC605_Can%20Place%20Flowers_Greedy%20Algorithm.cpp)  这题是2021年1月1日的每日一题。在新的一年，种下一颗种子，辛勤浇水施肥，静待开花结果。本题找到题目中种花必须间隔的硬性要求，并利用，不难求解。

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

[LC21 Merge Two Sorted Lists 合并两个有序链表](https://github.com/ThreeSR/LeetCode/blob/main/LC21_Merge%20Two%20Sorted%20Lists_Double%20Pointer.py)  运用双指针，把元素从小到大放进新的链表中。 **当一个链表结束了，此时可以直接把另一个链表的剩余部分接进结果中。**   本题和[剑指offer25 Merge Two Sorted Lists](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87offer_25_Merge%20Two%20Sorted%20Lists_Double%20Pointer.py)相同。

[LC26 ！ Remove Duplicates from Sorted Array 移除排序数组中的重复元素 Java代码](https://github.com/ThreeSR/LeetCode/blob/main/LC26_Remove%20Duplicates%20from%20Sorted%20Array_Double%20Pointer.java)  用双指针进行前后两个元素判别，剔除重复元素。

[剑指Offer22 链表中倒数第k个节点](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_22_%E9%93%BE%E8%A1%A8%E4%B8%AD%E5%80%92%E6%95%B0%E7%AC%ACk%E4%B8%AA%E8%8A%82%E7%82%B9_Double%20Pointer.cpp)  双指针中的快慢指针，一个指针先走k步，之后另外一个指针跟着走。等到快指针到末尾，慢指针就是指向倒数第K个元素。

这种**快慢指针**的题目是双指针法常见题型。一般来说，快慢指针分为两种：

1.一个指针先抢跑，另外一个指针过一段时间再追。具体就是本题。

2.两个指针同时起跑，一个的速度是另一个的两倍。这种情况会跟[弗洛伊德判圈算法（Floyd Cycle Detection Algorithm）](https://zh.wikipedia.org/wiki/Floyd%E5%88%A4%E5%9C%88%E7%AE%97%E6%B3%95)一起考察。比如[LC142 Linked List Cycle II](https://github.com/ThreeSR/LeetCode/blob/main/LC142_Linked%20List%20Cycle%20II_Double%20Pointer.cpp)。

所以你会发现，双指针法在解决链表的问题上有比较好的表现。在处理链表的时候，我们没办法像处理数组那样遍历、查找。有的时候会有些干着急。双指针法为我们处理链表问题提供了比较好的工具。

[LC61 Rotate List 旋转链表](https://github.com/ThreeSR/LeetCode/blob/main/LC61_Rotate%20List_Double%20Pointer.cpp)  简单来说，就是先让链表成环，然后把要移动的节点当作头结点，之后断开头结点前面的链接，从环再次变回链表。这时候就是结果。图解在Solution中，一目了然。[图一](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC61_Ans1.png) || [图二](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC61_Ans2.png)

[LC88 Merge Sorted Array 合并两个有序数组](https://github.com/ThreeSR/LeetCode/blob/main/LC88_Merge%20Sorted%20Array_Double%20Pointer.py)  合并有序内容的题目，都可以设置双指针求解。类似的题目还有[LC21 Merge Two Sorted Lists 合并两个有序链表](https://github.com/ThreeSR/LeetCode/blob/main/LC21_Merge%20Two%20Sorted%20Lists_Double%20Pointer.py)。**值得小心的是：当一个链表或者数组中还有剩余元素时，要记得把它们也加进结果中，不要忘了！**

[剑指Offer 21 调整数组顺序使奇数位于偶数前面](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_21_%E8%B0%83%E6%95%B4%E6%95%B0%E7%BB%84%E9%A1%BA%E5%BA%8F%E4%BD%BF%E5%A5%87%E6%95%B0%E4%BD%8D%E4%BA%8E%E5%81%B6%E6%95%B0%E5%89%8D%E9%9D%A2_Double%20Pointer.cpp)  首尾指针

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

在并查集的思路中，很好的一点是：**刷新了我们对于数组使用的观念**。这里的数组father[x]可以认为是x的一个映射，这个映射映到x的上一个节点。在路径压缩之后，就映射到x的根节点上。可以把father[x]当做是函数中的f(x)。这个新的理解是很有意义的。

[LC547 Social Circle 朋友圈](https://github.com/ThreeSR/LeetCode/blob/main/LC547_Social%20Circle.py)   这道题目前被[LC547 Number of Provinces 省份数量](https://github.com/ThreeSR/LeetCode/blob/main/LC547_Number%20of%20Provinces_Disjoint%20Set.cpp)替代。朋友圈这道题本身就和省份数量接近，所以写不到这题也没关系。

[LC547 Number of Provinces 省份数量](https://github.com/ThreeSR/LeetCode/blob/main/LC547_Number%20of%20Provinces_Disjoint%20Set.cpp)  这道题是按照上面的模板写的，可以结合模板和本题一起理解并查集的实现与原理。

[LC684 Redundant Connection 冗余连接](https://github.com/ThreeSR/LeetCode/blob/main/LC684_Redundant%20Connection_Disjoint%20Set.cpp)  冗余连接，通俗的说，就是从树变成环的最后一步。我们需要抛弃这一步，使得树的结构依然成立。明白这一点，我们就知道可以用并查集的方法，在各个边合并之后，看哪个边的两个节点最早处于同一个集合。这个时候输出这条边即可。

说明一个可能存在的疑惑：题目中说的是输出最后连接的边，但是代码中是一遇到相同集合的边就输出，这样违背了题目的意思吗？

其实没有违背。题目所谓的输出最后连接的边，其实就是第一条由树成环的边。我们这里输出的就是这个第一条成环的边，和题意相通，并不违背。

[LC947 Most Stones Removed with Same Row or Column 同行或同列中被移除的最多石头数](https://github.com/ThreeSR/LeetCode/blob/main/LC947_Most%20Stones%20Removed%20with%20Same%20Row%20or%20Column_Disjoint%20Set.cpp)  本题比较抽象，需要把同行或者同列的石头用并查集并在一起。之后用石头总数减去连通集数目得到最多的被移除数目。具体题解见链接，图示过程见Solution中LC947_Ans系列。

[LC1319 Number of Operations to Make Network Connected 连通网络的操作次数](https://github.com/ThreeSR/LeetCode/blob/main/LC1319_Number%20of%20Operations%20to%20Make%20Network%20Connected_Disjoint%20Set.cpp)  难点在于操作次数的理解，是一道典型的并查集题目，在模板上稍微修正即可。针对于本题，我有专门写[力扣题解](https://leetcode-cn.com/problems/number-of-operations-to-make-network-connected/solution/you-shi-bing-cha-ji-de-yi-tian-cjie-fa-x-refw/)，感兴趣可以查看，也可以看上面GitHub链接的内容。

[LC959 Regions Cut By Slashes 由斜杠划分区域]()

[LC1631 Path With Minimum Effort 最小体力消耗路径](https://github.com/ThreeSR/LeetCode/blob/main/LC1631_Path%20With%20Minimum%20Effort_Disjoint%20Set.cpp)  一些结构体和类的赋初值的书写方法，可以学习。**emplace_back()和push_back()的区别**。详见题目链接。

[LC778 Swim in Rising Water 水位上升的泳池中游泳](https://github.com/ThreeSR/LeetCode/blob/main/LC778_Swim%20in%20Rising%20Water_Disjoint%20Set.cpp)  本题和[LC1631 Path With Minimum Effort 最小体力消耗路径](https://github.com/ThreeSR/LeetCode/blob/main/LC1631_Path%20With%20Minimum%20Effort_Disjoint%20Set.cpp)很像。

此外，有两个点值得注意：
1. make_pair函数的使用：make_pair函数：无需写出类别，就可以生成一个pair对象。一般生成pair对象需要：pair<int, int>之类的写法。
2. **C++中上下左右移动的代码模板。** 学习这个很有意义，在很多地方可以用到。比如N皇后，接雨水II等题目。    

[HDU_OJ 1232 畅通工程](http://acm.hdu.edu.cn/showproblem.php?pid=1232)  pending 

[:point_up_2: Top](#leetcode)

### Minimum Spanning Trees MST

[背景知识](https://en.wikipedia.org/wiki/Minimum_spanning_tree)
> A minimum spanning tree (MST) or minimum weight spanning tree is a subset of the edges of a connected, edge-weighted **undirected** graph that connects all the vertices together, **without any cycles and with the minimum possible total edge weight**. That is, it is a spanning tree whose sum of edge weights is as small as possible. More generally, any edge-weighted undirected graph (not necessarily connected) has a minimum spanning forest, which is a union of the minimum spanning trees for its connected components.

最小生成树算法主要有prim算法和kruskal算法。

[prim算法](https://en.wikipedia.org/wiki/Prim%27s_algorithm)
> In computer science, Prim's (also known as Jarník's) algorithm is a **greedy algorithm** that finds a minimum spanning tree for a weighted **undirected** graph. This means it finds a subset of the edges that forms a tree that includes every vertex, where the total weight of all the edges in the tree is minimized. **The algorithm operates by building this tree one vertex at a time, from an arbitrary starting vertex, at each step adding the cheapest possible connection from the tree to another vertex.**

[kruskal算法](https://en.wikipedia.org/wiki/Kruskal%27s_algorithm)
> Kruskal's algorithm finds a minimum spanning forest of an **undirected** edge-weighted graph. If the graph is connected, it finds a minimum spanning tree. It is a **greedy algorithm** in graph theory as **in each step it adds the next lowest-weight edge that will not form a cycle to the minimum spanning tree.**

通过上面的介绍可知：
1. 两个算法都是针对于无向图而言的；
2. 两个算法都是基于贪心算法的；
3. prim从点入手，kruskal从边入手。

prim以一个随机顶点为基础并开始，找寻过这个顶点的最短边并选中，之后立足于现有的两个点，找寻最短边，进行连接，最后生成MST。贪心能达到最优解的原因在于，MST需要每个顶点都出现，所以在每一步找寻边的时候，都找最短的即可，这是必须要走的流程。

kruskal以边为基础，先将所有边按边长从小到大排序，之后贪心选取（尽量选最小权重）。最终连成的图就是MST。**kruskal算法可以用并查集+贪心算法实现。**详见下面的LC1584。

[LC1584 Min Cost to Connect All Points 连接所有点的最小距离](https://github.com/ThreeSR/LeetCode/blob/main/LC1584_Min%20Cost%20to%20Connect%20All%20Points_Graph.cpp)  这道题显然是一道最小生成树的题目，本题我用kruskal算法求解。详细内容见链接。

[:point_up_2: Top](#leetcode)

### Shortest Path

最短路径问题有许多算法，这些算法跟图的种类密切相关。

首先介绍[Dijkstra's Algorithm](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)。
> Dijkstra's algorithm (or Dijkstra's Shortest Path First algorithm, SPF algorithm) is an algorithm for finding the shortest paths between nodes in a graph, which may represent, for example, road networks. It was conceived by computer scientist Edsger W. Dijkstra in 1956 and published three years later.

[C++实现](https://github.com/ThreeSR/C-Plus-Plus/blob/master/graph/Dijkstra.cpp)  [Python实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/Dijkstra's_Algorithm.py)

### Network Flow

网络流问题  pending

[CSDN](https://blog.csdn.net/A_Comme_Amour/article/details/79356220)

### Probabilistic Graphical Model

**概率图模型 PGM**

参考：机器学习（周志华）；[PGM课程](https://www.cs.cmu.edu/~epxing/Class/10708-20/)， taught by CMU Eric Xing（邢波）。

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


[LC485 Max Consecutive Ones 最大连续1的个数 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC485_Max%20Consecutive%20Ones_Naive%20Algorithm.cpp) 相关内容见[我的力扣题解](https://leetcode-cn.com/problems/max-consecutive-ones/solution/yi-ci-forxun-huan-pythoncjian-dan-fang-b-hpbd/)；Python版代码：
[LC485 Max Consecutive Ones 最大连续1的个数 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC485_Max%20Consecutive%20Ones_Naive%20Algorithm.py)

[LC566 Reshape the Matrix 重塑矩阵](https://github.com/ThreeSR/LeetCode/blob/main/LC566_Reshape%20the%20Matrix_Naive%20Algorithm.cpp) reshape原本的矩阵，按照顺序填入数字即可。

[LC674 Longest Continuous Increasing Subsequence 最长连续递增子序列](https://github.com/ThreeSR/LeetCode/blob/main/LC674_Longest%20Continuous%20Increasing%20Subsequence_Naive%20Algorithm.py)

[LC665 Non-decreasing Array 非递减数列](https://github.com/ThreeSR/LeetCode/blob/main/LC665_Non-decreasing%20Array_Naive%20Algorithm.cpp) 小心非递减序列的判断，需要分类讨论；题目虽简单，但是容易错；判断递增的函数is_sorted(nums.begin(), nums.end());的使用。

[LC766 Toeplitz Matrix 托普利茨矩阵](https://github.com/ThreeSR/LeetCode/blob/main/LC766_Toeplitz%20Matrix_Naive%20Algorithm.cpp) 模拟法，找到元素间的对应关系，保证本位置元素和右下角的元素相等即可。

[LC896 Monotonic Array 单调数组](https://github.com/ThreeSR/LeetCode/blob/main/LC896_Monotonic%20Array_Naive%20Algorithm.cpp) 关注单调递增和单调递减的两种情况，最后进行或运算。
除了上述解法，还可以直接调用函数：is_sorted(A.begin(), A.end()) || is_sorted(A.rbegin(), A.rend()); 进行操作，对数组的单调性进行判断。注意迭代器中：rbegin(), rend()的用法。[LC896 Monotonic Array 单调数组 解法二](https://github.com/ThreeSR/LeetCode/blob/main/LC896_Monotonic%20Array%20(API)_Naive%20Algorithm.cpp)

[:point_up_2: Top](#leetcode)
***
## Others

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_ASCII.cpp)  C++中ASCII码的应用

[:point_up_2: Top](#leetcode)
***
# Bottom
