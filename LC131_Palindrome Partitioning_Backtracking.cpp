class Solution {
private:
    vector<vector<string>> result;
    vector<string> path;
    void backtracking(const string& s,int index){
        if(index>=s.size()){
            result.push_back(path);
            return;
        }
        for(int i=index;i<s.size();++i){
            if(isPalindrome(s,index,i)==true){
                string str = s.substr(index,i-index+1); // 是回文的，则截取回文部分进入结果
                path.push_back(str);
            }
            else continue;
            backtracking(s,i+1);
            path.pop_back();
        }
    }
    bool isPalindrome(const string& s,int start,int end){
        for(int i=start,j=end;i<j;i++,j--){ // 双指针法判定是否是回文
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        result.clear();
        path.clear();
        backtracking(s,0);
        return result;
    }
};
// reference https://mp.weixin.qq.com/s/Pb1epUTbU8fHIht-g_MS5Q