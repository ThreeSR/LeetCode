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
    void union2(int x, int y) {
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
struct Edge { // 创建一个Edge结构体，里面有三个变量，分别是：长度，原本ID，现在ID。这个ID定义为i * col + j，所以一开始的ID是0，最后一个点的ID是row * col，在
// 处理的时候，应该是row * col - 1。
    int length, originalID, currentID;
    Edge(int length, int originalID, int currentID) : length(length), originalID(originalID), currentID(currentID) {}
};
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int row = heights.size();
        int col = heights[0].size();
        vector<Edge> edges; // 存放边
        DisjointSet UnionFind(row * col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int ID = i * col + j; // ID 赋值，需要ID的原因在于，这样才可以利用并查集思路进行合并。本身并查集合并的
                // 是一维数组，但是题中的图是二维的。ID的操作是降维作用。
                if (i > 0) { // 只有i和j都大于0，才有计算length的意义
                    edges.emplace_back(abs(heights[i][j] - heights[i - 1][j]), ID - col, ID);
                }
                if (j > 0) {
                    edges.emplace_back(abs(heights[i][j - 1] - heights[i][j]), ID - 1, ID);
                }
            }
        }
        sort(edges.begin(), edges.end(), [](Edge a, Edge b){return a.length < b.length;}); // 排序，将边按照length的从小到大排序
        for (auto& edge : edges) {
            UnionFind.union2(edge.originalID, edge.currentID); // 将排序后的边合并
            if (UnionFind.isConnected(0, row * col - 1)) return edge.length; // 最终在开始位置和结尾已经连通时，这个时候的length就是题目要求的length
        }
        return 0;
    }
};

// reference https://leetcode-cn.com/problems/path-with-minimum-effort/solution/c-bing-cha-ji-by-ren-ran-he-cong-6y9z/
/*
一些问题：
1.本题思路是：将边赋值ID，之后并查集。待到初始和末尾位置在同一个连通图中，得到结果。为什么这时候就是结果？原因之一在于题目对于length的定义，是最大绝对值；
原因之二在于，我们已经排序过了。这时候边在添加的过程中，即使一些边在最后的路径中没有用到，也不会对length造成影响，只有最后那一条边（最大那一条）的加入，使得
开始结尾相通，才会对结果有影响。
2.一些结构体和类的赋初值的书写方法，可以学习。
3.emplace_back()和push_back()的区别：
完成同样的操作，push_back() 的底层实现过程比 emplace_back() 更繁琐，换句话说，emplace_back() 的执行效率比 push_back() 高。因此，在实际使用时，
建议大家优先选用 emplace_back()。
由于 emplace_back() 是 C++ 11 标准新增加的，如果程序要兼顾之前的版本，还是应该使用 push_back()。
reference http://c.biancheng.net/view/6826.html
*/