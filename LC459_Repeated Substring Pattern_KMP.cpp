class Solution {
public:
    void getNext(int* next,const string& s){ // 构建KMP的next数组
        int j=-1;
        next[0] = j;
        for(int i=1;i<s.size();++i){
            while(j>=0 && s[j+1]!=s[i]){ // 记得j>=0要有，不然无路可退，会报错
                j = next[j];
            }
            if(s[j+1]==s[i]){
                j++;
            }
            next[i] = j;            
        }
    }
    bool repeatedSubstringPattern(string s) {
        int len = s.size();
        if(len==0){
            return false;
        }
        int next[len];
        getNext(next,s);
        if(next[len-1]!=-1 && len%(len-(next[len-1]+1))==0){ // 构成子串的条件 这一点需要观察能被子串构成的数组的next规律 见reference内容
            return true;
        }
        return false;
    }
};
//  reference https://mp.weixin.qq.com/s/lR2JPtsQSR2I_9yHbBmBuQ KMP算法