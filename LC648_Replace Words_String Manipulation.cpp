class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        stringstream sentenceWord(sentence); // 这种语法可以把一个句子的string拆成逐个word
        set<string> dict;
        for (auto& words : dictionary) {
            dict.insert(words);
        }
        string word;
        string result;
        if (sentence.empty()) { // 要灵活使用string下面的方法
            return result;
        }
        while (sentenceWord >> word) { // 这个的意思是：把拆成word的sentenceWord中的各个单词逐个赋值给word
            for (int i = 0; i < word.size(); i++) {
                if (dict.find(word.substr(0, i)) != dict.end()) {
                    word = word.substr(0, i); // 这就是找到单词的前缀。一旦找到前缀，马上收手。
                }
            }
            result += word + ' '; // 找不到前缀，那就是把本身的单词输出到result中。这也是符合题目的要求的。
        }
        result.erase(result.end() - 1); // 意思是消掉最后一个空格
        return result;
    }
};

// reference https://leetcode-cn.com/problems/replace-words/solution/yong-setrong-qi-xie-de-xiao-lu-bu-gao-dan-shi-jian/
// string manipulation的方法多