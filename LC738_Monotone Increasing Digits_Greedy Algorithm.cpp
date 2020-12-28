class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string strNum = to_string(N);  // 将数字转换为字符串处理
        int flag = strNum.size();  // 赋初值，这里是为了万一第一个for循环没进去，跳过第二个for循环。
        // 如果第一个for循环没进去，代表这个数字已经是递增的，后面操作不需要。
        for (int i = strNum.size() - 1; i > 0; i--) { // 遍历需要从后向前。如果从前向后，可能出问题。比如332，就会变成329；从后向前就是299，正确。
            if (strNum[i - 1] > strNum[i]) {  // 思路是：当i-1对应的数字大于i对应的数字，那么i-1对应数字要减一，i对应的就是9。这样有贪心的感觉，
            // 并且这样处理确实得到最大的数值。
                flag = i;  // 这里我们用flag记录之后9开始的位置，也就是说，从flag开始，到end，都是9。原因在下面。
                strNum[i - 1]--;  // i-1对应位置的数字减一
            }
        }
        for (int j = flag; j < strNum.size(); j++) {  // 从flag开始，到end，数字都是9。
            strNum[j] = '9';  // ！！特别注意！！：这里strNum是string类型，所以增加一个字符的时候，需要''，不可以直接strNum[j] = 9;！！！一定要加'9'.
            // 所以，在对于特定数组（或变量）进行操作的时候，一定要关注其本身的数据类型。
        }
        return stoi(strNum);
    }
};

// reference https://mp.weixin.qq.com/s/TAKO9qPYiv6KdMlqNq_ncg
/*
对于本题，有几点想要说明：
1. 为什么不直接strNum[i] = '9' ?
假设数字是100，那么按照上面的解法，结果是90，但应该是99。这就说明，如果直接赋值为9，那么对于这种不同位有相同数字的，就会出错。因此，
为了避免这种情况，应该要记录9开始的位置，然后在这之后都一起赋值为9。
2. stoi函数：
将字符串变成数字，比如“09”变成9。
atoi函数：
atoi(s3.c_str()) 需要强制类型转换
原因：
atoi()的参数是 const char* ,因此对于一个字符串str我们必须调用 c_str()的方法把这个string转换成 const char*类型的,
而stoi()的参数是const string*,不需要转化为 const char*；

二者的使用是类似的，都可以实现string到int的转换。
*/