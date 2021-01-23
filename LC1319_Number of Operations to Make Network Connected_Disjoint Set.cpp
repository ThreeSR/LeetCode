class DisjointSet {  // 并查集模板
private:
    vector<int> father;
    int rest;  // 统计剩余线个数
    int count; // 统计连通分量个数
public:
    DisjointSet(int n) : father(vector<int>(n)), rest(0), count(n) {
        for (int i = 0; i < n; i++) {
            father[i] = i;
        }
    }
    int find(int x) {
        return x == father[x] ? x : father[x] = find(father[x]);
    }
    void union2(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            father[rootX] = rootY;
            count--; // 如果不同根，那么合并，并且连通分量个数减一
        }
        else rest++; // 如果是同根的，那么可以结余一条线
    }
    int getCount() { // 得到连通分量个数
        return count;
    }
    int getRest() { // 得到剩余线的个数
        return rest;
    }

};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int size = connections.size();
        DisjointSet UnionFind(n);
        for (int i = 0; i < size; i++) {
            UnionFind.union2(connections[i][0], connections[i][1]);
        }
        if (UnionFind.getRest() < UnionFind.getCount() - 1) return -1; // 如果剩余的线不够，返回-1
        return UnionFind.getCount() - 1; // 够，就返回连通图个数-1，这就是所需最小操作次数
    }
};

// 总的来说，难点在于最小操作次数的理解。这就等于图的数量-1，就是用横线把图连在一起的线段数。但不能成环。