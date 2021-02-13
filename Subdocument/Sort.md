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

*注：下面的排序代码由Python和C++语言完成*

**Key Words :**  `C++`  `Python`  `Sort`

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

（**注：下面的顺序是按照图片中的分类进行，推荐的学习顺序是：**）

### 比较类排序

#### 交换排序

##### 冒泡排序

**Bubble Sort**

冒泡排序是一种简单的排序算法。它重复地走访过要排序的数列，一次比较两个元素，如果它们的顺序错误就把它们交换过来。走访数列的工作是重复地进行直到没有再需要交换，
也就是说该数列已经排序完成。这个算法的名字由来是因为越小的元素会经由交换慢慢“浮”到数列的顶端。 

**算法描述**
+ 1.比较相邻的元素。如果第一个比第二个大，就交换它们两个；
+ 2.对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对，这样在最后的元素应该会是最大的数；
+ 3.针对所有的元素重复以上的步骤，除了最后一个；
+ 4.重复步骤1~3，直到排序完成。

**动图演示**

![](https://images2017.cnblogs.com/blog/849589/201710/849589-20171015223238449-2146169197.gif)

**代码实现 C++**

```C++
vector<int> bubbleSort(vector<int>& arr) {
    int len = arr.size();
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {       // 相邻元素两两对比
                int temp = arr[j + 1];       // 元素交换
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}
```
[:point_up_2: Top](#sort)

##### 快速排序

**Quick Sort**

快速排序的基本思想：通过一趟排序将待排记录分隔成独立的两部分，其中一部分记录的关键字均比另一部分的关键字小，则可分别对这两部分记录继续进行排序，以达到整个序列有序。

**算法描述**

快速排序使用**分治法**来把一个串（list）分为两个子串（sub-lists）。具体算法描述如下：
+ 1.从数列中挑出一个元素，称为 “基准”（pivot）；
+ 2.重新排序数列，所有元素比基准值小的摆放在基准前面，所有元素比基准值大的摆在基准的后面（相同的数可以到任一边）。在这个分区退出之后，该基准就处于数列的中间位置。这个称为分区（partition）操作；
+ 3.递归地（recursive）把小于基准值元素的子数列和大于基准值元素的子数列排序。

（使用分治算法的排序还有归并排序）

**动图演示**

![](https://images2017.cnblogs.com/blog/849589/201710/849589-20171015230936371-1413523412.gif)

**代码实现 Python**

```python
def quicksort(S):
    # 基线条件
    if len(S) < 2:
        return S
    else:
        pivot = S[0]
        greater = [i for i in S[1:] if i > pivot]
        less = [i for i in S[1:] if i < pivot]
        equal = [i for i in S[1:] if i == pivot]
        return quicksort(less) + equal + [pivot] + quicksort(greater)

# test the code
#n = int(input())
S = list(map(int,input().split()))
S = quicksort(S)
for i in range(len(S)):
    print(S[i],end = ' ')
```

Python代码可以很简单清晰地展示快速排序的思想。





**相关力扣题目**

[LC912 Sort an Array 排序数组](https://github.com/ThreeSR/LeetCode/blob/main/LC912_Sort%20an%20Array_Quick%20Sort.py)  **这是一道可以使用各种排序算法的模板题**

[:point_up_2: Top](#sort)

#### 插入排序

##### 简单插入排序

一般来说，插入排序就指代简单插入排序。

插入排序（Insertion-Sort）的算法描述是一种简单直观的排序算法。它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。

**算法描述**

一般来说，插入排序都采用in-place在数组上实现。具体算法描述如下：

+ 1.从第一个元素开始，该元素可以认为已经被排序；
+ 2.取出下一个元素，在已经排序的元素序列中从后向前扫描；
+ 3.如果该元素（已排序）大于新元素，将该元素移到下一位置；
+ 4.重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
+ 5.将新元素插入到该位置后；
+ 6.重复步骤2~5。

**动图演示**

![](https://images2017.cnblogs.com/blog/849589/201710/849589-20171015225645277-1151100000.gif)

**代码实现 C++**

```C++
vector<int> insertionSort(vector<int>& arr) {
    int len = arr.size();
    int preIndex, current;
    for(int i = 1; i < len; i++) {
        preIndex = i - 1;
        current = arr[i];
        while(preIndex >= 0 && arr[preIndex] > current) {
            arr[preIndex + 1] = arr[preIndex];
            preIndex--;
        }
        arr[preIndex + 1] = current;
    }
    return arr;
}
```

[:point_up_2: Top](#sort)

##### 希尔排序

**Shell Sort**

1959年Shell发明，第一个突破O(n2)的排序算法，是简单插入排序的改进版。它与插入排序的不同之处在于，它会优先比较距离较远的元素。希尔排序又叫缩小增量排序。

相对于简单的插入排序，希尔排序的设计**更多地考虑了数据本身的特征**。本质上来说，希尔排序也是插入排序，或者说简单插入排序是gap = 1的希尔排序（gap下面代码中会提及，就是增量的意思）。比如对于543210的处理，我们想要让其变成递增序列。如果是传统的插入排序，那么需要比较和移动很多次，相当麻烦。但如果是希尔排序，变化过程是：543210 -> 210543 -> 012345 。很快就得到了答案。543210这串数字是有规律的数字，规律就是递减。实际处理数据的时候，数据本身很可能带有某种规律。简单插入排序是“埋头干”，希尔排序有参考到数据本身的性质，因此效率更高。

**算法描述**

先将整个待排序的记录序列分割成为若干子序列分别进行直接插入排序，具体算法描述：
+ 1.选择一个增量序列t1，t2，…，tk，其中ti>tj，tk=1；
+ 2.按增量序列个数k，对序列进行k 趟排序；
+ 3.每趟排序，根据对应的增量ti，将待排序列分割成若干长度为m 的子序列，分别对各子表进行直接插入排序。仅增量因子为1 时，整个序列作为一个表来处理，表长度即为整个序列的长度。

**动图演示**

![](https://images2018.cnblogs.com/blog/849589/201803/849589-20180331170017421-364506073.gif)

**图示算法**

![](https://images2015.cnblogs.com/blog/1024555/201611/1024555-20161128110416068-1421707828.png)

**代码实现 C++**

```C++

```

参考链接：[图解排序算法(二)之希尔排序](https://www.cnblogs.com/chengxiao/p/6104371.html)

[:point_up_2: Top](#sort)

#### 选择排序

##### 简单选择排序

**Selection Sort**

一般来说，选择排序就指代简单选择排序。

选择排序是一种简单直观的排序算法。它的工作原理：首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，再从剩余未排序元素中继续寻找最小（大）元素，
然后放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。 

**算法描述**

n个记录的直接选择排序可经过n-1趟直接选择排序得到有序结果。具体算法描述如下：
+ 1.初始状态：无序区为R[1..n]，有序区为空；
+ 2.第i趟排序(i=1,2,3…n-1)开始时，当前有序区和无序区分别为R[1..i-1]和R(i..n）。该趟排序从当前无序区中-选出关键字最小的记录 R[k]，将它与无序区的第1个记录R交换，使R[1..i]和R[i+1..n)分别变为记录个数增加1个的新有序区和记录个数减少1个的新无序区；
+ 3.n-1趟结束，数组有序化了。

**动图演示**

![](https://images2017.cnblogs.com/blog/849589/201710/849589-20171015224719590-1433219824.gif)

**代码实现 C++**

```C++
vector<int> selectionSort(vector<int>& arr) {
    int len = arr.size();
    int minIndex, temp;
    for(int i = 0; i < len - 1; i++) {
        minIndex = i;
        for(int j = i + 1; j < len; j++) {
            if(arr[j] < arr[minIndex]) {    // 寻找最小的数
                minIndex = j;                // 将最小数的索引保存
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    return arr;
} 
```

[:point_up_2: Top](#sort)

##### 堆排序 

**Heap Sort** 

[算法实现](https://github.com/ThreeSR/Algorithm-Toolbox/blob/master/HeapSort.py)

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

[:point_up_2: Top](#sort)

#### 归并排序

##### 二路归并排序 

**Merge Sort**

归并排序是建立在归并操作上的一种有效的排序算法。该算法是采用**分治法（Divide and Conquer）**的一个非常典型的应用。将已有序的子序列合并，得到完全有序的序列；即先使每个子序列有序，再使子序列段间有序。若将两个有序表合并成一个有序表，称为2-路归并。 

**算法描述**
+ 1.把长度为n的输入序列分成两个长度为n/2的子序列；
+ 2.对这两个子序列分别采用归并排序；
+ 3.将两个排序好的子序列合并成一个最终的排序序列。

**动图演示**

![](https://images2017.cnblogs.com/blog/849589/201710/849589-20171015230557043-37375010.gif)

**图示算法**

![](https://images2015.cnblogs.com/blog/1024555/201612/1024555-20161218163120151-452283750.png)

**代码实现 Python**

（首先使用Python的原因在于：C++或者其他语言书写较为繁琐，归并排序的思想使用Python语言就可以简洁明晰地表达。）
```python

def mergesort(seq):
    if len(seq) <= 1:
        return seq
    mid = len(seq)//2  
    
    left = mergesort(seq[:mid])  # divide 分割
    right = mergesort(seq[mid:])
    
    return merge(left, right) # merge 合并

def merge(left, right):
    result = []  
    i = 0  
    j = 0
    
    while i < len(left) and j < len(right): 
        if left[i] <= right[j]: # 比较大小，排序
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result += left[i:]  # 这两行的处理，是防止left或者right的一边处理完毕，另一边还没有处理完毕。把剩余部分直接放入result中。
    result += right[j:]
    return result

# test the code
seq = [5,3,0,6,1,4]
print(seq)
result = mergesort(seq)
print(result)

```

对照上面的Python代码，下面也给出C++代码：
```C++
/* Merge sort in C++ */
#include <cstdio>
#include <iostream>
 
using namespace std;
 
// Function to Merge Arrays L and R into A.
// lefCount = number of elements in L
// rightCount = number of elements in R.
void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;
 
	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;
 
	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}
 
// Recursive function to sort an array of integers.
void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing.
 
	mid = n/2;  // find the mid index.
 
	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = new int[mid];
	R = new int [n - mid];
 
	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray
 
	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
	// the delete operations is very important
	delete [] R;
	delete [] L;
}
 
int main() {
	/* Code to test the MergeSort function. */
 
	int A[] = {6,2,3,1,9,10,15,13,12,17}; // creating an array of integers.
	int i,numberOfElements;
 
	// finding number of elements in array as size of complete array in bytes divided by size of integer in bytes.
	// This won't work if array is passed to the function because array
	// is always passed by reference through a pointer. So sizeOf function will give size of pointer and not the array.
	// Watch this video to understand this concept - http://www.youtube.com/watch?v=CpjVucvAc3g
	numberOfElements = sizeof(A)/sizeof(A[0]);
 
	// Calling merge sort to sort the array.
	MergeSort(A,numberOfElements);
 
	//printing all elements in the array once its sorted.
	for(i = 0;i < numberOfElements;i++)
	   cout << " " << A[i];
	return 0;
}
```
C++代码的参考链接：[C++ Merge sort(归并排序)](https://blog.csdn.net/a130737/article/details/38228369)

看了Python代码再看C++代码，是不是感觉更简单了呢？

**相关力扣题目**

[**LC148 对链表进行排序**](https://github.com/ThreeSR/LeetCode/blob/main/LC148_Sort%20List_Merge%20Sort.py)

[:point_up_2: Top](#sort)

##### 多路归并排序

[:point_up_2: Top](#sort)

### 非比较排序

#### 计数排序

[:point_up_2: Top](#sort)

#### 基数排序

[:point_up_2: Top](#sort)

#### 桶排序 


[:point_up_2: Top](#sort)
***
## Bottom
