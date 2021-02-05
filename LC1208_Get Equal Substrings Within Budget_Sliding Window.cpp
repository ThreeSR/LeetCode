class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) { // 双指针法，滑动窗口
        int left = 0; // 左边指针
        int cost = 0; // 开销
        for (int i = 0; i < s.size(); i++) { // 这里i的数值当做是右指针进行移动
            cost += abs(s[i] - t[i]); // 直接进行字母的ASCII码运算
            if (cost > maxCost) { // 滑窗的维护
                cost -= abs(s[left] - t[left]);
                left++; // 左指针移动
            }
        }
        return s.size() - left; // 输出长度即可。注意：：这里不需要进行maxLen的维护。因为在移动过程中，最大长度会被保存下来。
    }
};

// reference https://leetcode-cn.com/problems/get-equal-substrings-within-budget/solution/jin-ke-neng-shi-zi-fu-chuan-xiang-deng-b-higz/
// 关于不需要维护maxLen，可以详见链接中内容。