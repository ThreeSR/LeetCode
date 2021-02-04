class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) { // 双指针，滑动窗口
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < k; i++) { // 窗内的求和
            sum += nums[i];
        }
        int maxSum = sum;
        for (int i = k; i < n; i++) { // 窗口滑动
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(maxSum, sum);
        }
        return static_cast<double>(maxSum) / k; // 强制类型转换
        // static_cast 用于良性转换，一般不会导致意外发生，风险很低。
        // 使用格式： xxx_cast<newType>(data)
        // 不同于传统的C语言，C++中强制类型转换的函数更多更细致。这样细分的好处在于
        // 程序员在debug的时候可以更清晰地知道是哪里哪方面出了问题。 
    }
};

// reference https://leetcode-cn.com/problems/maximum-average-subarray-i/solution/zi-shu-zu-zui-da-ping-jun-shu-i-by-leetc-us1k/
// reference C++四种类型转换运算符 http://c.biancheng.net/cpp/biancheng/view/3297.html
// 除了最简单的static_cast的强制类型转换，还有别的转换，比如：const_cast  reinterpret_cast  dynamic_cast，更多内容见链接。