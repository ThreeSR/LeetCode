class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>> &points) {
        int ans = 0;
        for (auto &p : points) {
            unordered_map<int, int> cnt; // 哈希表
            for (auto &q : points) {
                int dis = (p[0] - q[0]) * (p[0] - q[0]) + (p[1] - q[1]) * (p[1] - q[1]);
                ++cnt[dis];
            }
            for (auto &[_, m] : cnt) { // 注意这种语法格式！！
                ans += m * (m - 1);
            }
        }
        return ans;
    }
};

// reference https://leetcode-cn.com/problems/number-of-boomerangs/submissions/