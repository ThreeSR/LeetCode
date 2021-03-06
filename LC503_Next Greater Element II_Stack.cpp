class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) { // 单调栈，单调递减栈。本题和LC739每日温度非常类似。
        vector<int> result(nums.size(), -1); // 初始化
        if (nums.empty()) return result; // 特判
        stack<int> st; 
        for (int i = 0; i < nums.size() * 2; i++) { // 这里i的遍历范围要到size*2。这是因为这是一个滚动数组，最后一个元素还需要参考到前面的元素，所以这里的
        // 数组需要加长。最方便的操作就是将原本的长度扩充成原来的两倍，把数组在数组末尾重新接一遍。
            while ((!st.empty()) &&(nums[i % nums.size()] > nums[st.top()])) { // 涉及到滚动数组，经常用到 %运算。这一点很关键！
                auto temp = st.top(); // 这里就是单调栈的常规操作，注意栈里面存的是下标！
                st.pop(); // 如果遇到更大的数值，那么栈顶元素要出栈，始终保持从栈底到栈顶是递减的，也就是单调递减栈。
                result[temp] = nums[i % nums.size()]; // 取出更大的数值进入结果中
            }
            st.push(i % nums.size()); // 放元素入栈
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/next-greater-element-ii/solution/503-xia-yi-ge-geng-da-yuan-su-iidan-diao-9ez5/