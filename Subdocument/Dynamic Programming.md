# Dynamic Programming

***
## 写在前面

因为主文档太长，不容易维护，所以建立子文档以辅助。

本篇内容是[主文档](https://github.com/ThreeSR/LeetCode/blob/main/README.md)中的**动态规划部分**的扩展。
***

| 作者 | Three |
| :----: | :----: |
| 领英 | [![](https://camo.githubusercontent.com/0c4286a2bd43a8fe3b39f93c037c63612e014c62/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d2d6c696e6b6564696e3f6c6162656c3d4c696e6b6564496e266c6f676f3d4c696e6b6564496e267374796c653d736f6369616c)](https://www.linkedin.com/in/rui-sun-999717173 "Welcome") |
| 知乎 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/%E7%9F%A5%E4%B9%8E.png?raw=true"/>](https://www.zhihu.com/people/sun-rui-55-32 "Welcome") |
| 力扣 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/LeetCode.png?raw=true"/>](https://leetcode-cn.com/u/threesr/ "Hello World!") |
| CSDN | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/csdn.png?raw=true"/>](https://blog.csdn.net/Three3333333 "Welcome") |
:blush: :trophy: | :sun_with_face: :octocat:

**以中有足乐者，不知口体之奉不若人也。**

[:point_up_2: Top](#dynamic-programming) 代表返回顶部

[:point_down:](#bottom) 代表到文档末尾

**如果你觉得我做得还行，那就给我Star吧！**

特别鸣谢：

*注：下面的排序代码由Python，Java和C++语言完成*

**Key Words :**  `C++`  `Python`  `Java` `Dynamic Programming` 

***

## Table

+ [动态规划](#正文)
     + [编辑距离（NLP应用）](#编辑距离)
     + [打家劫舍](#打家劫舍)
     + [买卖股票的最佳时机](#买卖股票的最佳时机)
     + [最长递增子序列问题](#最长递增子序列问题)
     + [最长重复子串问题](#最长重复子串问题)
     + [区间动态规划](#区间动态规划)
     + [背包问题](#背包问题)
          + [0-1背包问题](#0-1背包问题)
          + [完全背包问题](#完全背包问题)
          + [动态规划下的排列组合问题](#动态规划下的排列组合问题)
          
***

## 正文
          
[LC746 Min Cost Climbing Stairs 爬楼梯的最小代价](https://github.com/ThreeSR/LeetCode/blob/main/LC746_Min%20Cost%20Climbing%20Stairs_DP.cpp)  说到爬楼梯问题，有几道力扣题目都是关于此。比如：[LC90 爬楼梯](https://github.com/ThreeSR/LeetCode/blob/main/LC90_ClimbStairs.py) || [剑指 Offer 10- II_青蛙跳台阶问题 C++版](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87%20Offer%2010-%20II_%E9%9D%92%E8%9B%99%E8%B7%B3%E5%8F%B0%E9%98%B6%E9%97%AE%E9%A2%98_DP.cpp)  这里青蛙跳台阶本质和[LC90](https://github.com/ThreeSR/LeetCode/blob/main/LC90_ClimbStairs.py)一样。 其他语言的青蛙跳台阶：[Python](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87%20Offer%2010-%20II_%E9%9D%92%E8%9B%99%E8%B7%B3%E5%8F%B0%E9%98%B6%E9%97%AE%E9%A2%98_DP.py) 

[LC91 Decode Ways 解码方法](https://github.com/ThreeSR/LeetCode/blob/main/LC91_Decode%20Ways_DP.cpp)  思路详见：[LC91_Ans.png](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC91_Ans.png)  dp[i]代表str[0..i]的解码方法总数；本题思路很简洁巧妙，可见Solution中的LC91_Ans.png图片，那里有详细思路解析；或者题目中的参考链接，里面还有优化的思路；本题值得注意的是：字母只有26个，标号只能是从1到26。所以在DP过程中，要好好利用这个特性去判断。

[LC1137 N-th Tribonacci Number 第N个泰波那契数](https://github.com/ThreeSR/LeetCode/blob/main/LC1137_N-th%20Tribonacci%20Number_DP.cpp) 使用滚动数组求解，节省空间。

***

### 编辑距离

**Edit Distance**

[LC392 Is Subsequence 判断子序列](https://github.com/ThreeSR/LeetCode/blob/main/LC392_Is%20Subsequence_DP.cpp)  本题可以使用dp也可以使用指针，指针更简单，但dp可以更好地为下面的编辑距离铺垫，因为从编辑距离的角度看，这题仅仅涉及删除。dp转移的过程有点像[LC115 Distinct Subsequences](https://github.com/ThreeSR/LeetCode/blob/main/LC115_Distinct%20Subsequences_DP.cpp)。关于dp的遍历顺序，可以参见：[遍历顺序](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC392_Ans1.jpg)；关于dp表格的情况，可以参见：[dp表格](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC392_Ans2.jpg)。

[LC583 Delete Operation for Two Strings 两个字符串的删除操作](https://github.com/ThreeSR/LeetCode/blob/main/LC583_Delete%20Operation%20for%20Two%20Strings_DP.cpp)  本题只涉及使用动态规划完成删除操作。是LC72的预热，其中：`dp[i][j]：以i-1为结尾的字符串word1，和以j-1位结尾的字符串word2，想要达到相等，所需要删除元素的最少次数。`我们在写状态转移方程的时候，需要关注单词中`字符相同`和`不相同`的两种情况。如果相同，那么直接承接`dp[i][j] = dp[i - 1][j - 1];`；不相同的话，分三种情况，一种是删除word1，一种是删word2，最后是各自删除自己一次，我们取最小，所以：`dp[i][j] = min({dp[i - 1][j - 1] + 2, dp[i - 1][j] + 1, dp[i][j - 1] + 1});`。

[LC72 Edit Distance 编辑距离 python](https://github.com/ThreeSR/LeetCode/blob/main/LC72_Edit%20Distance.py) || [C++ Code](https://github.com/ThreeSR/LeetCode/blob/main/LC72_Edit%20Distance_DP.cpp)  这是一道很有名的动态规划题目，值得一做。具体解题思路见链接。最大的难点还是dp[i][j]代表的含义，这里代表的是从word1前i个字母到word2前j个字母所需要的变化步数。从广义上看，变化无非增删改，增加或删除是从word1到word2的变动而言，改就是字母直接变动，比如从a变到b。明确这些内容之后，可以写出动态转移方程。具体写法见链接。

令人欣喜的是，它还有一些很实际的衍生应用，比如：

NLP中的[Auto-Correct](https://github.com/ThreeSR/Coursera/tree/main/Natural%20Language%20Processing%20Specialization%20in%20Coursera/NLP%20with%20Probabilistic%20Models/week1)  这是自然语言处理中的一个应用，这和力扣的编辑距离切合。（如果对自然语言处理有兴趣，可以上[Coursera中自然语言处理的课程](https://www.coursera.org/learn/probabilistic-models-in-nlp/home/welcome)，在我的GitHub中有相应的[参考答案](https://github.com/ThreeSR/Coursera/tree/main/Natural%20Language%20Processing%20Specialization%20in%20Coursera)。当然了，也很欢迎上[国立台湾大学李宏毅老师的课](https://www.youtube.com/channel/UC2ggjtuuWvxrHHHiaDH1dlQ)，都很不错。）

欣喜的原因在于，并不是所有算法问题都可以在实际中找到很切合的技术点，但是这道题做到了。

***

[LC714 Best Time to Buy and Sell Stock with Transaction Fee 带有手续费的买卖股票最佳时机 C++版](https://github.com/ThreeSR/LeetCode/blob/main/LC714_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Transaction%20Fee_DP.cpp)  状态转移方程的详细解答见[LC714_Ans](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC714_Ans.jpg)   ||  [Java版代码](https://github.com/ThreeSR/LeetCode/blob/main/LC714_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Transaction%20Fee_DP.java)

[LC123 Best Time to Buy and Sell Stock III](https://github.com/ThreeSR/LeetCode/blob/main/LC123_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20III_DP.cpp)  根据题目要求，我们可以设定有限个状态，并根据这些状态进行dp数组的设计。本题的难点在于有限制买卖次数，但同时我们可以利用有限的买卖次数进行不同情况的分类，并根据分类依据进行动态规划。

[LC63 Unique Paths II](https://github.com/ThreeSR/LeetCode/blob/main/LC63_Unique%20Paths%20II_DP.cpp)  在[力扣62](https://github.com/ThreeSR/LeetCode/blob/main/LC62_Unique%20Paths_Math.cpp)的基础上，增加了障碍物。遇到障碍物，dp初始化的时候设为0或者之后遇到了进行continue即可，因为dp本来初始值就是零。

[LC343 Integer Break 整数拆分](https://github.com/ThreeSR/LeetCode/blob/main/LC343_Integer%20Break_DP.cpp)  dp[i]代表拆分数字i，可以得到的最大乘积dp[i]；dp[2]开始动归；dp[i] = max(dp[i], max((i - j) * j, dp[i - j] * j)); 状态转移方程。

[LC132 Palindrome Partitioning II 分割回文串 II Python代码](https://github.com/ThreeSR/LeetCode/blob/main/LC132_Palindrome%20Partitioning%20II_DP.py) dp[i]的定义： 范围是[0, i]的回文子串，最少分割次数是dp[i]；**非常pythonic，很巧妙的回文判断函数：return s == s[::-1]。**本题和[LC131](https://github.com/ThreeSR/LeetCode/blob/main/LC131_Palindrome%20Partitioning_Backtracking.cpp)很不相同，LC131使用的是回溯法，本题使用的是动态规划，并且难度更高。其实本题使用回溯也可以求解，但是TLE，所以还是需要使用DP。有的时候，使用DP还是回溯，是根据题目要求而定的。

[LC115 Distinct Subsequences 不同的子序列](https://github.com/ThreeSR/LeetCode/blob/main/LC115_Distinct%20Subsequences_DP.cpp) 本题和LC72编辑距离有些相似，和KMP处理的字符串匹配也有相似，但本题有重复计数的需求，所以不是简单地使用KMP就可以得到结果。这题偏难且晦涩难懂，详见链接。

[LC53 Maximum Subarray 最大子序和](https://github.com/ThreeSR/LeetCode/blob/main/LC53_Maximum%20Subarray_DP.cpp)  用DP保存局部最优值，再维护一个全局最优值即可。**和一般的DP不同，这一题需要输出的是维护好的全局最优值，而不是经常见到的dp[nums.size() - 1]**...

[LC53 Maximum Subarray v2 最大子序和](https://github.com/ThreeSR/LeetCode/blob/main/LC53_Maximum%20Subarray%20v2_DP.cpp)  和上面的链接一样...

***
### 打家劫舍

这是力扣中非常经典的DP类题目。一共三道题，按顺序难度层层递进。

[LC198 House Robber 打家劫舍](https://github.com/ThreeSR/LeetCode/blob/main/LC198_House%20Robber_DP.cpp) 经典的DP题目，比较简单

[LC213 House Robber II 打家劫舍 II](https://github.com/ThreeSR/LeetCode/blob/main/LC213_House%20Robber%20II_DP.cpp)  相较于第一题，第二题将房屋分布设计成了环状。我们需要分两种情况讨论：1.掐头留尾；2.留头掐尾。第三种情况掐头掐尾已经包含于这两种情况之中。接下来，根据两种情况不同的房屋“考虑”范围，调用前面一题的API求解即可。所以本题相当于LC198的叠加。

这里一定要注意一点：**“考虑”不等于“偷盗”。这里的考虑不是偷盗。考虑的房屋可能被偷，没有考虑的肯定不会被偷。这就是考虑和偷盗之间的关系。** *这是整个类型题中很容易出错的点。*

关于上面两道题的更多内容，详见[我的力扣题解](https://leetcode-cn.com/problems/house-robber-ii/solution/ju-yi-fan-er-yi-wen-dai-ni-shua-liang-da-7jlo/)。

[LC337 House Robber III 打家劫舍 III](https://github.com/ThreeSR/LeetCode/blob/main/LC337_House%20Robber%20III_DP.cpp)  **树型动态规划经典题目**  后序遍历，然后根据题目的偷盗要求，分成当前节点偷与不偷两大类，进行分析。**很值得学习**

总的来说，写打家劫舍系列题目可以学到很多传统DP的知识。
***
[:point_up_2: Top](#dynamic-programming)

***

### 买卖股票的最佳时机

这是一个很经典的力扣系列题型，一共包含六道题。

在这个题型中，会用到类似于dp[i][1]的dp数组。这里先强调：**它表示的是第i天，买入股票的状态，并不是说一定要第i天买入股票，这是很多人容易陷入的误区！！**

[LC121 Best Time to Buy and Sell Stock 买卖股票的最佳时机](https://github.com/ThreeSR/LeetCode/blob/main/LC121_Best%20Time%20to%20Buy%20and%20Sell%20Stock_DP.cpp)  建造一个二维数组，dp[i][0]或者dp[i][1]分别对应第i天的买（0）或卖（1）操作。针对初始化，也是第一天买或者卖的分析，之后写出状态转移方程：`||dp[i][0] = max(dp[i - 1][0], -prices[i]); // 代表第i天买或者保持原有状态  dp[i][1] = max(dp[i - 1][1], prices[i] + dp[i - 1][0]); // 赎回或者是保持原状 ||` 即可。注意：如果最后想要获利最多，那么需要在最后一刻把股票卖出去，不能烂在手里！

除了这个经典版本的代码，还有：

1.滚动数组（rolling array）的优化：

**滚动数组是一个经常用于DP的优化空间的方法。**众所周知，DP是一个用空间换时间的方法，我们需要在DP的空间上进行一定的优化。

[LC121 Best Time to Buy and Sell Stock 买卖股票的最佳时机 滚动数组版本](https://github.com/ThreeSR/LeetCode/blob/main/LC121_Best%20Time%20to%20Buy%20and%20Sell%20Stock_DP(Rolling%20Array).cpp)  这里可以使用滚动数组，是因为DP过程中，依赖的前序状态只是前一天的操作，所以%2处理即可，用这种方法不用浪费多余空间。

2.模拟法求解：

[LC121 Best Time to Buy and Sell Stock 买卖股票的最佳时机 模拟法版本  Python](https://github.com/ThreeSR/LeetCode/blob/main/LC121_Best%20Time%20to%20Buy%20and%20Sell%20Stock_Naive%20Algorithm.py)  思路比较巧妙，是经典的利用：**给最大值赋最小值，给最小值赋最大值的方法**。交叉赋值，得到最佳结果。这种思想在别的题目中也有体现，往往有“四两拨千斤”的效果。

注：[剑指Offer_63 股票的最大利润](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_63_%E8%82%A1%E7%A5%A8%E7%9A%84%E6%9C%80%E5%A4%A7%E5%88%A9%E6%B6%A6_DP.cpp)和本题相同。

[LC122 Best Time to Buy and Sell Stock II 买卖股票的最佳时机 II](https://github.com/ThreeSR/LeetCode/blob/main/LC122_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II_DP.cpp)  本题和LC121基本一致，唯一不同在于“可以多次交易”，但每次交易只能一笔股票。所以大体而言，本题代码和LC121相同，`dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]); // 注意这里是和121. 买卖股票的最佳时机唯一不同的地方。`不同的原因在于可以多次交易！

同样地，本题也可以用滚动数组优化：

[LC122 Best Time to Buy and Sell Stock II 买卖股票的最佳时机 II 滚动数组版本](https://github.com/ThreeSR/LeetCode/blob/main/LC122_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II_DP(Rolling%20Array).cpp)

除了DP，还可以用贪心算法：

[LC122 Best Time to Buy and Sell Stock II 买卖股票的最佳时机 II 贪心算法版本](https://github.com/ThreeSR/LeetCode/blob/main/LC122_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II_Greedy%20Algorithm.cpp)  将股票赚钱变成每两天进行交易的行为，贪心地加上所有为正值的利润，就是max profit

[LC123 Best Time to Buy and Sell Stock III 买卖股票的最佳时机 III](https://github.com/ThreeSR/LeetCode/blob/main/LC123_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20III_DP.cpp)  本题对DP的要求比较高，需要仔细对自己定义的dp数组进行分类讨论。这是因为本题限制了买卖次数最多是两次，就是最多两次买，两次卖。我们需要分5种情况分析，详见代码。

[LC188 Best Time to Buy and Sell Stock IV 买卖股票的最佳时机 IV](https://github.com/ThreeSR/LeetCode/blob/main/LC188_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20IV_DP.cpp) 相较于前面的买卖股票III，这一题将前一题的一些概念更加抽象化。**这是因为我们没办法像在III中，对各种情况进行枚举。**对于数组的定义：除了0以外，偶数就是卖出，奇数就是买入。不同于III中，我们将各个情况枚举，分类讨论。这边我们根据定义，总结出规律。

[LC309 Best Time to Buy and Sell Stock with Cooldown 买卖股票的最佳时机含冷冻期](https://github.com/ThreeSR/LeetCode/blob/main/LC309_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Cooldown_DP.cpp)  在II的基础上，增加了冷冻期。增加了冷冻期之后，需要考虑它带来的变化。还是对题目本身进行分类讨论，然后求解。具体见链接。

[LC714 Best Time to Buy and Sell Stock with Transaction Fee 买卖股票的最佳时机含手续费 C++版](https://github.com/ThreeSR/LeetCode/blob/main/LC714_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Transaction%20Fee_DP.cpp)  在买卖股票的最佳时机II的基础上，增加手续费。注意交易操作的时候，扣去手续费即可。此处dp是一维数组，更加节省空间，值得学习。

此外，还有[java版本](https://github.com/ThreeSR/LeetCode/blob/main/LC714_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Transaction%20Fee_DP.java)。


**小结**

+ 这一类型的题目中，I显然是最简单的，它要求只能买卖一次，并且没有类似于冷冻期，手续费这些杂乱的要求；
+ II在I的基础上，将买卖次数从一次变成不限次数。带来的变化主要体现在DP的状态转移方程上；
+ III在II的基础上，限制了买卖次数，必须至多两次。针对于这个变化，我们需要控制交易次数。最好的控制方法就是枚举，不超过限制就好；
+ IV在III的基础上，将限制的次数变成了一个变量k。这时候我们需要针对k来定义dp，写状态转移方程。主要难点在于将规律抽象出来，并加以应用；
+ 含冷冻期的题目建立在II的基础上，附带冷冻期这样的条件，使得分类讨论的难度加大；
+ 含手续费也建立在II的基础上，但难度不高，因为只是在原有状态转移下减去手续费即可。

总的来说，股票买卖的类型题中，变式主要来自于两个方面：1.交易次数的限制；2.交易程序的要求。

**最后，再次强调：以dp[i][1]为例，表示的是第i天，买入股票的状态，并不是说一定要第i天买入股票，这是很多人容易陷入的误区！！**

***
### 最长递增子序列问题

**Longest Increasing Subsequence**

LIS问题在下面两道题中，可以交叉着看。LC354是LC300的进阶版本。

[LC300 Longest Increasing Subsequence 最长递增子序列](https://github.com/ThreeSR/LeetCode/blob/main/LC300_Longest%20Increasing%20Subsequence_DP.cpp) dp[i]表示以nums[i]结尾的最长子序列长度；dp初始化，每个数字自己都可以成为一个序列，所以长度为1；递推公式：if (nums[j] < nums[i]) dp[i] = max(dp[i], dp[j] + 1); // 如果小于，则可以加进序列中 ；***max_element(dp.begin(), dp.end());** // 返回vector里面的最大数值* 这种表达值得学习。

[LC354 Russian Doll Envelopes 俄罗斯套娃信封问题](https://github.com/ThreeSR/LeetCode/blob/main/LC354_Russian%20Doll%20Envelopes_DP.cpp)  **着重理解本题排序设定的背后原因**，其余内容和LC300一样。

[LC674 Longest Continuous Increasing Subsequence 最长连续递增序列 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC674_Longest%20Continuous%20Increasing%20Subsequence_DP.cpp) 和LC300相比，多了“连续”的要求，但其实更简单了。

[LC674 Longest Continuous Increasing Subsequence 最长连续递增序列 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC674_Longest%20Continuous%20Increasing%20Subsequence_Naive%20Algorithm.py)  因为比较简单，所以本题也可用模拟法求解。

***

### 最长重复子串问题

[LC718 Maximum Length of Repeated Subarray 最长重复子数组](https://github.com/ThreeSR/LeetCode/blob/main/LC718_Maximum%20Length%20of%20Repeated%20Subarray_DP.cpp)  本题需要求的是**连续**的最长子数组。dp[i][j]代表：以下标i - 1为结尾的A，和以下标j - 1为结尾的B，最长重复子数组长度为dp[i][j]。dp的递推过程中，我们考虑当下的字符是否是相等的，如果相等，那么长度加一，如果不等，不用管（因为初值置零）。最后我们维护最大值即可。

[LC1143 Longest Common Subsequence 最长公共子序列](https://github.com/ThreeSR/LeetCode/blob/main/LC1143_Longest%20Common%20Subsequence_DP.cpp)  和上面的题目很像，只是在递推的时候略有不同，因为这时候**不要求连续**。所以有这种情况：dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); —— 取一个最大值即可。

此外，本题还有[Python版代码](https://github.com/ThreeSR/LeetCode/blob/main/LC1143_longestCommonSubsequence_DP.py)和[递归解法](https://github.com/ThreeSR/LeetCode/blob/main/LC1143_longestCommonSubsequence.py)。

[LC1035 Uncrossed Lines 不相交的线](https://github.com/ThreeSR/LeetCode/blob/main/LC1035_Uncrossed%20Lines_DP.cpp)  本题乍一看很难，但其实仔细分析，如果满足不相交的线的要求，那就是求LC1143的内容。所以本质而言，本题和LC1143一样。（其实你会发现，代码真的一样。）

***

### 区间动态规划

这是一类经典的动态规划题型，标志性特征是：`dp[i][j]代表区间[i, j]上面的内容`。所以称其为`区间动态规划`。

[LC647 Palindromic Substrings 回文子串 动态规划解](https://github.com/ThreeSR/LeetCode/blob/main/LC647_Palindromic%20Substrings_DP.cpp)  本题需要让你在字符串string中找到其中`有多少个回文子串`。可以有两种解法，一种是中心拓展，另一种是动态规划。

如果是DP，那么：dp[i][j]：表示区间范围[i,j]（注意是左闭右闭）的子串是否是回文子串，如果是dp[i][j]为true，否则为false。之后判断s[i]与s[j]是否是相同的，决定后续的处理。需要注意的是：1.特殊情况：`a`与`aa`的处理；2.for循环遍历的顺序是从下到上，从左到右。

对于中心拓展方法，就是比较naive的想法，根据题目定义与要求入手，详见代码即可。[LC647 Palindromic Substrings 回文子串 中心拓展解](https://github.com/ThreeSR/LeetCode/blob/main/LC647_Palindromic%20Substrings_Double%20Pointer.cpp)；本题还有别的语言实现，详见相关文档即可。

[LC5 Longest Palindrome 最长回文子串 Python](https://github.com/ThreeSR/LeetCode/blob/main/LC5_Longest%20Palindrome_DP.py)  本题旨在寻找字符串中的最长回文子串。dp[i][j]：表示区间范围[i,j]（注意是左闭右闭）的子串是否是回文子串，如果是dp[i][j]为true，否则为false。在是回文子串的基础上，去计算每一个回文子串的长度，留下最大值maxlen和maxlen下string中的起点start即可，便于最后将最长回文子串输出。这道题是基于力扣647的。

[LC516 Longest Palindromic Subsequence 最长回文子序列](https://github.com/ThreeSR/LeetCode/blob/main/LC516_Longest%20Palindromic%20Subsequence_DP.cpp)  这里首先应该说明`子序列`和`子串`的不同：以"abcdaa"为例，最长回文子序列是aaa，最长回文子串是aa。`子序列`没有要求其中的字符是连续的；`子串`有要求其中的字符是相连的。明白了这一点之后，便于下面的解题。

dp[i][j]：字符串s在[i, j]范围内最长的回文子序列的长度为dp[i][j]。我们的判断还是依照遍历从下到上，从左到右的顺序，比较s[i]和s[j]是否相等，如果相等，那么dp加二，如果不等，那么取`max(dp[i + 1][j], dp[i][j - 1]);`即可。之所以可以在不相等的时候这么取值，一方面是我们需要最大值，另一方面需要对dp的过程比较理解，那么不难得出这样的结果。dp就是一步步地走向目的地的，它在中途会存储步骤中计算出的内容。

详细的状态转移方程详见链接。参考链接中有dp表格的图示，也可以参考。

**上面的三道题，在代码框架上极为相似。**

[LC87 Scramble String 扰乱字符串](url) pending

[LC312  戳气球](url) pending


***

### 背包问题

####  0-1背包问题

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

这是动态规划中非常经典的子问题，**基本内容介绍会在后续补上。**

[LC1049 Last Stone Weight II 最后一块石头的重量II](https://github.com/ThreeSR/LeetCode/blob/main/LC1049_Last%20Stone%20Weight%20II_DP.cpp)  本题是经典的0-1背包问题，需要对题目进行0-1背包问题的建模，背包重量是石头总重的一半，需要尽量用现有石头填满这个背包，之后用背包外的石头重量减去背包中的石头重量就可以得到结果。

[LC416 Partition Equal Subset Sum 分割等和子集 C++代码](https://github.com/ThreeSR/LeetCode/blob/main/LC416_Partition%20Equal%20Subset%20Sum_DP.cpp) || [Python代码](https://github.com/ThreeSR/LeetCode/blob/main/LC416_Partition%20Equal%20Subset%20Sum.py)  这道题也是经典的0-1背包问题，和[LC1049 Last Stone Weight II 最后一块石头的重量II](https://github.com/ThreeSR/LeetCode/blob/main/LC1049_Last%20Stone%20Weight%20II_DP.cpp)的思路基本一模一样。

[LC474 Ones and Zeros 一和零](https://github.com/ThreeSR/LeetCode/blob/main/LC474_Ones%20and%20Zeroes_DP.cpp)  0-1背包问题，但它是**二维的0-1背包问题**，和一般题目不同。

[LC494 Target Sum 目标和](https://github.com/ThreeSR/LeetCode/blob/main/LC494_Target%20Sum_DP.cpp)  本题难点在于：**1.如何对题目进行0-1背包的建模，也就是如何找寻bag weight 或 bag size；2.不同于一般的0-1背包模板，它的递推公式是dp[j] = dp[j] + dp[j - nums[i]];，而不是dp[i][j] = max(dp[i][j], dp[i - zeroNum][j - oneNum] + 1);。原因在题目链接里面有说。对于组合类的题目（不需要枚举，只需要知道组合个数，不需要用回溯），动归模板基本都是dp[j] = dp[j] + dp[j - nums[i]];的类型。**

[:point_up_2: Top](#dynamic-programming)

***

####  完全背包问题

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

但是也要注意：**模板对应的是一般情况下的完全背包问题，所以在完全背包中，大部分情况可以交换for循环位置，也有不能交换的时候！这就是下面谈到的排列组合问题。**

[LC518 Coin ChangeII 零钱兑换II C++版](https://github.com/ThreeSR/LeetCode/blob/main/LC518_Coin%20Change%202_DP.cpp)  本题就属于不能交换for循环位置的题目。这是因为它求的是组合数，和前面的[LC494 Target Sum 目标和](https://github.com/ThreeSR/LeetCode/blob/main/LC494_Target%20Sum_DP.cpp)类似，它并不是传统的套用模板的题目。**在外循环为coin时，求的是组合数；在外循环为amount时，求的是排列数**。具体内容见题目中的链接。

[LC518 Coin ChangeII 零钱兑换II Python版](https://github.com/ThreeSR/LeetCode/blob/main/LC518_Coin%20ChangeII_DP.py)

[LC139 Word Break 单词拆分 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC139_Word%20Break%20v2_DP.cpp)  本题可以建模成完全背包问题，其中背包是string，物品是单词集合中的单词；递推公式比较特殊，是**字符串的处理**；注意两个用法：1.substr的用法：substr(起始位置，截取的个数)；2.wordSet.find(word) != wordSet.end() 的意思是：在wordset中找不到word这个单词。 关于本题的其他版本代码：[另一个版本的C++](https://github.com/ThreeSR/LeetCode/blob/main/LC139_Word%20Break_DP.cpp)；[Python代码](https://github.com/ThreeSR/LeetCode/blob/main/LC139_Word%20Break_DP.py)。

***

#### 动态规划下的排列组合问题

关于排列组合问题，其实并不陌生。在回溯法就已经学过。但力扣中有那么一种排列组合问题，**它不需要把每一个结果都枚举出来，它只需要返回结果的个数**。遇到这种题，用DP即可。

我们要明白，回溯的好处是暴力枚举，可以把所有结果都完整呈现出来，但是缺点是浪费时间。如果一些题目不需要那么完整的结果，我们就不应该用回溯去浪费时间。遇到能用DP解决的问题就用DP，不然很可能超时。使用回溯其实是一种不得已的办法。

那么这类问题的递推公式如何呢？

不考虑nums[i]的情况下，填满容量为j - nums[i]的背包，有dp[j - nums[i]]中方法。

那么只要搞到nums[i]的话，凑成dp[j]就有dp[j - nums[i]] 种方法。

举一个例子,nums[i] = 2：dp[3]，填满背包容量为3的话，有dp[3]种方法。

那么只需要搞到一个2（nums[i]），有dp[3]方法可以凑齐容量为3的背包，相应的就有多少种方法可以凑齐容量为5的背包。

那么需要把 这些方法累加起来就可以了，**dp[i] += dp[j - nums[j]]**

所以求组合类问题的公式，都是类似这种。

按照排列和组合的不同情况，代码中for循环的顺序也不同：

**如果求组合数就是外层for循环遍历物品，内层for遍历背包。**

**如果求排列数就是外层for遍历背包，内层for循环遍历物品。**

什么是物品？ 形如：for (int i = 0; i < coins.size(); i++) { // 遍历物品

什么是背包？ 形如：for (int j = coins[i]; j <= amount; j++) { // 遍历背包

从上面的情况可以看出：**动归下的排列组合问题其实是包含有完全背包和0-1背包的问题**。一般的完全背包问题中，我们不在乎for循环的顺序。但如果题目有很强的排列组合指向，那么我们需要定下来for循环的顺序。

模板（动归排列组合+0-1背包）
```C++
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) sum += nums[i];
        if (S > sum) return 0; // 此时没有方案
        if ((S + sum) % 2 == 1) return 0; // 此时没有方案
        int bagSize = (S + sum) / 2;
        vector<int> dp(bagSize + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < nums.size(); i++) { // 组合数
            for (int j = bagSize; j >= nums[i]; j--) { // 0-1背包问题
                dp[j] += dp[j - nums[i]];
            }
        }
        return dp[bagSize];
    }
};
```
上面的代码是[LC494 Target Sum 目标和](https://github.com/ThreeSR/LeetCode/blob/main/LC494_Target%20Sum_DP.cpp)的答案。

模板（动归排列组合+完全背包）
```C++
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < coins.size(); i++) { // 遍历物品，组合数
            for (int j = coins[i]; j <= amount; j++) { // 遍历背包,完全背包
                dp[j] += dp[j - coins[i]];
            }
        }
        return dp[amount];
    }
};
```
上面的代码是[LC518 Coin Change II 零钱兑换 II](https://github.com/ThreeSR/LeetCode/blob/main/LC518_Coin%20Change%202_DP.cpp)的答案。

关于排列数的题目，可见[LC377 Combination Sum IV 组合总和4](https://github.com/ThreeSR/LeetCode/blob/main/LC377_Combination%20Sum%20IV_DP.cpp)。

下面，我就列出一些DP下的排列组合问题：

[LC494 Target Sum 目标和](https://github.com/ThreeSR/LeetCode/blob/main/LC494_Target%20Sum_DP.cpp)  本题难点在于：**1.如何对题目进行0-1背包的建模，也就是如何找寻bag weight 或 bag size；2.不同于一般的0-1背包模板，它的递推公式是dp[j] = dp[j] + dp[j - nums[i]];，而不是dp[i][j] = max(dp[i][j], dp[i - zeroNum][j - oneNum] + 1);。原因在题目链接里面有说。对于组合类的题目（不需要枚举，只需要知道组合个数，不需要用回溯），动归模板基本都是dp[j] = dp[j] + dp[j - nums[i]];的类型。**

[LC518 Coin Change II 零钱兑换 II](https://github.com/ThreeSR/LeetCode/blob/main/LC518_Coin%20Change%202_DP.cpp)  本题就属于不能交换for循环位置的题目。这是因为它求的是组合数，和前面的[LC494 Target Sum 目标和](https://github.com/ThreeSR/LeetCode/blob/main/LC494_Target%20Sum_DP.cpp)类似，它并不是传统的套用模板的题目。**在外循环为coin时，求的是组合数；在外循环为amount时，求的是排列数**。具体内容见题目中的链接。

[LC377 Combination Sum IV 组合总和 IV](https://github.com/ThreeSR/LeetCode/blob/main/LC377_Combination%20Sum%20IV_DP.cpp)  依照题意，这里的组合实际是排列的意思。就是要求出排列数大小。这题可以视为这一类型题目的典范。**注意：要加上怕数据太大，超过范围的判断。**

其实，**对组合总和的四道题进行总结，可以发现一个横跨回溯法和动态规划的排列组合过程。**（pending...）

[:point_up_2: Top](#dynamic-programming)

***

## Bottom
