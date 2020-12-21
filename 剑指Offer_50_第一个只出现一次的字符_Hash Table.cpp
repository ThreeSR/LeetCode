class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char, int> hashmap;
        for (char a : s) {
            hashmap[a]++;
        }
        char result = ' '; // 注意，C++中，char的输出，要用' '单引号！
        for (char b : s) {
            if (hashmap[b] == 1) {
                result = b;
                break;
            }
        }
        return result;
    }
};