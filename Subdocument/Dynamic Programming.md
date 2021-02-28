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
     + 编辑距离（NLP应用）
     + [打家劫舍](#打家劫舍)
     + [背包问题](#背包问题)
          + [0-1背包问题](#0-1背包问题)
          + [完全背包问题](#完全背包问题)
          + [动态规划下的排列组合问题](#动态规划下的排列组合问题)
          
***

## 正文
          
[LC746 Min Cost Climbing Stairs 爬楼梯的最小代价](https://github.com/ThreeSR/LeetCode/blob/main/LC746_Min%20Cost%20Climbing%20Stairs_DP.cpp)  说到爬楼梯问题，有几道力扣题目都是关于此。比如：[LC90 爬楼梯](https://github.com/ThreeSR/LeetCode/blob/main/LC90_ClimbStairs.py) || [剑指 Offer 10- II_青蛙跳台阶问题 C++版](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87%20Offer%2010-%20II_%E9%9D%92%E8%9B%99%E8%B7%B3%E5%8F%B0%E9%98%B6%E9%97%AE%E9%A2%98_DP.cpp)  这里青蛙跳台阶本质和[LC90](https://github.com/ThreeSR/LeetCode/blob/main/LC90_ClimbStairs.py)一样。 其他语言的青蛙跳台阶：[Python](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87%20Offer%2010-%20II_%E9%9D%92%E8%9B%99%E8%B7%B3%E5%8F%B0%E9%98%B6%E9%97%AE%E9%A2%98_DP.py) 

[LC72 Edit Distance 编辑距离 python](https://github.com/ThreeSR/LeetCode/blob/main/LC72_Edit%20Distance.py) || [C++ Code](https://github.com/ThreeSR/LeetCode/blob/main/LC72_Edit%20Distance_DP.cpp)  这是一道很有名的动态规划题目，值得一做。具体解题思路见链接。最大的难点还是dp[i][j]代表的含义，这里代表的是从word1前i个字母到word2前j个字母所需要的变化步数。从广义上看，变化无非增删改，增加或删除是从word1到word2的变动而言，改就是字母直接变动，比如从a变到b。明确这些内容之后，可以写出动态转移方程。具体写法见链接。

令人欣喜的是，它还有一些很实际的衍生应用，比如：

NLP中的[Auto-Correct](https://github.com/ThreeSR/Coursera/tree/main/Natural%20Language%20Processing%20Specialization%20in%20Coursera/NLP%20with%20Probabilistic%20Models/week1)  这是自然语言处理中的一个应用，这和力扣的编辑距离切合。（如果对自然语言处理有兴趣，可以上[Coursera中自然语言处理的课程](https://www.coursera.org/learn/probabilistic-models-in-nlp/home/welcome)，在我的GitHub中有相应的[参考答案](https://github.com/ThreeSR/Coursera/tree/main/Natural%20Language%20Processing%20Specialization%20in%20Coursera)。当然了，也很欢迎上[国立台湾大学李宏毅老师的课](https://www.youtube.com/channel/UC2ggjtuuWvxrHHHiaDH1dlQ)，都很不错。）

欣喜的原因在于，并不是所有算法问题都可以在实际中找到很切合的技术点，但是这道题做到了。

[LC714 Best Time to Buy and Sell Stock with Transaction Fee 带有手续费的买卖股票最佳时机 C++版](https://github.com/ThreeSR/LeetCode/blob/main/LC714_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Transaction%20Fee_DP.cpp)  状态转移方程的详细解答见[LC714_Ans](https://github.com/ThreeSR/LeetCode/blob/main/Solution/LC714_Ans.jpg)   ||  [Java版代码](https://github.com/ThreeSR/LeetCode/blob/main/LC714_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20with%20Transaction%20Fee_DP.java)

[LC123 Best Time to Buy and Sell Stock III](https://github.com/ThreeSR/LeetCode/blob/main/LC123_Best%20Time%20to%20Buy%20and%20Sell%20Stock%20III_DP.cpp)  根据题目要求，我们可以设定有限个状态，并根据这些状态进行dp数组的设计。本题的难点在于有限制买卖次数，但同时我们可以利用有限的买卖次数进行不同情况的分类，并根据分类依据进行动态规划。

[LC63 Unique Paths II](https://github.com/ThreeSR/LeetCode/blob/main/LC63_Unique%20Paths%20II_DP.cpp)  在[力扣62](https://github.com/ThreeSR/LeetCode/blob/main/LC62_Unique%20Paths_Math.cpp)的基础上，增加了障碍物。遇到障碍物，dp初始化的时候设为0或者之后遇到了进行continue即可，因为dp本来初始值就是零。

[LC343 Integer Break 整数拆分](https://github.com/ThreeSR/LeetCode/blob/main/LC343_Integer%20Break_DP.cpp)  dp[i]代表拆分数字i，可以得到的最大乘积dp[i]；dp[2]开始动归；dp[i] = max(dp[i], max((i - j) * j, dp[i - j] * j)); 状态转移方程。
***
### 打家劫舍

这是力扣中非常经典的DP类题目。一共三道题，按顺序难度层层递进。

[LC198 House Robber 打家劫舍](https://github.com/ThreeSR/LeetCode/blob/main/LC198_House%20Robber_DP.cpp) 经典的DP题目，比较简单

[LC213 House Robber II 打家劫舍 II](https://github.com/ThreeSR/LeetCode/blob/main/LC213_House%20Robber%20II_DP.cpp)  相较于第一题，第二题将房屋分布设计成了环状。我们需要分两种情况讨论：1.掐头留尾；2.留头掐尾。第三种情况掐头掐尾已经包含于这两种情况之中。接下来，根据两种情况不同的房屋“考虑”范围，调用前面一题的API求解即可。所以本题相当于LC198的叠加。

这里一定要注意一点：**“考虑”不等于“偷盗”。这里的考虑不是偷盗。考虑的房屋可能被偷，没有考虑的肯定不会被偷。这就是考虑和偷盗之间的关系。** *这是整个类型题中很容易出错的点。*

[LC337 House Robber III 打家劫舍 III](https://github.com/ThreeSR/LeetCode/blob/main/LC337_House%20Robber%20III_DP.cpp)  **树型动态规划经典题目**  后序遍历，然后根据题目的偷盗要求，分成当前节点偷与不偷两大类，进行分析。**很值得学习**

总的来说，写打家劫舍系列题目可以学到很多传统DP的知识。
***
[:point_up_2: Top](#dynamic-programming)

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