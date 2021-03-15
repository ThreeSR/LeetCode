class Solution {  // 脑筋急转弯
public:
    int bulbSwitch(int n) {
        return sqrt(n); // C++内置的sqrt函数就是向下取整的
    }
};

// reference https://leetcode-cn.com/problems/bulb-switcher/solution/ru-guo-bu-shi-mo-ni-guo-cheng-bu-neng-tong-guo-shu/
/*
拿到题目首先想模拟n次开关过程，结果数据量太大超时了，27/35，n=99999.

于是转而观察某个位置，看看某个位置是怎样变化的，什么条件下会翻转

第18个灯泡会在1,2,3,6,9,18轮翻转。
第36个灯泡会在1,2,3,4,6,9,12,18,36轮翻转。

规律显而易见，只有在轮数是该位置因数的时候才会执行翻转操作。

于是我们回答了那个问题：只要找到该位置的所有因数个数，我们就知道该位置翻转了多少次。

更进一步的，除了完全平方数，因数都是成对出现的，这意味着实际起到翻转作用(0->1)的，只有
完全平方数而已。

此时任务已经大大简化，因为n个灯泡翻转n轮，我们只要看看到n位置，一共有多少个完全平方数即可。

注意：考察完全平方数有多少个，就求它的根号并向下取整即可。比如37，有6个。因为6*6都比它小，所以1*1,2*2,3*3...不在话下
因此是6个，即根号37向下取整。（0应该不算）
*/