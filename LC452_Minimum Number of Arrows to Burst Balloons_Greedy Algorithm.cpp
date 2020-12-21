class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b) { // 比较，从小到大排序
        return a[0] < b[0];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() == 0) return 0; // 特判
        sort(points.begin(), points.end(), cmp);
        int result = 1; // 已经过了特判，说明一定有气球，那么result初始值为1
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > points[i - 1][1]) result++; // 如果下一个气球的左边界在上一个气球的右边界之内，那么可以一箭穿多。注意！这里不能取等，因为题目要求，取等可以穿过。
            // 反之，如果左边界在右边界之外，那么要多一支箭。
            else points[i][1] = min(points[i][1], points[i - 1][1]); // 这是比较巧妙的地方。每次取的都是最小右边界。这样便于判断可不可以一箭穿多。
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/HxVAJ6INMfNKiGwI88-RFw