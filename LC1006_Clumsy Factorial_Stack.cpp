class Solution {
public:
    int clumsy(int N) {
        vector<int> st; // 可以使用vector来模拟栈，后面可以使用accumulate函数求和
        st.push_back(N); // 第一个元素入栈
        N--; // 变成第二个元素
        int count = 0; // 计数器，用来判断加减乘除运算
        while (N > 0) { // 下面判断各个数之间应该进行何种运算
            if (count % 4 == 0) { // 乘法，栈顶元素和新元素相乘，
            // 之后覆盖原本栈顶元素即可，即为“入栈”
                st.back() *= N;
            } else if (count % 4 == 1) { // 除法，操作同乘法
                st.back() /= N;
            } else if (count % 4 == 2) { // 加法，此时元素入栈
                st.push_back(N);
            } else {
                st.push_back(-N); // 减法，此时元素取相反数入栈
            }
            count++;
            N--; // 得到下一个元素
        }
        return accumulate(st.begin(), st.end(), 0); // 最后，对栈中元素求和
    }
};

// reference https://leetcode-cn.com/problems/clumsy-factorial/solution/ben-jie-cheng-by-leetcode-solution-deh2/