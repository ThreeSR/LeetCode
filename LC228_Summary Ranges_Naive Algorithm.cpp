class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {  // 模拟法，一次遍历
        vector<string> result;
        int i = 0;
        int n = nums.size();
        while (i < n) {
            int low = i;
            i++;
            while (i < n && nums[i] == nums[i - 1] + 1) {
                i++;
            }
            int high = i - 1;
            string temp = to_string(nums[low]); // to_string使用  
            if (low < high) {
                temp.append("->"); // append方法使用
                temp.append(to_string(nums[high]));
            }
            result.push_back(temp);
        }
        return result;
    }
};
