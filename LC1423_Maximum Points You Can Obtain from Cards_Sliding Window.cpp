class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) { // 滑动窗口 逆向思维
        int n = cardPoints.size(); // 得到卡片数量
        int windowSize = n - k; // 得到窗口大小
        int sum = accumulate(cardPoints.begin(), cardPoints.begin() + windowSize, 0); // 得到窗口内的和值
        int minSum = sum;
        for (int i = windowSize; i < n; i++) { // 窗口滑动
            sum += cardPoints[i] - cardPoints[i - windowSize];
            minSum = min(sum, minSum); // 维护最小值
        }
        return accumulate(cardPoints.begin(), cardPoints.end(), 0) - minSum; // 全部卡牌的和值减去窗口的最小和值就是结果
        // 本题采用逆向思维，记数组 cardPoints 的长度为 n，由于只能从开头和末尾拿 k 张卡牌，所以最后剩下的必然是连续的 n-k 张卡牌。
        // 我们可以通过求出剩余卡牌点数之和的最小值，来求出拿走卡牌点数之和的最大值。
        // 由于剩余卡牌是连续的，使用一个固定长度为 n−k 的滑动窗口对数组 cardPoints 进行遍历，求出滑动窗口最小值，然后用所有卡牌的点数之和减去该最小值，
        // 即得到了拿走卡牌点数之和的最大值。
    }
};

// reference https://leetcode-cn.com/problems/maximum-points-you-can-obtain-from-cards/solution/ke-huo-de-de-zui-da-dian-shu-by-leetcode-7je9/