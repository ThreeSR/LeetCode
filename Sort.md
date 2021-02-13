# Sort

***
## 写在前面

因为主文档太长，不容易维护，所以建立子文档以辅助。

本篇内容是[主文档](https://github.com/ThreeSR/LeetCode/blob/main/README.md)中的**排序部分**的扩展。
***

| 作者 | Three |
| :----: | :----: |
| 领英 | [![](https://camo.githubusercontent.com/0c4286a2bd43a8fe3b39f93c037c63612e014c62/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d2d6c696e6b6564696e3f6c6162656c3d4c696e6b6564496e266c6f676f3d4c696e6b6564496e267374796c653d736f6369616c)](https://www.linkedin.com/in/rui-sun-999717173 "Welcome") |
| 知乎 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/%E7%9F%A5%E4%B9%8E.png?raw=true"/>](https://www.zhihu.com/people/sun-rui-55-32 "Welcome") |
| 力扣 | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/LeetCode.png?raw=true"/>](https://leetcode-cn.com/u/threesr/ "Hello World!") |
| CSDN | [<img width="20" height="20" src="https://github.com/ThreeSR/Icons/blob/main/csdn.png?raw=true"/>](https://blog.csdn.net/Three3333333 "Welcome") |
:blush: :trophy: | :sun_with_face: :octocat:

**不积跬步，无以至千里；不积小流，无以成江海。**

[:point_up_2: Top](#leetcode) 代表返回顶部

[:point_down:](#bottom) 代表到文档末尾

**如果你觉得我做得还行，那就给我Star吧！**

特别鸣谢：[十大经典排序算法（动图演示）](https://www.cnblogs.com/onepixel/p/7674659.html)

***

## Table

+ 排序
   + [比较类排序](#比较类排序)
        + [交换排序](#交换排序)
             + [冒泡排序 Bubble Sort](#冒泡排序)
             + [快速排序 Quick Sort](#快速排序)
        + [插入排序](#插入排序)
             + [简单插入排序 Insertion Sort](#简单插入排序)
             + [希尔排序 Shell Sort](#希尔排序)
        + [选择排序](#选择排序)
             + [简单选择排序 Selection Sort](#简单选择排序)
             + [堆排序 Heap Sort](#堆排序)
        + [归并排序](#归并排序) 
             + 二路归并排序 Merge Sort 
             + 多路归并排序 Merge Sort 
   + [非比较排序](#非比较排序)
        + [计数排序 Counting Sort](#计数排序)
        + [基数排序 Radix Sort](#基数排序)
        + [桶排序 Bucket Sort](#桶排序)
+ [结尾](#bottom)        
    
***

## 正文

排序是非常重要的内容，很值得学习。一般来说，我们经常遇到的是十种排序，也可以叫做**十大排序**，如下图所示：

[<img width="800" height="600" src="https://img2018.cnblogs.com/blog/849589/201903/849589-20190306165258970-1789860540.png"/>](https://img2018.cnblogs.com/blog/849589/201903/849589-20190306165258970-1789860540.png "十大排序")

排序在编程题中有着“万金油”的角色。**遇事不决，先行排序。**有的时候，排序可以帮你解决当下的困境。但是，并不是所有题目都适合排序。有的题目可能对时间复杂度要求高，就不适合增加排序了。
这类题目往往比较tricky。虽然可以用排序解决，但是出题者不希望你用排序，想让你用更简单的方法。这类题之后再说。

下面是十大排序的算法复杂度比较：

[<img width="800" height="600" src="https://images2018.cnblogs.com/blog/849589/201804/849589-20180402133438219-1946132192.png"/>](https://images2018.cnblogs.com/blog/849589/201804/849589-20180402133438219-1946132192.png "十大排序")

不论如何，排序都是很关键的内容。

C++中的排序可以调用函数sort：
```C++
static bool cmp(const int a, const int b) {
        return a < b;
    }
        sort(nums.begin(), nums.end(), cmp); // 排序
//  这是一个递增排序，sort默认是递增的。
```

Python中的排序可以使用sort() 和 sorted() 方法：
```python
a = [2, 1, 4, 9, 6]
a.sort()
print a
 
c = [2, 1, 4, 9, 6]
d = sorted(c)
print d
print c
```

```python
[1, 2, 4, 6, 9]
[1, 2, 4, 6, 9]
[2, 1, 4, 9, 6]
```

其中，sort改变原本数组，sorted不改变，需要一个返回值。

下面，根据上图的分类，进行十大排序的分析。

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

Heap Sort [算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/HeapSort.py)

heap经常用于类似于Top K出现频率之类的题目。heap使用的时候，要**分清小根堆还是大根堆**。如果留的是最高的K个频次，那么是小根堆。因为要把小的踢出heap，留大的，所以是小根堆，大的留住，小的数值浮到根上踢出。

在C++中，堆的使用是：priority_queue<Type> heap; 函数，关于这个函数的使用（大根堆还是小根堆，入堆，出堆，元素访问...），后续讨论（Pending）

```C++
priority_queue<int> heap; // 生成一个大根堆
heap.push(element); // Add an element to the heap
heap.top();  // Visit the root in the heap  (maximal value or minimal value)
heap.pop();  // delete the element in the root (delete max or min)
// More details can be seen in LC1046, 这可以是一道简单的堆使用的模板题
```

[LC347 最高频次的K个数](https://github.com/ThreeSR/LeetCode/blob/main/LC347_Top%20K%20Frequent%20Elements_Heap.cpp)  

[LC215 数组中的第K个最大元素](https://github.com/ThreeSR/LeetCode/blob/main/LC215_Kth%20Largest%20Element%20in%20an%20Array_Heap.cpp)

[LC1046 Last Stone Weight 最后一块石头的重量](https://github.com/ThreeSR/LeetCode/blob/main/LC1046_Last%20Stone%20Weight_Heap.cpp)  
思路：对这些石头处理，需要排序；但是可能两块石头重量不相等，粉碎之后还需要加入数组。如果每次遇到这种情况，都用sort函数不方便。
有什么东西可以要用的时候方便拿，不用的时候直接丢进去？只能是堆了，所以堆排序。

[LC239 Sliding Window Maximum 滑动窗口最大值](https://github.com/ThreeSR/LeetCode/blob/main/LC239_Sliding%20Window%20Maximum_Heap.cpp)  
本题也可以自己制造数据结构求解[单调队列](https://github.com/ThreeSR/LeetCode/blob/main/LC239_Sliding%20Window%20Maximum_Queue.cpp)，但是用堆更简单。
我们在意的是最大值，所以用堆弹出最大值，然后让窗口持续移动即可。**要小心的是大顶堆的最大值或者堆内部的一些数值已经不在窗口之中，这一点要注意维护。**

#### 归并排序

##### 二路归并排序 

Merge Sort  [算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/MergeSort_Algorithm.py)

[**LC148 对链表进行排序**](https://github.com/ThreeSR/LeetCode/blob/main/LC148_Sort%20List_Merge%20Sort.py)

##### 多路归并排序

### 非比较排序

#### 计数排序

#### 基数排序

#### 桶排序 


[:point_up_2: Top](#sort)
***
## Bottom
