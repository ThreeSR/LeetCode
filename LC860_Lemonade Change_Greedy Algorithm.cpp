class Solution {
public:
    bool lemonadeChange(vector<int>& bills) { // 找零无非几种情况：1.5美金不用找；2.10美金找5元；3.20美金，找10+5或者5+5+5.优先10+5，因为5美元更有用。
    // 这样一来，也有贪心的思路在里面。按照这个逻辑，写判断即可。
        int five = 0, ten = 0, twenty =  0;
        for (int bill : bills) {
            if (bill == 5) five++;
            if (bill == 10) {
                if (five == 0) return false;
                else {
                    five--;
                    ten++;
                }
            }
            if (bill == 20) {
                if (ten != 0 && five != 0) {
                    ten--;
                    five--;
                }
                else if (five >= 3) {
                    five -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};

// reference https://mp.weixin.qq.com/s/0kT4P-hzY7H6Ae0kjQqnZg