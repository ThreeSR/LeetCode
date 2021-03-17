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
//#include<memory.h>//低版本G++编译器不支持，若使用这种G++编译器此段应注释掉
#include<iomanip>
#include<vector>
#include<cstring>
#define scd(n) scanf("%d",&n)
#define scf(n) scanf("%f",&n)
#define scc(n) scanf("%c",&n)
#define scs(n) scanf("%s",n)
#define prd(n) printf("%d",n)
#define prf(n) printf("%f",n)
#define prc(n) printf("%c",n)
#define prs(n) printf("%s",n)
#define rep(i,a,n) for (int i=a;i<=n;i++)//i为循环变量，a为初始值，n为界限值，递增
#define per(i,a,n) for (int i=a;i>=n;i--)//i为循环变量， a为初始值，n为界限值，递减。
#define pb push_back
#define fi first
#define se second
#define mp make_pair
using namespace std;
const int inf = 0x3f3f3f3f;//无穷大
const int maxn = 2e5+1;//最大值。
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll>  pll;
typedef pair<int, int> pii;
//*******************************分割线，以上为代码自定义代码模板***************************************//

int father[maxn];

struct Node{
	int left;
	int right;
	int minn,maxx;//区间[left,right]的最小值和最大值。
}node[maxn<<2];

void BuildTree(int i,int l,int r){
	node[i].left=l;node[i].right=r;
	node[i].minn=inf;node[i].maxx=0;
	if(l==r){
		father[l]=i;
		return;
	}
	BuildTree(i<<1,l,(l+r)/2);
	BuildTree(i<<1|1,(l+r)/2+1,r);
}

void UpdateTree(int i){
	if (i == 1) return;
	int fi = i >> 1;
	node[fi].maxx = max(node[fi<<1].maxx,node[fi<<1|1].maxx);
	node[fi].minn = min(node[fi<<1].minn,node[fi<<1|1].minn);
	UpdateTree(fi);
}

int maxx,minn;
void QueryTree(int i,int l,int r){
	if(l==node[i].left&&r==node[i].right){
		maxx=max(maxx,node[i].maxx);
		minn=min(minn,node[i].minn);
		return;
	}
	i=i<<1;
	if(l<=node[i].right){
		//说明在左子树
		if(r<=node[i].right){
			//说明全包含在左子树。
			QueryTree(i,l,r);
		}
		else{
			//说明部分包含在左子树。
			QueryTree(i,l,node[i].right);
		}
	}
	i += 1;
	if(r >= node[i].left){
		//说明在右子树。
		if(l>=node[i].left){
			//说明全包含在右子树。
			QueryTree(i,l,r);
		}
		else{
			QueryTree(i,node[i].left,r);
		}
	}
}
int main() {
	//freopen("in.txt", "r", stdin);//提交的时候要注释掉
	ios::sync_with_stdio(false);//打消iostream中输入输出缓存，节省时间。
	cin.tie(0); cout.tie(0);//可以通过tie(0)（0表示NULL）来解除cin与cout的绑定，进一步加快执行效率。
	int n, m, temp;
	while (cin >> n >> m) {
		BuildTree(1, 1, n);
		rep (i, 1, n) {
			cin >> temp;
			node[father[i]].maxx = node[father[i]].minn = temp;
			UpdateTree(father[i]);
		}
		int a, b;
		while (m--) {
			cin >> a >> b;
			maxx = 0;  // 这里设置初值有点tricky，常用方法
            minn = inf;
			QueryTree(1, a, b);
			cout << maxx - minn << endl;
		}
	}
	return 0;
}

// reference https://blog.csdn.net/hzf0701/article/details/107861944