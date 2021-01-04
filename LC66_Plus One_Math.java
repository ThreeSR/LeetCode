class Solution {
    public int[] plusOne(int[] digits) {
        for (int i = digits.length - 1; i >= 0; i--) {  // 数学题
            digits[i]++;  // 直接在原本digits上面+1
            digits[i] = digits[i] % 10; // 但是怕进位，所以和10取模值，如果是0，代表进位
            if (digits[i] != 0) return digits; // 直到不等于0，输出加1之后的digits。
            // 但是怕99 999 9999 这类数字，就是全部都要进位。所以这里设置这样的for循环，进行全部digits的查阅
            // 如果是99类的数字，就跳出循环
        }
        digits = new int[digits.length + 1];  // 比如99进位成100，数位多一位，所以新建一个digits，里面数值默认为0
        digits[0] = 1; // 让第一个数值为1就是原本digits加1之后的结果
        return digits; // 返回答案
    }
}

// reference https://leetcode-cn.com/problems/plus-one/solution/java-shu-xue-jie-ti-by-yhhzw/
// 数位的处理是数学类题目中常考的类型，主要就是考察进位处理和0的处理。
// 本题直接利用题目给的digits，没有再用额外空间，是值得学习的。