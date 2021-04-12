class Solution {
public:
    string largestNumber(vector<int>& nums) { // 字符串处理，自定义排序
        if(nums.empty()) return "";
        if(nums.size() == 1) return to_string(nums[0]);
        vector<string> result;
        for(int i : nums) result.push_back(to_string(i)); // 数值变成字符串
        sort(result.begin(), result.end(), comparison);  // 排序
        string ans = ""; // 用于放置最终结果。最终结果是排序后的内容拼接在一起
        for (int i = 0; i < result.size(); i++) ans += result[i];
        if(ans[0] == '0') return "0"; // 0的时候应该输出0而不是000...，需要特殊判断！！
        return ans;
    }
    static bool comparison(string& a, string& b) // 本题的比较应该是字符串拼接之后的比较，原因详见链接
    {   
        return a + b > b + a;
    }
};


// reference https://leetcode-cn.com/problems/largest-number/solution/ju-yi-fan-er-bu-guang-you-zui-da-shu-hua-uykb/
