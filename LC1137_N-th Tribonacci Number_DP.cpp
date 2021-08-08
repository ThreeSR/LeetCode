class Solution {
public:
    int tribonacci(int n) { // 滚动数组
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;
        vector<int> dp(3, 1);
        dp[0] = 0;
        int result = 2;
        for (int i = 3; i < n; i++) {
            dp[i % 3] = result;
            result = accumulate(dp.begin(), dp.end(), 0); // 注意accumulate的使用！最后需要加一个0
        }
    return result;
    }
};