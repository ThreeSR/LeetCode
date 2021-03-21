class Solution {
public:
    int mySqrt(int x) { // 二分法
        int l = 0, r = x, ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2; // 防止溢出
            if ((long long)mid * mid <= x) { // 小于和等于，两种情况一起考虑
                ans = mid; // 等于的情况
                l = mid + 1; // 小于的处理
            } else {
                r = mid - 1; // 大于的情况
            }
        }
        return ans;
    }
};

// 其实本题也可以小于，大于，等于，三种情况分开处理。
// 二分法是重要的方法，比起传统的，一个个试过去的方法，二分法显然高效