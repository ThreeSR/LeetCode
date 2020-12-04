class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) { // Brain Teaser 脑筋急转弯
        for (int num : nums) { // 数组的索引是0-N-1，数组里面数的范围是1-N。正好是对应的。让出现的数对应数组中以这个数为索引的值为负数，代表这个数值出现过。相当于立一个flag。
        // 最后算索引对应值为正数的num，那么这些num就是1-N中缺失的数字。
            if (nums[abs(num) - 1] > 0) nums[abs(num) - 1] *= -1; // 因为flag的原因，所以num可能变成负值了，因此要用abs。 注意要-1！            
        }
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) result.push_back(i + 1); // 记录结果，注意i+1，因为数值和索引差1
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array/solution/bu-xu-yao-e-wai-kong-jian-si-lu-chao-ji-qing-xi-bu/