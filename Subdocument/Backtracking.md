# Backtracking

***
## 写在前面

因为主文档太长，不容易维护，所以建立子文档以辅助。

本篇内容是[主文档](https://github.com/ThreeSR/LeetCode/blob/main/README.md)中的**回溯部分**的扩展。

***

| 作者 | Three |
| :----: | :----: |
| 领英 | [![](https://camo.githubusercontent.com/0c4286a2bd43a8fe3b39f93c037c63612e014c62/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d2d6c696e6b6564696e3f6c6162656c3d4c696e6b6564496e266c6f676f3d4c696e6b6564496e267374796c653d736f6369616c)](https://www.linkedin.com/in/rui-sun-999717173 "Welcome") |
| 知乎 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/%E7%9F%A5%E4%B9%8E.png?raw=true"/>](https://www.zhihu.com/people/sun-rui-55-32 "Welcome") |
| 力扣 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/LeetCode.png?raw=true"/>](https://leetcode-cn.com/u/threesr/ "Hello World!") |
| CSDN | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/csdn.png?raw=true"/>](https://blog.csdn.net/Three3333333 "Welcome") |
:blush: :trophy: | :sun_with_face: :octocat:

**首孝悌，次谨信；泛爱众，而亲仁；有余力，则学文。**

[:point_up_2: Top](#backtracking) 代表返回顶部

[:point_down:](#bottom) 代表到文档末尾

**如果你觉得我做得还行，那就给我Star吧！**

**特别鸣谢：[代码随想录](https://github.com/youngyangyang04)**

*注：下面的代码由Python，Java和C++语言完成*

**Key Words :**  `C++`  `Python`  `Java` `Backtracking` 

***

## Table

+ 回溯法
     + [递归简介](#递归简介)
     + [回溯法模板](#回溯法模板)
     + [组合问题](#组合问题)
     + [子集问题](#子集问题)
     + [排列问题](#排列问题)
     + 一些应用
          + 解数独
          + N皇后问题
          + P/NP问题
+ [结尾](#bottom)        
    
***

## 正文

回溯法是一种“暴力枚举”的方法，整个过程抽象出来就是一个树型结构。我们在解不同的回溯法题目时，需要关注树型结构的叶子结点和树型结构中其他结点（这句话有点像废话...）。至于哪些题目应该关注叶子结点，哪些题目关注别的结点，详见下面的内容即可。

有的朋友会很好奇，如果是暴力枚举，那么一个劲地写for循环不就完事了？确实，很多题目的暴力解都是一个劲地堆for循环即可。但回溯法解决的问题是那些你很不好写for循环枚举的题目。

所以在一开头，我希望大家对回溯法有一个清晰的认知：**它的本质是暴力枚举**。此外，它对于初学者不友好，不容易懂；因为是暴力枚举的本质，效率也不容易提升，只能在特定情况下剪剪枝。尽管它槽点满满，但解决很多题目的时候，它都不可或缺。不管怎么说，回溯法都是必学的算法之一。

因为回溯的过程非常需要对递归有比较充分的认知，所以我先对递归进行简要介绍。

### 递归简介

一般来说，递归方法可以达到简化代码的做法，但递归的代码往往比较抽象难懂，写的时候很容易出错。这还都不是最难受的，最糟的是因为对于递归栈的使用，可能导致精简代码背后需要的开销比复杂一些的代码还要多。所以我本人目前不太爱用递归，还是比较循规蹈矩一些。但针对于回溯法的学习，我们是需要广泛使用递归的。

针对于递归的过程，下面我给大家分享两个示例，一个来自于课件，另一个来自于[算法图解](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/%E7%AE%97%E6%B3%95%E5%9B%BE%E8%A7%A3.pdf)：

课件：

![递归调用过程](https://user-images.githubusercontent.com/36061421/113095876-dbdc6a00-9226-11eb-9f87-58a3fabd696e.jpg)

[算法图解](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/%E7%AE%97%E6%B3%95%E5%9B%BE%E8%A7%A3.pdf)：

针对于以下python代码的递归分析
```python
def fact(x): # 阶乘
     if x == 1:
          return 1
     else:
          return x * fact(x-1)
```

![image](https://user-images.githubusercontent.com/36061421/113096057-2958d700-9227-11eb-95a7-574281a9758c.png)

![image](https://user-images.githubusercontent.com/36061421/113096154-48efff80-9227-11eb-86f4-bc3a380ac785.png)

如果想看原文，可以点击[算法图解](https://github.com/ThreeSR/Good-Learning-Resources/blob/master/%E7%AE%97%E6%B3%95%E5%9B%BE%E8%A7%A3.pdf)进行下载，在36页。

给出两个示例的原因在于：
+ 通过课件中的图，为日后在草稿纸上分析递归打下坚实的基础；
+ 通过算法图解的图，更加深入地理解递归代码带来的作用。

**这一块一定要好好理解**，尤其是算法图解中递归栈的内容变化。这是为下面的理解奠定基础。

### 回溯法模板 

参考文档：[关于回溯算法，你该了解这些！](https://mp.weixin.qq.com/s/gjSgJbNbd1eAA5WkA-HeWw)

我先把回溯法的模板给出：

```C++
void backtracking(参数) {
    if (终止条件) {
        存放结果;
        return;
    }

    for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
        处理节点;
        backtracking(路径，选择列表); // 递归
        回溯，撤销处理结果
    }
}
// 模板参考自：代码随想录
```

看着这样的模板，你第一眼肯定看不出有啥名堂。不过别着急，我一开始说过了，**回溯可以抽象成树型结构**。这代表着下面可以用树型结构可视化上述代码。

![image](https://user-images.githubusercontent.com/36061421/113100896-9a4fbd00-922e-11eb-93f5-22eaded708e4.png)

如果你已经对递归有了比较深刻的了解，那么可以大致脑补出上面的树型结构。如果没办法理解上面的结构，也没关系。后续涉及到具体题目的时候，我会把上面的“操作”和“集合”变成具体内容，方便读者朋友理解。到此为止，你需要做的，至少是明白整个回溯的体系结构。

<!--**（这句话是给我自己提醒） 模板在使用的时候，一定一定要记住，在迭代过程中，i和index的关系分清楚！！调用backtracking的时候，是i + 1还是index + 1想清楚！！错太多次了！**-->

总的来说，回溯法做的事情就是暴力枚举，只不过我们通过回溯这种写法，让暴力枚举的这个过程“优美”了一些。（可能这就是“暴力美学”吧）那么会有什么问题涉及到“暴力美学”呢？什么问题没办法用for循环的堆叠求解呢？

### 组合问题

[LC77 Combinations 组合](https://github.com/ThreeSR/LeetCode/blob/main/LC77_Combinations_Backtracking.cpp)  最基础的回溯法题目，也是最简单的，可以让人一下明白for循环没办法解决回溯法类型题的题目

[LC39 Combination Sum 组合总和](https://github.com/ThreeSR/LeetCode/blob/main/LC39_Combination%20Sum_Backtracking.cpp)

[LC40 Combination Sum II 组合总和2](https://github.com/ThreeSR/LeetCode/blob/main/LC40_Combination%20Sum%20II_Backtracking.cpp)

[LC216 Combination Sum III 组合总和3](https://github.com/ThreeSR/LeetCode/blob/main/LC216_Combination%20Sum%20III_Backtracking.cpp)

实际应用：

[LC17 Letter Combinations of a Phone Number 电话号码中的字母组合](https://github.com/ThreeSR/LeetCode/blob/main/LC17_Letter%20Combinations%20of%20a%20Phone%20Number_Backtracking.cpp)

[LC131 Palindrome Partitioning 分割回文串](https://github.com/ThreeSR/LeetCode/blob/main/LC131_Palindrome%20Partitioning_Backtracking.cpp) 本题比较复杂，本质是组合问题，但在组合的基础上，需要对组合出来的结果进行回文判断。回文的判断用首尾指针即可。所以相对于一般的使用回溯解决的组合问题，这道题需要多一个回文判断。

分割回文串还有[LC132 Palindrome Partitioning II 分割回文串 II Python代码](https://github.com/ThreeSR/LeetCode/blob/main/LC132_Palindrome%20Partitioning%20II_DP.py)  和LC131不同的是，难度更高并且不用回溯，而是DP。

[LC93 Restore IP Addresses 复原IP地址](https://github.com/ThreeSR/LeetCode/blob/main/LC93_Restore%20IP%20Addresses_Backtracking.cpp)

### 子集问题

[LC78 Subsets 子集](https://github.com/ThreeSR/LeetCode/blob/main/LC78_Subsets_Backtracking.cpp)

[LC90 Subsets II 子集2](https://github.com/ThreeSR/LeetCode/blob/main/LC90_Subsets%20II_Backtracking.cpp)

[LC491 Increasing Subsequences 递增子序列 解法一](https://github.com/ThreeSR/LeetCode/blob/main/LC491_Increasing%20Subsequences_Backtracking%20I.cpp)

[LC491 Increasing Subsequences 递增子序列 解法二](https://github.com/ThreeSR/LeetCode/blob/main/LC491_Increasing%20Subsequences_Backtracking%20II.cpp)

### 排列问题

[LC46 Permutations 全排列](https://github.com/ThreeSR/LeetCode/blob/main/LC46_Permutations_Backtracking.cpp)

[LC47 Permutations II 全排列2](https://github.com/ThreeSR/LeetCode/blob/main/LC47_Permutations%20II_Backtracking.cpp)

### 比较难的应用问题

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

[剑指Offer12 矩阵中的路径](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_12_%E7%9F%A9%E9%98%B5%E4%B8%AD%E7%9A%84%E8%B7%AF%E5%BE%84_Backtracking.cpp)  本题是很好的回溯法的应用，代码思路很好，巧妙地利用了回溯背后蕴含的树形结构，建议点开链接查看。

[:point_up_2: Top](#backtracking)

***

# Bottom
