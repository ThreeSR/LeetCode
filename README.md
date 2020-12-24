# LeetCode

下面是力扣题目的一些总结：*编程语言主要是C++和Python，偶尔会有Java和C。*

我的力扣主页：[ThreeSR](https://leetcode-cn.com/u/threesr/)

**Notice: This Page is Under Construction.**

## 数据结构

链表节点的删除（经典的头结点处理，生成一个dummy的头结点。好处是之后删除节点不用把头结点分类讨论。）  [剑指offer 18](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_18_%E5%88%A0%E9%99%A4%E9%93%BE%E8%A1%A8%E7%9A%84%E8%8A%82%E7%82%B9_Linked%20List.cpp)

## 对于重复元素的处理，可以用: 

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

总结这些方法的原因在于：力扣中很多题目需要对重复元素进行处理。有的时候题目目标不是重复元素，但过程中会遇到这个问题。因此作如上总结。

## 字符串匹配

### 1.KMP算法   [相关理论](https://mp.weixin.qq.com/s?__biz=MzUxNjY5NTYxNA==&mid=2247484428&idx=1&sn=c0e5573f5fe3b438dbe75f93f3f164fa&chksm=f9a2375dced5be4b8cfddf3236b7db8153b60092c87051bb8a6e4e87dad6c8b2c4cbcd5e2af5&scene=21#wechat_redirect)  

[LC28](https://github.com/ThreeSR/LeetCode/blob/main/LC28_Implement%20strStr()_KMP.cpp) || [LC459](https://github.com/ThreeSR/LeetCode/blob/main/LC459_Repeated%20Substring%20Pattern_KMP.cpp)

### 2.Rabin-Karp Algorithm  

该算法具体可以参考《算法导论》，在我的GitHub中有Python的实现：[Rabin-Karp Algorithm](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/Rabin-Karp_Algorithm.py)。这个算法的思路挺好的，如果有时间可以进行学习。但应用程度上没有KMP广。

## 经典位运算：

### 1.与运算（&）的应用

判断二进制数有多少个1，可以使用 X & (X-1)的方法。也即布莱恩·克尼根算法  [Brian Kernighan Algorithm](https://www.geeksforgeeks.org/count-set-bits-in-an-integer/)

典型例题有：[LC338](https://github.com/ThreeSR/LeetCode/blob/main/LC338_Counting%20Bits_DP.cpp)

### 2.异或运算（^）的应用  

异或运算是非常经常用到的位运算，C++中用 ^ 表示XOR。

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_Bit%20Operation.cpp)  LC389主要从find difference角度理解异或运算的用途

[LC268_Missing Number 缺失的数](https://github.com/ThreeSR/LeetCode/blob/main/LC268_Missing%20Number_Bit%20Operation.cpp)  LC268这道题从配对的角度理解异或运算，并且着重使用性质：0和任何数异或都是那个数本身。

从不同角度理解同一个运算，有时可以得到很精妙的解法。因为相同数异或为0，不同为1，所以从结果为1的角度，可以认为是find difference；从结果为0的角度，可以认为是pairing。正好，在LC389中要从find difference入手；在LC268中要从pairing入手。

总结：多角度理解同一个运算或算法在解题时很必要。

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

关于为什么要用逻辑运算实现加法，相关意义Pending

负数是怎么在加法器中处理的？Pending

不同语言是怎么处理不同进制数的？何时需要进行转换？可以直接非二进制逻辑运算吗？ Pending

## 数学应用

[LC7 翻转整数](https://github.com/ThreeSR/LeetCode/blob/main/LC7_Reverse%20Integer_Math.cpp)

[LC62 组合数公式](https://github.com/ThreeSR/LeetCode/blob/main/LC62_Unique%20Paths_Math.cpp)

[LC96 卡特兰数](https://github.com/ThreeSR/LeetCode/blob/main/LC96_Unique%20Binary%20Search%20Trees_Math.cpp)

[LC142 Linked List Cycle II](https://github.com/ThreeSR/LeetCode/blob/main/LC142_Linked%20List%20Cycle%20II_Double%20Pointer.cpp)  [**弗洛伊德判圈算法（Floyd Cycle Detection Algorithm）**](https://zh.wikipedia.org/wiki/Floyd%E5%88%A4%E5%9C%88%E7%AE%97%E6%B3%95)  [本题数学推导](https://mp.weixin.qq.com/s/_QVP3IkRZWx9zIpQRgajzA)  此算法也可用于[LC287  Pending]()。

## 递归 Recursion

反中序遍历 

遍历是常用的处理手段。除了遍历自身能出题之外，遍历也可以用在其他题目中，当做题目中数据处理的一部分。比如在二叉搜索树（BST）中，可以用中序遍历把树转换为一个vector，接下来，对这个vector进行处理即可。处理有序vector显然比BST要简单得多。  

[LC538](https://github.com/ThreeSR/LeetCode/blob/main/LC538_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)  本题和 [LC1038](https://github.com/ThreeSR/LeetCode/blob/main/LC1038_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)相同

## 二分搜索 Binary Search ([算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/BinarySearch_Algorithm.py)) 

**注意：**一般在：1.处理**有序数组**的查找时；2.当时间复杂度要求是**O(logn)** 时，就应该想到要用二分搜索。此外，有时候数组可能无序，可以先进行排序，再进行二分搜索。

[LC33](https://github.com/ThreeSR/LeetCode/blob/main/LC33_Search%20in%20Rotated%20Sorted%20Array_Binary%20Search.cpp)

[LC34 !](https://github.com/ThreeSR/LeetCode/blob/main/LC34_Find%20First%20and%20Last%20Position%20of%20Element%20in%20Sorted%20Array_Binary%20Search.cpp)

[LC35](https://github.com/ThreeSR/LeetCode/blob/main/LC35_Search%20Insert%20Position_Binary%20Search.cpp)

[**LC154 旋转数组的最小数字**](https://github.com/ThreeSR/LeetCode/blob/main/LC154_Find%20Minimum%20in%20Rotated%20Sorted%20Array%20II_Binary%20Search.cpp)  本题是**非典型**的二分搜索，前面说到，一般二分搜索需要是排列好的数组。但这里是基于排列好的数组下，对数组某一个位置进行了截断并移动（详见题目）。这样一来，不满足有序数组的条件。但这样的变化很特殊，经过分类讨论，依然可以得出可以使用二分搜索的结论。这是一道非典型的二分搜索题目，很值得写的题目。此外，在剑指offer中，有一道题和这题一样，可以顺便一起写掉。

剑指offer：[剑指Offer_11_旋转数组的最小数字](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_11_%E6%97%8B%E8%BD%AC%E6%95%B0%E7%BB%84%E7%9A%84%E6%9C%80%E5%B0%8F%E6%95%B0%E5%AD%97_Binary%20Search.cpp)

## 排序 Sort

排序是非常重要的内容，很值得学习。

### 1.堆排序 Heap Sort 

heap经常用于类似于Top K出现频率之类的题目。heap使用的时候，要**分清小根堆还是大根堆**。如果留的是最高的K个频次，那么是小根堆。因为要把小的踢出heap，留大的，所以是小根堆，大的留住，小的数值浮到根上踢出。

[LC347 最高频次的K个数](https://github.com/ThreeSR/LeetCode/blob/main/LC347_Top%20K%20Frequent%20Elements_Heap.cpp)  

[LC215 数组中的第K个最大元素](https://github.com/ThreeSR/LeetCode/blob/main/LC215_Kth%20Largest%20Element%20in%20an%20Array_Heap.cpp)

### 2.归并排序 Merge Sort  [算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/MergeSort_Algorithm.py)

[**LC148 对链表进行排序**](https://github.com/ThreeSR/LeetCode/blob/main/LC148_Sort%20List_Merge%20Sort.py)

## C++中ASCII码的应用

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_ASCII.cpp)

## 回溯法  [模板 Pending]()

[**LC79 单词搜索**](https://github.com/ThreeSR/LeetCode/blob/main/LC79_Word%20Search_Backtracking.py)  本题目需要对每一个格子中字母进行排列组合（枚举），找到可行解。所以用回溯法。本题是用Python实现。

## 贪心算法 Greedy Algorithm

[LC452 Minimum Number of Arrows to Burst Balloons 用最少的箭戳破气球](https://github.com/ThreeSR/LeetCode/blob/main/LC452_Minimum%20Number%20of%20Arrows%20to%20Burst%20Balloons_Greedy%20Algorithm.cpp)

[LC56 合并区间](https://github.com/ThreeSR/LeetCode/blob/main/LC56_Merge%20Intervals_Greedy%20Algorithm.cpp)  本题在方法上和[LC452 用最少的箭戳破气球](https://github.com/ThreeSR/LeetCode/blob/main/LC452_Minimum%20Number%20of%20Arrows%20to%20Burst%20Balloons_Greedy%20Algorithm.cpp)有相似之处，都要处理区间的重叠。

[LC435 Non-overlapping Intervals 无覆盖的区间](https://github.com/ThreeSR/LeetCode/blob/main/LC435_Non-overlapping%20Intervals_Greedy%20Algorithm.cpp)  这题在方法上和上面两道题有相似之处，可以类比。在解题思路上，从对立面入手，简化过程。

## 动态规划 Dynamic Programming

[LC746 Min Cost Climbing Stairs 爬楼梯的最小代价](https://github.com/ThreeSR/LeetCode/blob/main/LC746_Min%20Cost%20Climbing%20Stairs_DP.cpp)  说到爬楼梯问题，有几道力扣题目都是关于此。比如：[LC90 爬楼梯](https://github.com/ThreeSR/LeetCode/blob/main/LC90_ClimbStairs.py) || [剑指 Offer 10- II_青蛙跳台阶问题 C++版](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87%20Offer%2010-%20II_%E9%9D%92%E8%9B%99%E8%B7%B3%E5%8F%B0%E9%98%B6%E9%97%AE%E9%A2%98_DP.cpp)  这里青蛙跳台阶本质和[LC90](https://github.com/ThreeSR/LeetCode/blob/main/LC90_ClimbStairs.py)一样。 其他语言的青蛙跳台阶：[Python](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87%20Offer%2010-%20II_%E9%9D%92%E8%9B%99%E8%B7%B3%E5%8F%B0%E9%98%B6%E9%97%AE%E9%A2%98_DP.py) 

一些应用：NLP中的[Auto-Correct](Pending)

## 双指针法 Double Pointer

[剑指Offer_57_和为s的两个数字](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_57_%E5%92%8C%E4%B8%BAs%E7%9A%84%E4%B8%A4%E4%B8%AA%E6%95%B0%E5%AD%97_Double%20Pointer.py)  充分利用原数组的自增条件，进行加数的合理寻找。本题有点像二分查找，但不需要二分查找。其实二分查找也是左右两个指针进行移动。广义上说，二分搜索也是双指针法的应用，但比较特殊并且自身应用面很广，因此可以独立作为一个类型。
