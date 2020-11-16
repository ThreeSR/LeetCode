class Solution {
public:
    void getNext(int* next,const string& s){ // KMP中的next数组 形参传递！
        int j = -1;  // 选择从-1开始，不然可能死循环
        next[0] = j;
        for(int i=1;i<s.size();++i){ // 从1开始 i代表后缀部分 j代表前缀部分，不同于下面i，j的工作性质
            while(j>=0 && s[i]!=s[j+1]){ // 匹配不成功
                j = next[j]; // 向前回溯
            }
            if(s[i]==s[j+1]){ // 成功
                j++;    // 匹配成功
            }
            next[i] = j; // 注意要更新
        }        
    }
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0; // 特判
        int next[needle.size()];
        getNext(next,needle);  // 得到相应string的next数组
        int j = -1; // 因为next从-1开始，所以j从-1.注意，此处i与j不同于getnext，i only serves for haystack，j for needle。
        for(int i=0;i<haystack.size();++i){ // i从0开始，此处i不代表后缀，只是haystack的遍历，所以0开始
            while(j>=0 && haystack[i]!=needle[j+1]){  // 匹配失败
                j = next[j]; // 回溯
            }
            if(haystack[i]==needle[j+1]){ // 成功
                j++; // 累加
            }
            if(j==needle.size()-1){ // 终于匹配到最后一个字母，代表最终成功，这里等于这个值跟前面j++有关
                return i-needle.size()+1; // 返回初始匹配到的位置
            }
        }
        return -1; // 失败返回-1
    }
};

// reference https://mp.weixin.qq.com/s/Gk9FKZ9_FSWLEkdGrkecyg
// 本题使用KMP算法，这个算法在字符串匹配方面很有意义。如果使用KMP，这题难度上升。
/*
class Solution {
public:
    void getNext(int* next, const string& s) {
        int j = -1;
        next[0] = j;
        for(int i = 1; i < s.size(); i++) { // 注意i从1开始
            while (j >= 0 && s[i] != s[j + 1]) { // 前后缀不相同了
                j = next[j]; // 向前回溯
            }
            if (s[i] == s[j + 1]) { // 找到相同的前后缀
                j++;
            }
            next[i] = j; // 将j（前缀的长度）赋给next[i]
        }
    }
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) {
            return 0;
        }
        int next[needle.size()];
        getNext(next, needle);
        int j = -1; // 因为next数组里记录的起始位置为-1
        for (int i = 0; i < haystack.size(); i++) { // 注意i就从0开始
            while(j >= 0 && haystack[i] != needle[j + 1]) { // 不匹配
                j = next[j]; // j 寻找之前匹配的位置
            }
            if (haystack[i] == needle[j + 1]) { // 匹配，j和i同时向后移动 
                j++; 
            }
            if (j == (needle.size() - 1) ) { // 文本串s里出现了模式串t
                return (i - needle.size() + 1); 
            }
        }
        return -1;
    }
};



*/