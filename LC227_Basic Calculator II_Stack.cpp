class Solution {
public:
    int calculate(string s) { // 栈   和LC224不同的地方在于：多了乘除法，少了括号。
        vector<int> stack; // 可用动态数组实现stack
        char preSign = '+'; // 赋初值
        int num = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (isdigit(s[i])) { // 用于处理100，158这样的多位数。注意：以158为例，在string中：s[0] = 1, s[1] = 5, s[2] = 8。每一次for循环处理一位数
                num = num * 10 + int(s[i] - '0');
            }
            if (!isdigit(s[i]) && s[i] != ' ' || i == n - 1) { // 注意最后一个数需要特殊判断，不然就遗漏了
                switch (preSign) { // 根据符号，加直接进stack，减取相反数，乘除因为优先级高，所以直接得结果
                    case '+':
                        stack.push_back(num);
                        break;
                    case '-':
                        stack.push_back(-num);
                        break;
                    case '*':
                        stack.back() *= num;
                        break;
                    default:
                        stack.back() /= num;
                }
                preSign = s[i]; // 更新符号
                num = 0; // 清零
            }
        }
        return accumulate(stack.begin(), stack.end(), 0); // 根据上面的处理之后，将还存留在stack中的元素求和即可
    }
};

// reference https://leetcode-cn.com/problems/basic-calculator-ii/solution/ji-ben-ji-suan-qi-ii-by-leetcode-solutio-cm28/
// 注意：isdigit函数可以判断一个string是不是在'0'到'9'之间。