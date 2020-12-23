class Solution {
public:
    int search(vector<int>& nums, int target) { // 哈希表统计元素个数
        if (nums.size() == 0) return 0; // 特判
        unordered_map<int, int> hashmap;
        for (int i = 0; i <= nums.size() - 1; i++) {
            hashmap[nums[i]]++;
        }
        return hashmap[target];
    }
};

// 本题和LC34相同，但返回值不同。返回值的不同使得这道题更加简单，可以使用哈希表完成。不然要使用二分搜索。
