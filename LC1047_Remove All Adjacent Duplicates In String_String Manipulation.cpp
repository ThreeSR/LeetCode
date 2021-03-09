class Solution {
public:
    string removeDuplicates(string S) { // C++中，string有类似于队列的性质。
        string stack; // 用普通的string来模拟stack的操作
        for (char ch : S) {
            if (!stack.empty() && stack.back() == ch) { // 如果顶层元素和要加入的元素相等
                stack.pop_back(); // 那么把顶部的元素弹出，并且不让当前元素进入string。这样一来，可以删去两个重复的元素，比如aa
            } else {
                stack.push_back(ch); // 和顶层元素不相等，那么入栈
            }
        }
        return stack;
    }
};

// https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string/solution/shan-chu-zi-fu-chuan-zhong-de-suo-you-xi-4ohr/