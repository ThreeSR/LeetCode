// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         reverse(s.begin(),s.end());
//     }
// };
class Solution{
    public:
        void reverseString(vector<char>& s){
            int i=0;
            int j=s.size()-1;
            while(i<j){ 
                swap(s[i],s[j]);  // 最好别用reverse函数，swap还是可以用的
                i++;
                j--;
            }
        }

};