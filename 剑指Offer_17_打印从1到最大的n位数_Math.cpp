class Solution {
public:
    vector<int> printNumbers(int n) {
        int end = pow(10, n) - 1;
        vector<int> result;
        for (int i = 1; i <= end; i++) {
            result.push_back(i);
        }
        return result;
    }
};