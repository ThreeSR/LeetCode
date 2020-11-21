class Solution {
public:
    void reverse(string& s,int start,int end){ // 反转
        for(int i = start, j = end; i < j; i++, j--){
            swap(s[i], s[j]);
        }
    }
    void removeExtraSpaces(string& s){ // 去除空格 用快慢指针的方法 这一方法在删除元素的时候有用到，这里是删除多余空格。注意：是多余空格！
        int slowIndex = 0, fastIndex = 0;
        while(s.size() > 0 && fastIndex < s.size() && s[fastIndex] == ' '){  // 删除顺序可以按照从头到尾，有条理。 这里是删除单词头部空格
            fastIndex++;
        }
        for(; fastIndex < s.size(); fastIndex++){  // 这里是中间空格
            if(fastIndex - 1 > 0 && s[fastIndex] == s[fastIndex - 1] && s[fastIndex] == ' '){ // 注意判断条件，fastIndex - 1 > 0
                continue;
            }else{
                s[slowIndex++] = s[fastIndex];        // 快慢指针法，详见删除元素
            }
        }
        if(slowIndex - 1 > 0 && s[slowIndex - 1] == ' '){ // 删除的空格是基于冗余来做比较的。就是有重复两个空格，删一个，留一个。这样导致单词末尾的空格可能没删干净
            s.resize(slowIndex - 1);  // 所以对末尾空格处理，直接resize去掉即可。要是有空格，也只有一个。
        }
        else{
            s.resize(slowIndex);   // 即使没有空格，resize处理也是需要的。因为这是对多余空格的删除，所以要对原有s的长度进行处理
        }
    }
    string reverseWords(string s) {  // 正式处理部分
        removeExtraSpaces(s);  // 先去掉空格
        reverse(s, 0, s.size() - 1); // 处理基本思路是：先整体翻转，再对单词逐个翻转。所以下面的处理要基于各个单词
        bool entry = false;  // 是否进入到单词的标志
        int start = 0; // 所截取的单词头部和尾部
        int end = 0;
        for(int i = 0; i < s.size(); ++i){ // 对string开始处理
            if((!entry) || (s[i] != ' ' && s[i - 1] == ' ')){ // 这个判断用于判断进入新单词，前面的entry的判断是给最开始进入的单词做铺垫
                entry = true; // 进入成功
                start = i; // 记录开始位置
            }
            if(entry && s[i] == ' ' && s[i - 1] != ' '){ // 单词结束，但后面还有单词
                entry = false; // 结束
                end = i; // 记录末尾
                reverse(s, start, end - 1); // 对这个单词翻转
            }
            if(entry && i == s.size() - 1 && s[i] != ' '){ // 单词结束，后面没有单词，全部结束
                end = i;
                entry = false;
                reverse(s, start, end);
            }
        }
        return s; // 处理完毕
    }
};

// reference https://mp.weixin.qq.com/s/X3qpi2v5RSp08mO-W5Vicw
// 本题条件很多，很麻烦