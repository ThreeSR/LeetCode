class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) { // 哈希表加数学
        vector<int> freq(100, 0); // 把数组当做哈希表，key是索引值，value是数组索引对应的数值。
        // 把数组当做哈希表的做法并不少见。此处key是多米诺骨牌有序数对中两个数从小到大排序下的十进制数
        // 比如[1,2]变成1*10 + 2 = 12；[2,1]变成[1,2]再变成1 * 10 + 2 = 12；此时判定是一对骨牌。因为对应数值大小相同
        // value就是上面的val（比如12）出现的频次。用result把各个次数加在一起，可以得到总的对数。
        int result = 0;
        int val;
        for (auto& it : dominoes) {
            val = it[0] < it[1] ? 10 * it[0] + it[1] : 10 * it[1] + it[0];
            result += freq[val];  // 即使有三个多米诺骨牌可以互相成对，也可以有1 + 2 = 3对，也是成立的。
            freq[val]++;
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/number-of-equivalent-domino-pairs/solution/deng-jie-duo-mi-nuo-gu-pai-dui-de-shu-li-yjlz/