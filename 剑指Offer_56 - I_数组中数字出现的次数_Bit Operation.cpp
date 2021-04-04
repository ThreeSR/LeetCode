class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) { // 位运算
        int x = 0, y = 0, n = 0, m = 1;
        for (int num : nums)         // 遍历异或。我们需要的是结果的第一个不为零的数字在第几位。这代表着两个不同数字在哪一位开始是不同的
        // 注：位数是从右往左数的
            n ^= num;
        while ((n & m) == 0)         // 循环左移，计算 m。这个数值就代表了第一个不为0的位数对应的数值。
            m <<= 1;
        for (int num : nums) {       // 遍历，对 nums 进行分组。分成m位置为0和为1的两组数。
            if(num & m) x ^= num;    // 当 num & m != 0
            else y ^= num;           // 当 num & m == 0
        }
        return vector<int> {x, y};   // 返回出现一次的数字。这是因为分组之后，各自组里面相同数字成对出现。对于两个落单的
        // 不同数字，一定会分在不同组里面。这时候各自组内异或，即可得到最终结果。
    }
};

// reference 《剑指offer》