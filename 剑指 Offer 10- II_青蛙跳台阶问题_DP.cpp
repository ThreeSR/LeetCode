class Solution {
public:
    int numWays(int n) {
        if(n<=1) return 1;
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=n;++i){
            dp[i] = (dp[i-1]+dp[i-2])%1000000007;
        }
        return dp[n];
    }
};

// 这种问题不应该用递归，递归速度太慢。要用动态规划，其实DP和递归思想差不多，但还是需要改进一下。