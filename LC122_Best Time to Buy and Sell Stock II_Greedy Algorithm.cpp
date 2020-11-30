class Solution {
public:
    int maxProfit(vector<int>& prices) { // 贪心算法，将股票赚钱变成每两天进行交易的行为，贪心地加上所有为正值的利润，就是max profit
        int result = 0;
        for (int i = 1; i < prices.size(); i++){
            result += max(prices[i] - prices[i - 1], 0);
        }
        return result;       
    }
};

// reference https://mp.weixin.qq.com/s/VsTFA6U96l18Wntjcg3fcg