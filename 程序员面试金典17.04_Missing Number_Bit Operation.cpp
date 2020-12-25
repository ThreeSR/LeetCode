class Solution {
public:
    int missingNumber(vector<int>& nums) { // 异或运算  这里对于异或的理解要从配对入手 能配对代表为0.并且任何数和0异或都是本身，这一点也很关键。
        int result = nums.size();
        for (int i = 0; i < nums.size(); i++) { // 这里的意思是，将所有nums里面的index和value异或。此外，特别要注意的是，result一开始赋值要为n
        // 不然会出问题。  经过这样的计算，相同的数值都被配对，变成0. 0和那个孤立的数异或，又是得到它本身。这样一来，缺失的数可以从index或result
        // 等于n的初值得到。
            result ^= nums[i];
            result ^= i;
        }
        return result;
    }
};

// 对位运算可以从不同方面理解，能够从多方面理解，就可以更好地利用位运算得到精妙的答案。本题和LC268一样