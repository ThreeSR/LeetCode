class Solution {
public:
    int characterReplacement(string s, int k) { // 双指针
        int n = s.length();
        //int num[26];
        vector<int> num(26); // 用这样的一个数组计算各个单词的频次
        int left = 0, right = 0, maxlen = 0; // 初始化
        while (right < n) {
            num[s[right] - 'A']++; // 右指针遇到一个单词，就记录这个单词的频次。这个方法挺好的 
            maxlen = max(maxlen, num[s[right] - 'A']); // 留下最大数量的单词数
            if (right - left + 1 - maxlen > k) { // 这个判断很好，表明可更改的数量和非主流单词数量的大小关系
                num[s[left] - 'A']--; // 如果超过了更改限额，那么左边的指针要移动了。如果要移动，要释放这个单词的频次
                left++; // 左指针移动
            }
            right++; // 右指针日常移动
        }
        return right - left; // 返回长度
    }
};

// reference https://leetcode-cn.com/problems/longest-repeating-character-replacement/solution/ti-huan-hou-de-zui-chang-zhong-fu-zi-fu-n6aza/

// 问题： 为什么不能用int num[26]? 链接： https://leetcode-cn.com/problems/longest-repeating-character-replacement/solution/ti-huan-hou-de-zui-chang-zhong-fu-zi-fu-n6aza/773269/