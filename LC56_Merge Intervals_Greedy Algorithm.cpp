class Solution {
public:
    static bool cmp (const vector<int>& a, const vector<int>& b) { // 排序
        return a[0] < b[0];
    } 
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if (intervals.size() == 0) return result; // 特判
        sort(intervals.begin(), intervals.end(), cmp); // 按照第一个数值大小从小到大进行排序。其实这里不用cmp，缺省就是对第一个数字从小到大排序
        bool flag = false; // 为了对最后一个区间进行判断，作用见下面
        int length = intervals.size();
        for (int i = 1; i < length; i++) {
            int start = intervals[i - 1][0]; // 得到前一个区间的开始位置
            int end = intervals[i - 1][1]; // 得到结束位置。对于合并，我们应该知道：前一个区间的右端点大于等于后一个区间的左端点时，有合并的意义。
            while (i < length && end >= intervals[i][0]) { // 合并
                end = max(intervals[i][1], end); // 得到更新之后的最大右端点，这里有贪心的思路
                if (i == length - 1) flag = true; // 如果是最后一个，那么true。
                i++;  // 结束之后这里i++，因为可能基于目前区间，还有别的区间要合并。
            } // 这里思考i的问题：前面while中i++，for循环下i++。i可能加两次。先不考虑i=length-1，while先++，之后for++，进行到int start的时候，其实intervals是i-1，所以
            // i之前在while中多加的1可以抵消掉，i取值没问题。但是i=length-1就需要特判了。因为while中假设length-2可行，但-1不行。那么出while的时候，i是length-1，到for之前
            // 又++变成length，不能再进for循环。这时候最后一个区间会被忽略。因此这个时候，要用flag标记，并且在忽略之后，在下方程序补录最后一个区间，判断依据就是flag。
            // 这就是设立flag的原因。
            result.push_back({start, end}); // 加入新生成的区间，注意加入的时候，start和end要用大括号加入
        }
        if (flag == false) { // 补录最后一个区间
            result.push_back({intervals[length - 1][0], intervals[length - 1][1]});
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/merge-intervals/solution/56-he-bing-qu-jian-bu-zhi-bu-jue-jiu-yong-tan-xin-/