class Solution {
static bool cmp(int a, int b) { // 注意是abs比较
    return abs(a) > abs(b);
}
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(), A.end(), cmp); // 排序，从大到小
        for (int i = 0; i < A.size(); i++) {
            if (A[i] < 0 && K > 0) { // 有负数并且还有翻转的机会时
                A[i] *= -1; // 从大到小对负数进行翻转
                K--; // 机会-1
            }
        }
        while (K--) A[A.size() - 1] *= -1; // 当机会比需求更多时，那就不停地在最小数处翻转，反正损失也最小
        int result = 0;
        for (int a : A) result += a; // 收集最后的各个数字，求和即可
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/dMTzBBVllRm_Z0aaWvYazA