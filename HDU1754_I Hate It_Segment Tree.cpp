#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<string>
#include<stack>
#include<queue>
#include<cstring>
#include<map>
#include<iterator>
#include<list>
#include<set>
#include<functional>
#include<memory.h> // 低版本G++编译器不支持，若使用这种G++编译器此段应注释掉
#include<iomanip>
#include<vector>
#include<cstring>
#define scd(n) scanf("%d", &n)
#define scf(n) scanf("%f", &n)
#define scc(n) scanf("%c", &n)
#define scs(n) scanf("%s", n)
#define prd(n) printf("%d", n)
#define prf(n) printf("%f", n)
#define prc(n) printf("%c", n)
#define prs(n) printf("%s", n)
#define rep(i, a, n) for (int i = a; i <= n; i++) // i为循环变量，a为初始值，n为界限值，递增
#define per(i, a, n) for (int i = a; i >= n; i--) // i为循环变量， a为初始值，n为界限值，递减。
#define pb push_back
#define fi first
#define se second
#define mp make_pair
using namespace std;
const int inf = 0x3f3f3f3f; // 无穷大
const int maxn = 2e5+2; // 最大值
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll>  pll;
typedef pair<int, int> pii;
//*******************************分割线，以上为代码自定义代码模板***************************************//

int father[maxn]; // 存储一个数值在线段树中的下标，此处maxn需要是一个很大的数值

struct Node {
	int left;
	int right;
	int value;
}node[maxn << 2];

void BuildTree(int i, int l, int r) { // 自上而下地建造树
	node[i].left = l;
    node[i].right = r;
	node[i].value = 0;
	if (l == r) {
		father[l] = i;       // 保存叶子结点在线段树中的下标
		return;            // 到了叶子结点自然要返回咯。
	}
	BuildTree(i << 1, l, (l + r) / 2);  // 初始化左子树
	BuildTree(i << 1 | 1, (l + r) / 2 + 1, r); // 初始化右子树。
}
void UpdateTree(int i) { // 自下而上地update树
	if (i == 1) return; // 说明已到达根节点。
	int fi = i >> 1; // 获取父结点的下标
	node[fi].value = max(node[fi << 1].value, node[fi << 1 | 1].value); // 获取最大值
	UpdateTree(fi);
}
int maxx;
// 查询操作，调用函数为QueryTree(1,l,r)。
void QueryTree(int i, int l, int r) {
	if (node[i].left == l && node[i].right == r) { // 刚好找到
		 maxx = max(maxx, node[i].value);
		 return;
	}
	i = i << 1;
	if (l <= node[i].right) {
		//说明在左子树中
		if (r <= node[i].right) {
			//说明全部在左子树中。
			QueryTree(i, l, r);
		}
		else {
			//说明部分在左子树中
			QueryTree(i, l, node[i].right);
		}
	}
	i += 1;
	if(r >= node[i].left) {
		//说明在右子树中
		if (l >= node[i].left) {
			//说明全部在右子树中。
			QueryTree(i, l, r);
		}
		else {
			//说明部分在右子树中。
			QueryTree(i, node[i].left, r);
		}
	}
}
int main() {
	//freopen("in.txt", "r", stdin);//提交的时候要注释掉
	ios::sync_with_stdio(false); // 打消iostream中输入输出缓存，节省时间。
	cin.tie(0); cout.tie(0); // 可以通过tie(0)（0表示NULL）来解除cin与cout的绑定，进一步加快执行效率。
	int n, m, temp;
	while (cin >> n >> m) {
		BuildTree(1, 1, n); // 线段树建立起来了，但是里面的数值都是0，需要update
		rep(i, 1, n) { // 这就是上面定义的for循环
			cin >> temp;
			node[father[i]].value = temp; // father：叶子结点在线段树中的下标
			UpdateTree(father[i]);
		}
		char ch;
		int a, b;
		while (m--) {
			cin >> ch >> a >> b;
			if (ch == 'Q') {
				maxx = 0;
				QueryTree(1, a, b);
				cout << maxx << endl;
			}
			else {
				node[father[a]].value = b;
				UpdateTree(father[a]);
			}
		}
	}
	return 0;
}

// reference https://blog.csdn.net/hzf0701/article/details/107860410