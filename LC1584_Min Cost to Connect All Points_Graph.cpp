class DisjointSet { // 本题是kruskal算法，本质可以认为是并查集，最小生成树。
// 基本思路是把图中的每一条边枚举，从小到大排序，从小到大地选取一条条边，最终生成最小生成树。
// 并查集的作用在于判断连通子集是不是达到了最小生成树的要求。显然所有图节点都在一个集合时，
// 最小生成树完成。这里的思路也有点像力扣684——冗余连接。这些说是并查集，其实都是图论的题目。
// 可以选择用并查集的思路，也可以用图论里面的BFS，DFS。
// 和prim算法不同，prim算法从图节点入手，kruskal算法从边入手。显然，图比较稀疏的时候用kruskal，反之prim。
public:
    vector<int> father;  // 记录并查集父节点
    vector<int> numPoints;  // 记录当前连通图中图节点数目
    vector<int> len;  // 记录当前连通图中所有路径的长度
    int num;  // 图中图节点个数
    DisjointSet(int n) : father(n), numPoints(n, 1), len(n, 0), num(n) { // 初始化，下面是并查集模板
        for (int i = 0; i < n; i++) {
            father[i] = i; // 父节点初始化
        }
    }
    int find(int x) { // 查
        return x == father[x] ? x : father[x] = find(father[x]);
    }
    int union2(int x, int y, int length) {  // 并   这里其实还可以优化，但在这我没有优化o(╥﹏╥)o
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            father[rootY] = rootX; // 到这一步都是常规并查集操作
            len[rootX] += len[rootY] + length;  // 更新当前连通图中路径长度
            numPoints[rootX] += numPoints[rootY];  // 更新当前连通图中图节点个数
            if (numPoints[rootX] == num) return len[rootX];  // 如果连通图中图节点个数等于总的图节点个数，那么代表最小生成树生成完毕，这个时候返回路径长度
        }
        return -1; // 最小生成树还没有建立好，返回数值-1
    }
};
struct Edge { // 针对于本题，可以创建一个结构体Edge
    int start; // 代表初始点
    int end; // 代表结尾点，这两个坐标点决定一条线
    int distance; // 保存两点之间的曼哈顿距离
};
static bool cmp(const Edge& a, const Edge& b) { // 升序排序
    return a.distance < b.distance;
}
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<Edge> edges; // 生成Edge类的动态数组
        int res;
        int n = points.size();
        DisjointSet UnionFind(n);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { // 第二层循环中，j从i + 1开始，这就是一个枚举的过程，所以从i + 1开始
                Edge edge{i, j, abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1])}; // 保存点和距离
                edges.push_back(edge);
            }
        }
        sort(edges.begin(), edges.end(), cmp); // 按照边长度排序
        for (auto& e : edges) {
            res = UnionFind.union2(e.start, e.end, e.distance); // 把图节点进行连接，得到对应边的长度。这样的连接持续到最小生成树生成
            if (res != -1) return res; // res！=-1的时候，就是生成的时候，这时候输出结果。
        }
        return 0;
    }
};

// reference https://leetcode-cn.com/problems/min-cost-to-connect-all-points/solution/prim-and-kruskal-by-yexiso-c500/