class DisjointSet {  // 并查集模板
public:
    int father[1005];  
    void init(int n) {
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
        if (rootX != rootY) father[rootX] = rootY;
    }
    bool same(int x, int y) {
        return find(x) == find(y);
    }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {  // 本题使用并查集求解，最重要的是要明白什么是冗余连接。
    // 冗余连接，通俗的说，就是从树变成环的最后一步。我们需要抛弃这一步，使得树的结构依然成立。
    // 明白这一点，我们就知道可以用并查集的方法，在各个边合并之后，看哪个边的两个节点最早处于同一个集合。这个时候输出这条边即可
        DisjointSet UnionFind;
        UnionFind.init(1005); // 初始化
        for (int i = 0; i < edges.size(); i++) {
            if (UnionFind.same(edges[i][0], edges[i][1])) return {edges[i][0], edges[i][1]}; // 找到了冗余连接，输出
            else UnionFind.union2(edges[i][0], edges[i][1]);  // 不是冗余连接，那么就把两个点合并
        }
        return {};  // 都没有冗余连接，那么输出空值
    }
};

// reference https://leetcode-cn.com/problems/redundant-connection/solution/684-rong-yu-lian-jie-bing-cha-ji-ji-chu-eartc/

// 最后说明一个可能存在的疑惑：题目中说的是输出最后连接的边，但是代码中是一遇到相同集合的边就输出，这样违背了题目的意思吗？
// 其实没有违背。题目所谓的输出最后连接的边，其实就是第一条由树成环的边。我们这里输出的就是这个第一条成环的边，和题意相通，并不违背。