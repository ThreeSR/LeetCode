class DisjointSet {  // 本题使用并查集做
private:
    int father[200];  // 根据题目要求，n在1到200之间，可取200。
public:
    void init(int n) {
        for (int i = 0; i < n; i++) {  // 初始化
            father[i] = i;
        }
    }
    // int find(int x) { // 这个find可用
    //     int root = x;
    //     while (root != father[root]) {  // 寻根
    //         root = father[root];
    //     }
    //     int originalFather;
    //     while (x != root) {  // 路径压缩
    //         originalFather = father[x];
    //         father[x] = root;
    //         x = originalFather;
    //     }
    //     return root;
    // }
    
    int find(int x) { // 这个find也可用
        return x == father[x] ? x : father[x] = find(father[x]); // 已包含路径压缩和寻根
    }
    
    void union2(int x, int y) { // 合并。注意，在写合并的时候，分清根节点和当前节点的关系，容易错。
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            father[rootX] = rootY;
        }
    }
    bool same(int x, int y) { // 判断两个节点是不是同一个集合的
        return find(x) == find(y);
    }
    int getNums(int n) { // 得到省份数量。这里和模板不同，是根据这道题目增加的
        unordered_set<int> res; // 一般来说，经常用set来计算并查集中集合的数量，也就是不交集（此处为省份）的数量
        for (int i = 0; i < n; i++) {
            res.insert(find(i)); // set中insert为插入方法。这里要插入节点的根，以此看有多少不同的集合
        }
        return res.size();
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(); // n是矩阵大小。注意，这里矩阵肯定是对称矩阵，这有助于下面的优化
        DisjointSet UnionFind; // 并查集
        UnionFind.init(n); // 初始化
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isConnected[i][j]) UnionFind.union2(i, j); // i城市和j城市有相连，那么就union起来 
            }
        }
        return UnionFind.getNums(n); // 得到结果
    }
};

// reference https://leetcode-cn.com/problems/number-of-provinces/solution/547-sheng-fen-shu-liang-bing-cha-ji-ji-c-qcj6/
// https://leetcode-cn.com/problems/number-of-provinces/solution/python-duo-tu-xiang-jie-bing-cha-ji-by-m-vjdr/