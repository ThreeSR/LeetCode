#include <bits/stdc++.h> // 万能头文件
using namespace std;

int n, m;
int a[50005], c[50005]; //对应原数组a和树状数组c

int lowbit (int x) {
    return x & (-x); // 得到2的k次方
}

void update(int i, int k){  // 在i位置加上k
    while (i <= n) {
        c[i] += k; // 从C[i]位置开始，后面的父节点需要更新
        i += lowbit(i); // index的更新 
    }
}

int getsum (int i) {  // 求A[1]到A[i]的和
    int result = 0;
    while (i > 0) {
        result += c[i]; // 求和累加
        i -= lowbit(i); // index的更新
    }
    return result;
}

int main() {
    int t;
    cin >> t; // 一共有几个case  
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":" << endl;
        memset(a, 0, sizeof(a));
        memset(c, 0, sizeof(c));
        cin >> n; // 输入原始数组的数据数量
        for (int j = 1; j <= n; j++) {
            cin >> a[j];
            update(j, a[j]);   // 输入初值的时候，也相当于更新了BIT。BIT成型
        }
        string s;
        int x, y;
        while (cin >> s && s[0] != 'E') { // 对输入字符串进行处理
            cin >> x >> y;  // 连续输入两个数（中间有enter）
            if(s[0] == 'Q'){    // 求和操作
                int sum = getsum(y) - getsum(x-1);  // x至y的区间和也就等于1至y的区间和减去1至(x-1)的区间和
                cout << sum << endl;
            }
            else if (s[0] == 'A') {
                update(x, y);
            }
            else if (s[0] == 'S') {
                update(x, -y);    // 减去操作，即为加上相反数
            }
        }

    }
    return 0;
}