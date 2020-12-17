class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) { // stack的使用
        vector<int> result(T.size(), 0); // 初始化
        stack<int> st;
        for (int i = 0; i < T.size(); i++) {
            while (!st.empty() && T[i] > T[st.top()]) { // 当栈顶有元素且元素比当前值小，那么栈顶元素出栈
                auto t = st.top(); // 出栈处理 
                st.pop();
                result[t] = i - t; // 计算多少天温度可以更高
            }
            st.push(i); // 对应温度的index入栈
        }
        return result;
    }
};

// reference https://leetcode-cn.com/problems/daily-temperatures/solution/leetcode-tu-jie-739mei-ri-wen-du-by-misterbooo/  具体详解见链接中的动画