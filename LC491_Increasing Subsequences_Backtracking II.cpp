class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums, int startIndex) {
        if (path.size() > 1) {
            result.push_back(path);
            // 注意这里不要加return，要取树上的节点
        }
        unordered_set<int> uset; // 使用set对本层元素进行去重
        for (int i = startIndex; i < nums.size(); i++) {
            if ((!path.empty() && nums[i] < path.back())
                    || uset.find(nums[i]) != uset.end()) {
                    continue;
            }
            uset.insert(nums[i]); // 记录这个元素在本层用过了，本层后面不能再用了
            path.push_back(nums[i]);
            backtracking(nums, i + 1);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        result.clear();
        path.clear();
        backtracking(nums, 0);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/ePxOtX1ATRYJb2Jq7urzHQ
// 不同于I，这个版本用的是set。set使用的时候要insert和find等操作，比较浪费时间。
// 在已知数据范围的情况下，还是用固定长度的数组比较好&快。但是通用方法要用set
/*
预备知识：
set1.find(2);    //查找2，找到返回迭代器，失败返回end()

*/