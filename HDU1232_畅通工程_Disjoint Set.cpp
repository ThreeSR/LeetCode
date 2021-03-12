#include <iostream>
#include <cstring>
using namespace std;
const int maxn =1000+5;
int fa[maxn];
// 下面是并查集模板
int find(int x) // 查
{
    // return fa[x] == -1 ? x : fa[x]=find(fa[x]); // 这样写也行
    if (fa[x] == -1)
        return x;
    return fa[x] = find(fa[x]);
}
int merge(int x, int y)  // 并
{
    int fx = find(x);
    int fy = find(y);
    if (fx != fy)
    {
        fa[fx] = fy;
        return 1;
    }
    return 0;
}
int main()
{
    int n, m;
    while (cin >> n, n) // 输入，n是城镇数量，相当于图中的点
    {
        cin >> m; // m是修的路的数量，相当于图中的边
        int ans = n - 1; // 如果什么路都没有修，最多修n - 1条路
        memset(fa, -1, sizeof(fa)); // 对fa数组赋值，全部赋值都是-1
        while (m--)
        {
            int x, y; // x和y是某一条修的路对应的两座城市
            cin >> x >> y; // 输入x和y
            ans -= merge(x, y); // 减去修好的路，如果两座城市已经可以相通，那么减零
            // 如果不通，那么减一。最后ans就是还需要修的路的数量
        }
        cout << ans << endl;
    }
    return 0;
}

// 本题为并查集的模板题