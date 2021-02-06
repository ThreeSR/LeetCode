class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) { // 优先队列 大顶堆
        int n = nums.size();
        if (n == 0) return {}; // 特判
        priority_queue<pair<int, int>> q; // 这个大顶堆存储两个数值，一个是nums对应数值，另一个是数值对应的index索引值
        for (int i = 0; i < k; ++i) { // 将一个窗口的数值全部送进大顶堆
            q.emplace(nums[i], i);
        }
        vector<int> ans = {q.top().first}; // ans用来保存最大值
        for (int i = k; i < n; ++i) { // 窗口移动
            q.emplace(nums[i], i);
            while (q.top().second <= i - k) { // 这里是while循环，并且加这个循环的目的是：防止大顶堆的最大值已经不在窗口中
            // 因为大顶堆不能访问其中的元素。其实即使能访问，你也不方便去寻找。所以我们对于查找元素的突破口放在顶端。当某个最大元素
            // 不在窗口中，那么就将其移除，也将后继的不在窗口中的最大值一并移除。这些后继的又不在窗口的最大值，存在的原因是之前
            // 最大值一直占着大顶堆的顶部坑位，这些后继的数值排不出去。
            // 我们关心的就是最大值
                q.pop();
            }
            ans.push_back(q.top().first); // 将新的最大值放进ans中
        }
        return ans;
    }
};

// reference https://leetcode-cn.com/problems/sliding-window-maximum/solution/hua-dong-chuang-kou-zui-da-zhi-by-leetco-ki6m/

// 不同于LC239的另外一种解法，这种解法运用了相关数据结构，不用自己造车，更加简单。