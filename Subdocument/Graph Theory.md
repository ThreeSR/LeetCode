# Graph Theory

***
## 写在前面

因为主文档太长，不容易维护，所以建立子文档以辅助。

本篇内容是[主文档](https://github.com/ThreeSR/LeetCode/blob/main/README.md)中的**图论部分**的扩展。
***

| 作者 | Three |
| :----: | :----: |
| 领英 | [![](https://camo.githubusercontent.com/0c4286a2bd43a8fe3b39f93c037c63612e014c62/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d2d6c696e6b6564696e3f6c6162656c3d4c696e6b6564496e266c6f676f3d4c696e6b6564496e267374796c653d736f6369616c)](https://www.linkedin.com/in/rui-sun-999717173 "Welcome") |
| 知乎 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/%E7%9F%A5%E4%B9%8E.png?raw=true"/>](https://www.zhihu.com/people/sun-rui-55-32 "Welcome") |
| 力扣 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/LeetCode.png?raw=true"/>](https://leetcode-cn.com/u/threesr/ "Hello World!") |
| CSDN | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/csdn.png?raw=true"/>](https://blog.csdn.net/Three3333333 "Welcome") |
:blush: :trophy: | :sun_with_face: :octocat:

**永远不要认为我们可以逃避，我们的每一步都决定着最后的结局，我们的脚步正在走向我们自己选定的终点。**

[:point_up_2: Top](#graph-theory) 代表返回顶部

[:point_down:](#bottom) 代表到文档末尾

**如果你觉得我做得还行，那就给我Star吧！**

<!--特别鸣谢：[十大经典排序算法（动图演示）](https://www.cnblogs.com/onepixel/p/7674659.html) -->

*注：下面的代码由Python，Java和C++语言完成*

**Key Words :**  `C++`  `Python`  `Java` `Graph Theory` 

***

## Table

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
     + [知识图谱](#知识图谱) *optional*
+ [结尾](#bottom)        
    
***
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

**[相关原理](https://blog.csdn.net/liujian20150808/article/details/50848646)(这是我见过的最有趣的CSDN博客)**

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

[HDU_OJ 1232 畅通工程](https://github.com/ThreeSR/LeetCode/blob/main/HDU1232_%E7%95%85%E9%80%9A%E5%B7%A5%E7%A8%8B_Disjoint%20Set.cpp) 并查集的模板题  [题目链接](http://acm.hdu.edu.cn/showproblem.php?pid=1232)

[:point_up_2: Top](#graph-theory)

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

[:point_up_2: Top](#graph-theory)

### Shortest Path

最短路径问题有许多算法，这些算法跟图的种类密切相关。

首先介绍[Dijkstra's Algorithm](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)。
> Dijkstra's algorithm (or Dijkstra's Shortest Path First algorithm, SPF algorithm) is an algorithm for finding the shortest paths between nodes in a graph, which may represent, for example, road networks. It was conceived by computer scientist Edsger W. Dijkstra in 1956 and published three years later.

[C++实现](https://github.com/ThreeSR/C-Plus-Plus/blob/master/graph/Dijkstra.cpp)  [Python实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/Dijkstra's_Algorithm.py)

[:point_up_2: Top](#graph-theory)

### Network Flow

**网络流问题**

一般来说，我们关心最大流问题（maximum flow）。关于最大流问题，最出名的一类方法称为Ford-Fulkerson。之所以叫做方法，是因为它包含了几种运行时间各不相同的具体实现。这种方法是一种纲领性的思想。

为了更好地表述这种方法，需要先引入一些概念。

***

#### 基本概念

**Residual Networks**

**残存网络**

![image](https://user-images.githubusercontent.com/36061421/111569231-37e1d000-87dd-11eb-9b80-7aee46146748.png)

（b）就是残存网络，阴影路径就是增广路径p（augmenting path）。所谓残存网络，就是同向还能流多少，反向能逆着流多少。这个多少的大小需要满足流网络的基本不等式概念——流守恒和容量约束。

![image](https://user-images.githubusercontent.com/36061421/111569503-c35b6100-87dd-11eb-9bdc-1a222b1723bc.png)

所谓流守恒和容量约束，见上面的不等式。其实就是高中学过的基尔霍夫定律。这里不再赘述。

那么，残存网络有什么意义呢？它会告诉我们，在目前的流网络中，是否还有增加流量的可能性。如果存在增广路径（残存网络中可以从源点到汇点的路径），那么我们就可沿着这条路对现有网络增加流量，如果不存在增广路径，那么代表现在已经是最大流。这里，我已经说出了FF方法的基本思想：

![image](https://user-images.githubusercontent.com/36061421/111569757-4a103e00-87de-11eb-96f6-838eda8e5789.png)

针对于残存网络的图，里面还有一些名词定义，这里给出它们的正式规约：

**增广路径**

![image](https://user-images.githubusercontent.com/36061421/111569976-c4d95900-87de-11eb-8653-4e790dd17ad9.png)

**残存容量**

![image](https://user-images.githubusercontent.com/36061421/111570012-db7fb000-87de-11eb-944f-45e8f14bc2d2.png)

***

#### Maximum-flow Problem

**最大流问题**

##### Max-flow min-cut Theorem

**流网络的割**

**Cuts of flow networks**

![image](https://user-images.githubusercontent.com/36061421/111570113-0bc74e80-87df-11eb-92d1-e82b43b0bfd7.png)

![image](https://user-images.githubusercontent.com/36061421/111570199-39ac9300-87df-11eb-8a23-d0c88f9a4cc0.png)

基于上面的内容，可以引出**最大流最小割定理（Max-flow min-cut theorem）**：

![image](https://user-images.githubusercontent.com/36061421/111570302-84c6a600-87df-11eb-8395-0545c112d317.png)

***

##### Ford Fulkerson Method

**基本的Ford-Fulkerson算法**

**The basic Ford-Fulkerson algorithm**

![image](https://user-images.githubusercontent.com/36061421/111570455-db33e480-87df-11eb-9925-77ff29791a28.png)

***

参考内容：[CSDN](https://blog.csdn.net/A_Comme_Amour/article/details/79356220)

[算法导论](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/Introduction%20to%20Algorithms%203rd%20Edition.pdf)

[:point_up_2: Top](#graph-theory)

***

### Probabilistic Graphical Model

**概率图模型 PGM**

PGM大致可以分为两类：有向无环图；无向图。

第一类称为有向图模型或贝叶斯网；第二类称为无向图模型或马尔科夫网。

隐马尔科夫模型（hidden markov model）属于第一类，是有向图模型：

![image](https://user-images.githubusercontent.com/36061421/111570942-d0c61a80-87e0-11eb-9248-ce6656833a77.png)

其中变量分为两组，第一组y变量代表第i时刻系统状态，常认为是隐藏不可观测的，称为hidden variable；第二组是观测变量x。x与y均是可离散可连续，这里讨论离散。

马尔科夫随机场（markov random field）是无向图模型，属于第二类。

![image](https://user-images.githubusercontent.com/36061421/111571126-31edee00-87e1-11eb-9158-26b7c74f8ab4.png)

马尔可夫随机场有一组势函数(potential functions) ，亦称"因子" (factor) ，这是定义在变量子集上的非负实函数，主要用于定义概率分布函数。

团的定义：

![image](https://user-images.githubusercontent.com/36061421/111750350-19a7cd00-88ce-11eb-841d-fb56a5a948f8.png)

处在一个团（clique）中，则说明这个团中的**任何两个节点之间都是可以找到相通的路径的**。最大的团称为极大团。

MRF的实际应用：[马尔科夫随机场(MRF)在深度学习图像处理中的应用-图像分割、纹理迁移](https://zhuanlan.zhihu.com/p/38343732)

除了简单的有向无向的区分，还可以将图模型以判别式与生成式进行区分。上面介绍的两种模型都是生成式模型，下面的**条件随机场**（conditional random field CRF）是判别式模型。

参考：机器学习（周志华）；[PGM课程](https://www.cs.cmu.edu/~epxing/Class/10708-20/)， taught by CMU Eric Xing（邢波）。

[:point_up_2: Top](#graph-theory)
***

### PageRank算法介绍

**Introduction to PageRank Algorithm**

参考资料：[西安电子科技大学 张欣博士](https://web.xidian.edu.cn/zhangxin/model.html)；[Slice](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/PageRank%E7%AE%97%E6%B3%95%E4%BB%8B%E7%BB%8D.ppt)。

Google的创始人拉里·佩奇和谢尔盖·布林于1998年在斯坦福大学提出了PageRank算法，该算法以拉里·佩奇（Larry Page）之姓来命名。该算法是Google专有的算法，用于衡量特定网页相对于搜索引擎索引中的其他网页而言的重要程度。PageRank让链接来“投票”，到一个页面的超链接相当于对该页投一票。

对于网页重要性的评判，可以从两个方面入手：
+ **网页级别（PageRank）** 按*网页链接*广泛程度判断网页重要性，是Google表示网页重要性的综合性指标。
+ **页面分析（PageAnalysis）** 按页面标题是否出现关键词、网页内关键词出现的频率及关键词出现的位置确定哪些网页与正在执行的搜索密切相关。

综合上面的两种考量，可以得到一版搜索结果。那么，凭借我们直观的感受，哪种方法应该更加倚重呢？

`一般而言，PageRank对于排名的影响更多。`

原因也比较简单，因为一篇文章光有关键字是不够的。如果某篇文章被多篇文章引用，那么说明这篇文章在某个行业内有较高影响力。这时候再辅以关键词搜寻，可以把这篇文章放在搜索结果的前沿。反过来说，如果一篇文章仅有关键字，里面的内容却很辣鸡，那么我们没有必要把它放在搜索结果的前沿。

总结一下上面的核心思想，就是：**某网页被指向的次数越多，则它的重要性越高；越是重要的网页，所链接的网页的重要性也越高。**换句话说就是：从许多优质的网页链接过来的网页，必定还是优质网页!（优秀的同学必定还是优秀的同学O(∩_∩)O哈哈~）

根据这种说法，我们可以分析下图：

![image](https://user-images.githubusercontent.com/36061421/112567363-ae08b700-8e1b-11eb-8fd5-d1425c7917c2.png)

链向网页E的链接远远多于链向网页C的链接，但是网页C的重要性却大于网页E。这是因为网页C被网页B所链接，而网页B有很高的重要性。

一般来说，PageRank有0到10级的划分，等级越高，代表网页越受欢迎，越重要。

下面简单介绍PageRank的计算：

![image](https://user-images.githubusercontent.com/36061421/112567789-66365f80-8e1c-11eb-86be-da304c3469f3.png)

假设一个由只有4个页面组成的集合：A，B，C和D。如果所有页面都链向A，那么A的PR（PageRank）值将是B，C及D的和。

![image](https://user-images.githubusercontent.com/36061421/112567875-89610f00-8e1c-11eb-866c-ffb146f20cd5.png)

继续假设B也有链接到C，并且D也有链接到包括A的3个页面。**一个页面不能投票2次**。*所以B给每个页面半票。以同样的逻辑，D投出的票只有三分之一算到了A的PageRank上*。

![image](https://user-images.githubusercontent.com/36061421/112567998-bf05f800-8e1c-11eb-90bc-c0847ae98b55.png)

总结一下：**根据链出总数平分一个页面的PR值！**

![image](https://user-images.githubusercontent.com/36061421/112568087-e361d480-8e1c-11eb-801d-31bfd8d40ac8.png)

假设我们在上网的时侯浏览页面并选择下一个页面，这个过程与过去浏览过哪些页面无关，而仅依赖于当前所在的页面，那么这一选择过程可以认为是一个有限状态、离散时间的随机过程，其状态转移规律用`Markov链`描述。

定义转移概率矩阵:A = (aij)。

![image](https://user-images.githubusercontent.com/36061421/112605389-37d37700-8e52-11eb-8819-e7e78b2a2ad4.png)

通过这样的方法，可以得到网页的PageRank值。

PageRank的计算示例详见[PPT文档](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/PageRank%E7%AE%97%E6%B3%95%E4%BB%8B%E7%BB%8D.ppt)。因为不方便展示，所以就不再赘述。

总结一下上面的方法：虽然可以得到PageRank数值，但是计算量太大。目前Google已经针对此方法进行了优化，我们现在所讨论的PageRank算法，重要的是它所蕴含的思想。

[:point_up_2: Top](#graph-theory)

### 知识图谱

**Knowledge Graph**

[推荐算法不够精准？让知识图谱来解决](https://mp.weixin.qq.com/s/MG_SrExDkbd1vVGLex0-RA)

上面的文章中，以推荐系统举例，比较好地阐释了什么是知识图谱。其实这就是一种特殊的图结构，它可以更好地找寻深层语义的关联，给人更好的服务。
***

# Bottom
