class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backtracking(vector<int>& nums, int index) {  // 根据本题的意思，用一种很直观的理解：1.进行组合（回溯法） 2.逐个计算汉明距离（模板）并求和
    // 但问题在于，回溯是暴力法，可能超时。最后果然超时了。具体better解法见Python的实现。
        if (path.size() == 2) {
            result.push_back(path);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            path.push_back(nums[i]);
            backtracking(nums, i + 1);  // i不是index！！！ 特别容易错！！
            path.pop_back();
        }
    }
    int countHammingDistance(int a, int b) {
        int c = a ^ b;
        int count = 0;
        while (c != 0) {
            c &= (c - 1);
            count++;
        }
        return count;
    }
    int totalHammingDistance(vector<int>& nums) {
        path.clear();
        result.clear();
        if (nums.size() == 0) return 0;
        backtracking(nums, 0);
        int res = 0;
        for (vector<int> r : result) {
            res += countHammingDistance(r[0], r[1]);
        }
        return res;
    }
};

// Break Time Limit 原因在于用了回溯（暴力枚举）