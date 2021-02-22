class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> left, right, counter;  // 建立三个哈希表，具体作用见下面的代码
        int degree = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!left.count(nums[i]))
                left[nums[i]] = i; // 记录一个元素最左边的位置。仅在之前不存在这个元素时执行
            right[nums[i]] = i; // 记录一个元素最右边的位置，i在迭代的时候不断在更新 
            counter[nums[i]]++; // 记录一个元素出现的频次
            degree = max(degree, counter[nums[i]]); // 找到数组的度
        }
        int res = nums.size(); // 一开始设置的res可以是数组的长度，这也是底线了
        for (auto& count : counter) {
            if (count.second == degree) { // 找到出现频次等于度数的元素。这样做的原因是：等于度数的元素可能不止一个
                res = min(res, right[count.first] - left[count.first] + 1); // 找到最小的长度
            }
        }
        return res;
    }
};

// reference https://leetcode-cn.com/problems/degree-of-an-array/solution/xiang-xi-fen-xi-ti-yi-yu-si-lu-jian-ji-d-nvdy/