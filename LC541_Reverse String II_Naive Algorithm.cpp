class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i+=2*k){  // 按照题目要求，间隔2k取一段
            if(i+k<s.size()) reverse(s.begin()+i,s.begin()+i+k); // 注意reverse函数的使用：放入指针，进行对应元素范围内的内容反转。不是填s[i],而是s.begin()+i！
            else reverse(s.begin()+i,s.end());
        }
        return s;
    }
};

// reference https://mp.weixin.qq.com/s/XGSk1GyPWhfqj2g7Cb1Vgw