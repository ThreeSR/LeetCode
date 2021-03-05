class Solution {
public:
    int maxProfit(int k, vector<int>& prices) { // 动态规划 
    // 相较于前面的买卖股票III，这一题将前一题的一些概念更加抽象化。

        if (prices.size() == 0) return 0; // 特判
        vector<vector<int>> dp(prices.size(), vector<int>(2 * k + 1, 0)); // 对于数组的定义：除了0以外，偶数就是卖出，奇数就是买入。
        // 不同于III中，我们将各个情况枚举，分类讨论。这边我们根据定义，总结出规律。
        for (int j = 1; j < 2 * k; j += 2) { // 关于初始化这边，需要理解：一开始的时候，“买入”都是支出，即-prices[0]。因为都是初始操作，所以都是从-prices[0]开始。
        // 这有些难以理解。
            dp[0][j] = -prices[0];
        } // 至于那些偶数j对应的dp，就都是0。这是因为一开始没有持仓，就没有赎回。所以只能是0。
        for (int i = 1;i < prices.size(); i++) {  // 和前面几道题类似的dp过程
            for (int j = 0; j < 2 * k - 1; j += 2) { // 注意：这边j是j+=2！这是因为每个j背后，都是对应一次成对的买入卖出操作。
                dp[i][j + 1] = max(dp[i - 1][j + 1], dp[i - 1][j] - prices[i]);
                dp[i][j + 2] = max(dp[i - 1][j + 2], dp[i - 1][j + 1] + prices[i]);
            }
        }
        return dp[prices.size() - 1][2 * k];
    }
};

// reference https://mp.weixin.qq.com/s?__biz=MzUxNjY5NTYxNA==&mid=2247487253&idx=1&sn=662e863724c4c8588b79669db553f9ec&chksm=f9a23c44ced5b552d5e783061595e10ea82ea4172604e210eda3ed2534d1dfd991d789bbd7af&scene=126&sessionid=1614921542&key=b6c2d3ddfa01cae977849a717e384d026200f65cab2fe6a2cddadb499226be6c1217827aeec496e054d3f8da9dca439f6c78eade190535ab56dbca6ef18237b0731439842d502e0422fa317904c91620b34b7de5b5f248c1afebc12517d8efc5de174d4a8869e919e3e1d42f47452b440bf83086acf900ab23150744b3fa7c20&ascene=1&uin=MjAyNDMxMjYzMA%3D%3D&devicetype=Windows+10+x64&version=63010043&lang=en&exportkey=A18dhfB1s3D%2FEssuJ%2FkhxWI%3D&pass_ticket=fowCci9XWU2HJDWj6mqx1%2FryiMjojj0RExWoeNzRAEH0YIZhMrwotsMg9dbEG%2FME&wx_header=0&fontgear=2