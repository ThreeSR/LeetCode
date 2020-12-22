class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b) { // 贪心算法
        return a[1] < b[1]; // 右边界从小到大排序
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) return 0; // 特判
        sort(intervals.begin(), intervals.end(), cmp); // 排序
        int end = intervals[0][1]; // 记录第一个排序后的右边界。我们希望从左到右遍历的过程中，右边界始终取最小的那个，这样移除的区间数最少。
        int count = 1; // 我们记录的是不用移除的数目，这个比记录要移除的数目更加清晰方便。因为已经有元素在intervals中，所以初始值为1。
        for (int i = 1; i < intervals.size(); i++) { // 从左到右开始遍历
            if (end <= intervals[i][0]) { // 和LC452相似，这里要计算没有重合的区间。所以i-1的右边界小于等于i的左边界。这时候，代表有一个没有重合的区间。
                end = intervals[i][1]; // 更新新的区间的右边界为end
                count++; // 计数+1
            }
        }
        return intervals.size() - count; // 再次强调，因为算的是不用移除的数量，所以总size减去不用移除的数目就是要移除的数目。
    }
};

// reference https://mp.weixin.qq.com/s/oFOEoW-13Bm4mik-aqAOmw

/* 
注：
1.本题也可以左边界排序，然后从右到左进行遍历。但没有右边界排序来得直观；
2.当问题的一面比较复杂，可从对立面入手。
3.为什么右边界要按照从小到大的遍历？然后这样就可以确保移除最少？左边界就要从大到小遍历？
答：详见Solution图解。 
*/