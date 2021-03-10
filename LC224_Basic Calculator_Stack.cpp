class Solution {
public:
    int calculate(string s) { // 栈的使用，字符串处理的应用
        stack<int> ops; // stack中存储运算符前面的正负号
        ops.push(1);
        int sign = 1; // 符号

        int result = 0;
        int n = s.length();
        int i = 0;
        while (i < n) {
            if (s[i] == ' ') { // 遇到空格
                i++;
            } else if (s[i] == '+') { // 加号
                sign = ops.top(); // 顶部不做处理
                i++;
            } else if (s[i] == '-') { // 减号
                sign = -ops.top(); // 处理
                i++;
            } else if (s[i] == '(') { // 括号的处理
                ops.push(sign);
                i++;
            } else if (s[i] == ')') { 
                ops.pop(); // 直接将原本的半截括号推出来
                i++;
            } else {
                long num = 0;
                while (i < n && s[i] >= '0' && s[i] <= '9') { // 这里针对string类型下：123,215等多位10进制数的处理
                    num = num * 10 + s[i] - '0'; // 字符串处理
                    i++;
                }
                result += sign * num;
            }
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/basic-calculator/solution/ji-ben-ji-suan-qi-by-leetcode-solution-jvir/