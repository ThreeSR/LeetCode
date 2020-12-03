class Solution {
public:
    int countPrimes(int n) { // 厄拉多塞筛法，简称埃氏筛，也称素数筛
        vector<bool> nums(n, true); // 先默认都是质数
        int count = 0; // 统计质数个数
        for (int i = 2; i < n; i++) { // 从2开始，因为1不是质数也不是合数，此外，2是第一个质数，所以下面count直接++
            if (nums[i] == true) {
                count++;
                for (int j = i + i; j < n; j += i) { // 代表以这个数为倍数的，小于n的所有数都被排除出质数序列，变成false
                    nums[j] = false; // 变为false之后，也没有再处理的必要了
                }
            }
        }
        return count; // 返回质数个数
    }
};

// reference https://leetcode-cn.com/problems/count-primes/solution/ji-shu-zhi-shu-bao-li-fa-ji-you-hua-shai-fa-ji-you/ 图解见链接或Solution