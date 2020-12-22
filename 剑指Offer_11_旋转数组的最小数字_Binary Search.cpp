class Solution {
public:
    int minArray(vector<int>& numbers) { // 二分法
        int left = 0, right = numbers.size() - 1;
        while (left < right) { // 不取等号的二分法
            int mid = left + (right - left) / 2;
            if (numbers[mid] < numbers[right]) right = mid;
            else if (numbers[mid] > numbers[right]) left = mid + 1;
            else right--; // 这一步是为了去除重复出现的元素
        }
        return numbers[left]; // right也可以，这时候left == right
    }
};

// reference https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/solution/mian-shi-ti-11-xuan-zhuan-shu-zu-de-zui-xiao-shu-3/
// 具体的分类讨论见链接，是比较复杂的。本题是非典型的二分搜索，这样做比较“胆大”，需要仔细分析不同情况。
// 本题和LC154一样