class Solution {
public:
    vector<int> partitionLabels(string S) { // 贪心算法
        int hash[26] = {0}; // 26个字母
        for (int i = 0; i < S.size(); i++) { // 对string中每个字母处理
            hash[S[i] - 'a'] = i; // 统计不同字母出现的最远位置，随着i的遍历，这个值自动更新。
        }
        int left = 0, right = 0;
        vector<int> result;
        for (int i = 0; i < S.size(); i++) {
            right = max(right, hash[S[i] - 'a']); // 找到某个字母对应的最远距离，将不同字母的最远距离比较，取较大的数值。
            if (right == i) { // 如果这个较大的数值可以正好等于i，那么代表这个i前面的字母串是可以分开的。
                result.push_back(right - left + 1); // 统计长度
                left = i + 1; // 前面的字母统计过了，之后统计后面的，所以left=i+1
            }
        }
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/pdX4JwV1AOpc_m90EcO2Hw
// 确定分割点的关键是：一直找某个字母最后一次出现的位置，并且取较大的位置。一直到当遍历的i和最后一个位置相等的时候，代表前面可以成为一串，且不能再长了。所以
// 进行分割。之后再对后面的字符串进行处理，重复上述过程。  详细图解见链接