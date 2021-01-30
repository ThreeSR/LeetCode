class DisjointSet { // 并查集模板
public:
    vector<int> father;
    DisjointSet(int n) : father(vector<int>(n)) {
        for (int i = 0; i < n; i++) {
            father[i] = i;
        }
    }
    int find(int x) {
        return x == father[x] ? x : father[x] = find(father[x]);
    }
    void union2 (int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            father[rootX] = rootY; 
        }
    }
    bool isConnected(int x, int y) {
        return find(x) == find(y);
    }
};
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        // 本题在审题的时候应该注意：grid[i][j] 是 [0, ..., N*N - 1] 的排列！这一点在下面写代码的时候很关键。
        int n = grid.size();
        DisjointSet UnionFind(n * n); // 初始化，这样的初始化代表将二维数组转成一维，初始化成并查集
        vector<pair<int, int>> directions = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}}; // 应该要掌握的技巧，在接雨水等题目中都有应用
        // python中的写法也应明白
        vector<pair<int, int>> ID(n * n); // 目的在于，将水位和所在位置进行对应
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ID[grid[i][j]] = make_pair(i, j); // make_pair函数：无需写出类别，就可以生成一个pair对象。一般生成pair对象需要：pair<int, int>之类的写法，这个
                // 函数不用这样写，方便。 
            }
        }
        for (int threshold = 0; threshold < n * n; threshold++) { // 按照题意，水位高度不会超过n * n - 1，所以这样设置条件
        // 这个语句的存在来自于等待下雨时长，水位会增加
            auto [curX, curY] = ID[threshold]; // 得到对应水位的位置。为什么就一定能得到对应位置？因为grid[i][j] 是 [0, ..., N*N - 1] 的排列。
            for (const auto [x, y] : directions) { // 考量这个位置上下左右方向
                int nextX = curX + x;
                int nextY = curY + y;
                if ((nextX >= 0) && (nextX < n) && (nextY >= 0) && (nextY < n) && (grid[nextX][nextY] <= threshold)) {
                    // 很经典的判断语句，一般考量方位的时候，都要考虑下一个位置是不是依然在取值范围之内。
                    UnionFind.union2(curX * n + curY, nextX * n + nextY); // 对应位置合并。这里体现了二维数组映射到一维并查集father数组
                    // 一般这种映射都是i * col + j的形式。好处在于，数组最后一个位置是m * n - 1的形式，方便书写理解。
                }
                if (UnionFind.isConnected(0, n * n - 1)) return threshold; // 判断起始和终点是否相连，如果相连，结束。
            }
        }
        return -1;
    }
};

// reference https://leetcode-cn.com/problems/swim-in-rising-water/solution/shui-wei-shang-sheng-de-yong-chi-zhong-y-xm9i/
// 代码动态图解详见Solution中的gif
// 可以发现，这题和LC1631 Path With Minimum Effort 最小体力消耗路径 很像