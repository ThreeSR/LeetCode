class Solution {
    public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long rem = 0, y = 0; // 防止溢出
        int flag = x; // 留一个做比较
        while(x != 0){  // 常见处理
            y = y * 10 + x % 10;
            x = x / 10;
        }
        return flag == y;  // 写成逻辑式，更简单
    }
};

// 本题可以把数位放进队列，之后再弹出来。但能简单就用简单方法，不见得都要用数据结构。