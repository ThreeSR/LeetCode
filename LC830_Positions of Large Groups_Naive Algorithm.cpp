class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {  // 直接使用模拟法即可
        vector<vector<int>> res;
        int n = s.size();
        int num = 1;
        for (int i = 0; i < n; i++) {
            if (i == n - 1 || s[i] != s[i + 1]) {  // 注意最后一个元素的判别，如果是最后一个了，那么需要特殊判断一下
                if (num >= 3) {
                    res.push_back({i - num + 1, i});
                }
                num = 1;
            } else {
                num++;
            }
        }
        return res;
    }
};
