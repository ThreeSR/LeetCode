class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> vec(k, 0);
        sort(arr.begin(), arr.end());
        for (int i = 0; i < k; ++i) {
            vec[i] = arr[i];
        }
        return vec;
    }
};
