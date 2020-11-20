class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st; // 用栈处理
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){ // 判断运算符号
                int num1 = st.top(); // 取出刚刚入栈的两个数值进行运算
                st.pop();
                int num2 = st.top();
                st.pop();
                if(tokens[i]=="+") st.push(num1+num2); // 判断是什么运算，把运算结果再次输入到栈里面
                if(tokens[i]=="-") st.push(num2-num1); // 这里尤其要注意：减法和除法不满足交换律，所以要分清num1和num2哪个是除数，被除数；哪个是减数，被减数！！
                if(tokens[i]=="*") st.push(num1*num2);
                if(tokens[i]=="/") st.push(num2/num1); // 除法的注意事项同减法
            }
            else{
                st.push(stoi(tokens[i])); // 不是运算符，就是数字，把数字入栈。注意：入栈是数不是字符，所以要进行stoi函数
            }
        }
        int result = st.top(); // 最后的result就是最后栈的顶部了，输出就好
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/hneh2nnLT91rR8ms2fm_kw
/*

stoi是C++的字符处理函数，把数字字符串转换成int输出
reference https://blog.csdn.net/qq_33221533/article/details/82119031
此外，计算机对数学表达式的处理就是用这种方法。因为我们平常的数学表达，会使得计算机不便于处理优先级不同的运算，但运用
上述方法，可以避开优先级的问题，方便地对数学公式进行处理。

*/