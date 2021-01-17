class DisjointSet {  // 并查集模板
public:
    int father[20005];
    void init(int n) {
       for (int i = 0; i < n; i++) father[i] = i; 
    }
    int find(int x) {
        return x == father[x] ? x : father[x] = find(father[x]);
    }
    void union2(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) father[rootY] = rootX;
    }
    bool same(int x, int y) {
        return find(x) == find(y);
    }
};
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        DisjointSet UnionFind;
        UnionFind.init(20005);
        for (int i = 0; i < stones.size(); i++) {
            UnionFind.union2(stones[i][0], stones[i][1] + 10000);  // 所谓横向或者纵向相邻，就是通过并查集进行合并。可以进行一定的手算，验证其合理性。
            // 看上去只有y并到x的过程。但其实在合并过程中需要find，这个时候有包括x并到x的过程。所以总的来说，仅仅通过这一步，就可以解决相邻的问题。
        }
        unordered_map<int, bool> hashtable; // 我们制作一个哈希表，这样的一个表格纯粹是计算连通集个数的，没什么其他作用。你也可以让他们等于int的1，或者bool的false。
        for (int i = 0; i < stones.size(); i++) {
            hashtable[UnionFind.find(stones[i][1] + 10000)] = true; // 计算连通集个数。为什么要计算这个？因为通过对题目的观察可知，最终的结果等于总的石头数减去并查集之后的连通集个数
        }
        return stones.size() - hashtable.size(); // 得到结果
    }
};
// reference https://leetcode-cn.com/problems/most-stones-removed-with-same-row-or-column/solution/dai-ma-sui-xiang-lu-947-yi-chu-zui-duo-d-joho/
// 上述过程比较难明白，所以除了上面的题解链接，我再附上图解链接：
// https://leetcode-cn.com/problems/most-stones-removed-with-same-row-or-column/solution/tu-jie-bing-cha-ji-by-yexiso-nbcz/
// 关键图在Solution中也有，可以查看。