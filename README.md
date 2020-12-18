# LeetCode

下面是力扣题目的一些总结：

数据结构

哈希表value处理的模板 [LC501](https://github.com/ThreeSR/LeetCode/blob/main/LC501_Find%20Mode%20in%20Binary%20Search%20Tree_Hash%20Table.cpp)

链表节点的删除（经典的头结点处理，生成一个dummy的头结点。好处是之后删除节点不用把头结点分类讨论。）  [剑指offer 18](https://github.com/ThreeSR/LeetCode/blob/main/%E5%89%91%E6%8C%87Offer_18_%E5%88%A0%E9%99%A4%E9%93%BE%E8%A1%A8%E7%9A%84%E8%8A%82%E7%82%B9_Linked%20List.cpp)

运用set函数

[LC217 (set去重)](https://github.com/ThreeSR/LeetCode/blob/main/LC217_Contains%20Duplicate_Set.cpp)

[LC287 (set寻找已有的元素，java语言)](https://github.com/ThreeSR/LeetCode/blob/main/LC287_Find%20the%20Duplicate%20Number_Set.java)

对于重复元素的处理，可以用set也可以用哈希表或者是排序，二分法。

字符串匹配

KMP算法   [相关理论](https://mp.weixin.qq.com/s?__biz=MzUxNjY5NTYxNA==&mid=2247484428&idx=1&sn=c0e5573f5fe3b438dbe75f93f3f164fa&chksm=f9a2375dced5be4b8cfddf3236b7db8153b60092c87051bb8a6e4e87dad6c8b2c4cbcd5e2af5&scene=21#wechat_redirect)  [LC28](https://github.com/ThreeSR/LeetCode/blob/main/LC28_Implement%20strStr()_KMP.cpp)  [LC459](https://github.com/ThreeSR/LeetCode/blob/main/LC459_Repeated%20Substring%20Pattern_KMP.cpp)

经典位运算：

判断二进制数有多少个1，可以使用 X & (X-1)的方法。也即布莱恩·克尼根算法  [Brian Kernighan Algorithm](https://www.geeksforgeeks.org/count-set-bits-in-an-integer/)

典型例题有：[LC338](https://github.com/ThreeSR/LeetCode/blob/main/LC338_Counting%20Bits_DP.cpp)

异或运算的应用  异或运算是非常经常用到的位运算，C++中用 ^ 表示XOR。

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_Bit%20Operation.cpp)

数学应用

[LC7 翻转整数](https://github.com/ThreeSR/LeetCode/blob/main/LC7_Reverse%20Integer_Math.cpp)

[LC62 组合数公式](https://github.com/ThreeSR/LeetCode/blob/main/LC62_Unique%20Paths_Math.cpp)

[LC96 卡特兰数](https://github.com/ThreeSR/LeetCode/blob/main/LC96_Unique%20Binary%20Search%20Trees_Math.cpp)

递归

反中序遍历  遍历是常用的处理手段。除了遍历自身能出题之外，遍历也可以用在其他题目中，当做题目中数据处理的一部分。比如在二叉搜索树（BST）中，可以用中序遍历把树转换为一个vector，接下来，对这个vector进行处理即可。处理有序vector显然比BST要简单得多。  

[LC538](https://github.com/ThreeSR/LeetCode/blob/main/LC538_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)  本题和 [LC1038](https://github.com/ThreeSR/LeetCode/blob/main/LC1038_Convert%20BST%20to%20Greater%20Tree_Recursion.cpp)相同

二分搜索  [算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/BinarySearch_Algorithm.py) 一般在：1.处理**有序数组**的查找时；2.当时间复杂度要求是**O(logn)** 时，就应该想到要用二分搜索。此外，有时候数组可能无序，可以先进行排序，再进行二分搜索。

[LC33](https://github.com/ThreeSR/LeetCode/blob/main/LC33_Search%20in%20Rotated%20Sorted%20Array_Binary%20Search.cpp)

[LC34 !](https://github.com/ThreeSR/LeetCode/blob/main/LC34_Find%20First%20and%20Last%20Position%20of%20Element%20in%20Sorted%20Array_Binary%20Search.cpp)

[LC35](https://github.com/ThreeSR/LeetCode/blob/main/LC35_Search%20Insert%20Position_Binary%20Search.cpp)

堆排序  heap经常用于类似于Top K出现频率之类的题目。heap使用的时候，要**分清小根堆还是大根堆**。如果留的是最高的K个频次，那么是小根堆。因为要把小的踢出heap，留大的，所以是小根堆，大的留住，小的数值浮到根上踢出。

[LC347 最高频次的K个数](https://github.com/ThreeSR/LeetCode/blob/main/LC347_Top%20K%20Frequent%20Elements_Heap.cpp)  

[LC215 数组中的第K个最大元素](https://github.com/ThreeSR/LeetCode/blob/main/LC215_Kth%20Largest%20Element%20in%20an%20Array_Heap.cpp)

C++中ASCII码的应用

[LC389 找两个字符串的不同](https://github.com/ThreeSR/LeetCode/blob/main/LC389_Find%20the%20Difference_ASCII.cpp)
