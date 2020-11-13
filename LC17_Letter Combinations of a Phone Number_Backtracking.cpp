class Solution {
private:
    const string lettersMap[10]{ // 一定要记得加逗号分开！！
        "", // for 0
        "", // for 1
        "abc", // for 2
        "def", // for 3
        "ghi", // for 4
        "jkl", // for 5
        "mno", // for 6
        "pqrs", // for 7
        "tuv", // for 8
        "wxyz", // for 9
    };
public:
    string s;
    vector<string> result;
    void backtracking(const string& digits,int index){
        if(index == digits.size()){
            result.push_back(s);
            return;
        }
        int digit = digits[index] - '0'; // 将index指向的数字转为int
        string letters = lettersMap[digit]; // 这里是digit 不是index digit和index的任务不同
        for(int i=0;i<letters.size();++i){  // 不同于之前用i=index，这里每个数字对应下的字母都可以取，所以从0开始
            s.push_back(letters[i]);
            backtracking(digits,index+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        s.clear();
        result.clear();
        if(digits.size()==0){
            return result;
        }
        backtracking(digits,0);
        return result;
    }
};
// reference https://mp.weixin.qq.com/s/e2ua2cmkE_vpYjM3j6HY0A