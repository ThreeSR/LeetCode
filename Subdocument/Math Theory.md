# Math Theory

***
## 写在前面

因为主文档太长，不容易维护，所以建立子文档以辅助。

本篇内容是[主文档](https://github.com/ThreeSR/LeetCode/blob/main/README.md)中的**数学理论部分**的扩展。

谈到数学理论，其实很多算法题都跟数学理论强相关。这个文档中的数学理论是比较基础的数学内容。严格意义上说，位运算和图论（离散数学，组合数学）也归属于数学理论部分。但因为它们本身又可以细分成许多不同内容，所以把它们分离了出去。本文档中不包含这两个部分的内容，详情请关注：[图论文档](https://github.com/ThreeSR/LeetCode/blob/main/Subdocument/Graph%20Theory.md)和[位运算文档]()。

***

| 作者 | Three |
| :----: | :----: |
| 领英 | [![](https://camo.githubusercontent.com/0c4286a2bd43a8fe3b39f93c037c63612e014c62/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d2d6c696e6b6564696e3f6c6162656c3d4c696e6b6564496e266c6f676f3d4c696e6b6564496e267374796c653d736f6369616c)](https://www.linkedin.com/in/rui-sun-999717173 "Welcome") |
| 知乎 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/%E7%9F%A5%E4%B9%8E.png?raw=true"/>](https://www.zhihu.com/people/sun-rui-55-32 "Welcome") |
| 力扣 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/LeetCode.png?raw=true"/>](https://leetcode-cn.com/u/threesr/ "Hello World!") |
| CSDN | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/csdn.png?raw=true"/>](https://blog.csdn.net/Three3333333 "Welcome") |
:blush: :trophy: | :sun_with_face: :octocat:

**永远不要认为我们可以逃避，我们的每一步都决定着最后的结局，我们的脚步正在走向我们自己选定的终点。**

[:point_up_2: Top](#math-theory) 代表返回顶部

[:point_down:](#bottom) 代表到文档末尾

**如果你觉得我做得还行，那就给我Star吧！**

<!--特别鸣谢：[十大经典排序算法（动图演示）](https://www.cnblogs.com/onepixel/p/7674659.html) -->

*注：下面的代码由Python，Java和C++语言完成*

**Key Words :**  `C++`  `Python`  `Java` `Math Theory` 

***

## Table

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
+ [结尾](#bottom)        
    
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

针对上面的三道题，详情也可以参见[我的力扣题解](https://leetcode-cn.com/problems/reverse-bits/solution/ju-yi-fan-san-yi-wen-dai-ni-shua-san-dao-ubat/)

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
 
 [剑指Offer_14 - I_剪绳子](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_14%20-%20I_%E5%89%AA%E7%BB%B3%E5%AD%90_Math.py)  本题需要用到**求导**，可知尽量三个三个分配是最佳选择。[LC343 Integer Break 整数拆分](https://github.com/ThreeSR/LeetCode/blob/main/LC343_Integer%20Break_DP.cpp)和本题一致。这道题除了可以用数学方法，也可以用[DP方法](https://github.com/ThreeSR/LeetCode/blob/main/LC343_Integer%20Break_DP.cpp)。
 
 [LC1502 Can Make Arithmetic Progression From Sequence 判断能否形成等差数列](https://github.com/ThreeSR/LeetCode/blob/main/LC1502_Can%20Make%20Arithmetic%20Progression%20From%20Sequence_Math.cpp)  首先排序，再者进行等差数列的判断，运用其性质即可。
 
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
 
 ### 二分法
 
[LC69 Sqrt(x) x的平方根](https://github.com/ThreeSR/LeetCode/blob/main/LC69_Sqrt(x)_Math.cpp)  二分法求解。**以后再遇到搜索类的题目，或者是传统思维中，需要一个个试过去的题目，应该考虑更高效的二分法求解！！**

 ### 公因数与公倍数
 
 **最大公因数：Greatest Common Divisor = GCD；最小公倍数：Least Common Multiple = LCM。**
 
 对于GCD的求法，一般使用欧几里得算法，这个算法基于GCD递归定理，现引入这个定理：
 
 ![image](https://user-images.githubusercontent.com/36061421/112319111-b3191980-8ce8-11eb-9ebd-6c3ef6b3ee36.png)

 欧几里得算法：
 
 ![image](https://user-images.githubusercontent.com/36061421/112319229-d47a0580-8ce8-11eb-9ace-32266d677fe2.png)

 通过这样的一个算法，可以得到两个数的GCD。
 
 对于LCM，它和GCD有这样的关系：
 
 > 最小公倍数 = 两数的乘积 / 最大公约（因）数
 
 至此，我们可以通过上面的关系与定理，求得任意两个数的LCM与GCD，是非常方便的。
 
 ### 丑数
 
 涉及丑数的有五道题目，下面三道题目对于丑数的定义一致，之后的两道比较不同。
 
 [LC263 Ugly Number 丑数 C++](https://github.com/ThreeSR/LeetCode/blob/main/LC263_Ugly%20Number_Naive%20Algorithm.cpp)  直接根据丑数的定义，进行模拟即可。此外，还有[Java版本的代码](https://github.com/ThreeSR/LeetCode/blob/main/LC263_Ugly%20Number_Naive%20Algorithm.java)。
 
 [LC264 Ugly Number II 丑数 II C++](https://github.com/ThreeSR/LeetCode/blob/main/LC264_Ugly%20Number%20II_Math.cpp)  基于上面的题目中对于丑数的定义，我们需要找寻第n个丑数。思路和上面不同，上面是从数值大往数值小分析，这边是从数值小往数值大分析寻找。主要思路是“三指针”，很好的解法。此外，还有[Python版代码](https://github.com/ThreeSR/LeetCode/blob/main/LC264_Ugly%20Number%20II_DP.py)。
 
 [剑指 Offer 49 Ugly Number 丑数 Python](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87%20Offer%2049_Ugly%20Number_DP.py)  本题虽然名为丑数，但实际上和上面的力扣264是相同的，可以一起写。
 
 关于上面的三道题，也可以详见[我的力扣题解](https://leetcode-cn.com/problems/ugly-number/solution/ti-yi-lei-jie-yi-wen-dai-ni-shua-san-dao-p0pm/)和我的[另一篇力扣题解](https://leetcode-cn.com/problems/ugly-number-ii/solution/ti-yi-lei-jie-dai-ni-shua-san-dao-chou-s-4szf/)。
 
 后面的两道题...pending...
 
 ### NP问题
 
 P是Polynominal的意思，代表一个算法的时间复杂度可以用多项式表示。如果用大O表示法，那就是`O(n^k)`。那么，什么样的算法不能用P表示？一些幂次级的时间复杂度就不能用P表示，比如`O(k^n)`，这类问题称为NP问题，N就是Not的意思。
 
 在计算机领域，一些问题目前只有NP解。科学家们想要明白是否这些目前的NP问题可以有P的解。如果有，那么很多问题处理起来将会变得非常简单高效。现在，NP问题和P问题的关联还未被完全证明，是一个开放的领域。
 
 ### 计算几何学
 
 **Computational Geometry**
 
 运用数学建模的方法，使用计算机解决实际的几何学问题。计算几何学是计算机图形学（Computer Graphics）、CAD等内容的数学基础。
 
 **叉积**
 
 ![image](https://user-images.githubusercontent.com/36061421/111749422-b9645b80-88cc-11eb-9e7f-957008fa4fdd.png)

可以使用叉积来进行简单的判断，之后在此基础上进行深入研究。 
 
[:point_up_2: Top](#math-theory)
***

# Bottom
