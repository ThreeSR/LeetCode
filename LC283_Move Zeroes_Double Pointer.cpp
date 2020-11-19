class Solution {
public:
    void moveZeroes(vector<int>& nums) { // 双指针法
        int len=nums.size();
        int left = 0,right = 0;
        while(right<len){         
            if(nums[right]){        // 等到一个不等于0的数值
                swap(nums[left],nums[right]); // 交换顺序
                left++; // 不等到不为零的数，left指针就一直卡在0的位置上，所以上面的交换才有意义，就是非零数和零互换位置
            }
            right++; // 右指针负责向前扩展
        } 
    }
};

// reference https://leetcode-cn.com/problems/move-zeroes/solution/yi-dong-ling-by-leetcode-solution/