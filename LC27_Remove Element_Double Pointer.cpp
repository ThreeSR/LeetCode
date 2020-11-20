class Solution {
public:
    int removeElement(vector<int>& nums, int val) { // 双指针法，定义一个慢指针，一个快指针
        int slowIndex = 0;
        for(int fastIndex=0;fastIndex<nums.size();++fastIndex){ // 快指针向前移动，查询是否有和val相等的元素
            if(val!=nums[fastIndex]){ // 不相等的时候，慢指针对应的内容得到赋值
                nums[slowIndex++]=nums[fastIndex]; // 这样一来，隔去了val，留下了应有的元素。slowindex就是数组长度，这个语句在处理之后，slowindex自己++
                // 不论如何，slowindex的指向小于等于fastindex，因此这样的调整不会影响到原数组，还可以把val删去
            }
        }
    return slowIndex;
    }
};

// reference https://mp.weixin.qq.com/s?__biz=MzUxNjY5NTYxNA==&mid=2247484304&idx=1&sn=ad2e11d171f74ad772fd23b10142e3f3&scene=21#wechat_redirect
/*
本题很特殊，虽然是int型的函数，好像给出nums的长度就好。但其实题目也要求要把nums里面的内容进行修正。
说明:

为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:

// nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
int len = removeElement(nums, val);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}

总之：不光要返回删除后数组的长度，也要返回删除后数组的内容。

*/