class Solution {
public:
    static bool cmp (const vector<int>& a, const vector<int>& b) { // 动态规划，最长递增子序列
        return (a[0] < b[0]) || (a[0] == b[0] && a[1] > b[1]); // 保证按照第一个数递增，当第一个数相等的时候，按照第二个数递减进行排序
        // 这样的排序思路很关键。通过这样的排序，我们对第二个数的数组进行分析即可，求其最长递增子序列。
        // 第二个数递减，是为了防止增加了违背题目要求的递增元素。在同一个width下，求一个最长length即可，杜绝了递增子序列违背套娃要求的情况。
        // 比如：[2, 3], [5, 4], [6, 5], [6, 7]；排序后为：[2, 3], [5, 4], [6, 7], [6, 5]；按照第二个数求最长递增子序列，就是3,，而不会像
        // 排序前，变成4。实际上，最长信封应该就是3。
        // 看到这里，可能会想到：[[2, 3], [5, 4], [6, 5], [6, 7], [7, 7]] 这样的一组数。如果前面选取[6,7]，后面的[7,7]岂不是不能选，从而
        // 使得结果从正确的4变成3？  这种情况乍一看是反例，其实不然！！  这就需要从动态规划的本质去理解。动归过程中，每一个数都会扫过去。所以
        // 在[7,7]之前，会考虑到[6,5]的情况。并且最终答案就是通过[6,5]，得到4，而不会就卡在[6,7]。
        // 总的而言，这种思路没错，不会局部最优，肯定是全局最优。
        // DP的特性保证了其全局性；第二个数在第一个数相等下倒序排列保证了最长递增子序列不会算入多余的元素。 
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        if (envelopes.empty()) return 0;  // 特判
        sort(envelopes.begin(), envelopes.end(), cmp);  // 按照cmp的要求排序
        int n = envelopes.size();
        vector<int> dp(n, 1); // 初始化dp数组
        for (int i = 0; i < n; i++) { // 最长递增子序列
            for (int j = 0; j < i; j++) {
                if (envelopes[i][1] > envelopes[j][1]) {  // 如果满足递增子序列的更新条件
                    dp[i] = max(dp[i], dp[j] + 1); // 更新；这里dp[i]代表以nums[i]结尾的最长递增子序列；
                    // 状态转移，无非这两种情况，要么需要+1扩展原来长度，要么原来长度够长，不变。
                }
            }
        }
        return *max_element(dp.begin(), dp.end()); // 利用迭代器，得到max值。因为迭代器是指针形式，所以提取其对应数值需要*
    }
};

// reference https://leetcode-cn.com/problems/russian-doll-envelopes/solution/e-luo-si-tao-wa-xin-feng-wen-ti-by-leetc-wj68/