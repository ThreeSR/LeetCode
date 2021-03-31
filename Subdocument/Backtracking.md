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

特别鸣谢：[代码随想录](https://github.com/youngyangyang04)

*注：下面的代码由Python，Java和C++语言完成*

**Key Words :**  `C++`  `Python`  `Java` `Backtracking` 

***

## Table

+ 回溯法
     + 回溯法模板
     + 组合问题
     + 子集问题
     + 排列问题
     + 一些应用
          + 解数独
          + N皇后问题
          + P/NP问题
+ [结尾](#bottom)        
    
***

## 正文

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

[LC131 Palindrome Partitioning 分割回文串](https://github.com/ThreeSR/LeetCode/blob/main/LC131_Palindrome%20Partitioning_Backtracking.cpp) 本题比较复杂，本质是组合问题，但在组合的基础上，需要对组合出来的结果进行回文判断。回文的判断用首尾指针即可。所以相对于一般的使用回溯解决的组合问题，这道题需要多一个回文判断。

分割回文串还有[LC132 Palindrome Partitioning II 分割回文串 II Python代码](https://github.com/ThreeSR/LeetCode/blob/main/LC132_Palindrome%20Partitioning%20II_DP.py)  和LC131不同的是，难度更高并且不用回溯，而是DP。

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

[:point_up_2: Top](#backtracking)

***

# Bottom
