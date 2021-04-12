class Solution {
public:
    string minNumber(vector<int>& nums) { // 本题和力扣179基本相同，也是字符串处理，自定义排序
        if(nums.empty()) return "";
        if(nums.size() == 1) return to_string(nums[0]);
        vector<string> result;
        for(int i : nums) result.push_back(to_string(i));
        sort(result.begin(), result.end(), comparison); 
        string ans = "";
        for (int i = 0; i < result.size(); i++) ans += result[i];
        //if(ans[0] == '0') return "0"; // 0的时候应该输出0而不是000...，需要特殊判断！！ （不同于力扣179，此处不用处理前导0）
        return ans;
    }
    static bool comparison(string& a, string& b) // 比较字符串拼接之后的结果
    {   
        return a + b < b + a;
    }
};

// reference https://leetcode-cn.com/problems/largest-number/solution/ju-yi-fan-er-bu-guang-you-zui-da-shu-hua-uykb/