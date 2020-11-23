class Solution {
public:
    string removeDuplicates(string S) { // 本题用栈实现
        stack<char> st;  // 是char类型！
        for(char s : S){   // 类Python语法
            if(st.empty() || s != st.top()){ // 待输入元素和栈顶元素比较，如果相同，直接让栈顶元素出栈。反之，让待入栈元素入栈。
                st.push(s);
            }else{
                st.pop();
            }
        }
        string result;
        while(!st.empty()){
            result += st.top(); // 类Python语法，char字符相加
            st.pop();
        }
        reverse(result.begin(),result.end()); // 反转，因为栈是FILO
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/eynAEbUbZoAWrk0ZlEugqg