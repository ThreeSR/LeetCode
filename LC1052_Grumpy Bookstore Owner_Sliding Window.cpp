class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) // 滑动窗口
    {
        int n = customers.size();
        int satisfied = 0;
        for (int i = 0; i < n; ++i) {  // 统计店主不使用“不生气”技能就可以让顾客满意的数量
            if (grumpy[i] == 0) { 
                satisfied += customers[i];
            }
        }
        int angry2satisfied = 0; // 统计使用技能之后，让顾客态度转变的数量
        for (int i = 0; i < X; ++i) { // 在X大小的滑窗下，顾客态度转变的数量
            if (grumpy[i] == 1) {
                angry2satisfied += customers[i];
            }
        }
        int temp = angry2satisfied;
        for (int i = X; i < n; ++i) { // 滑窗移动，计算最大态度变化数量
            if (grumpy[i] == 1) {
                angry2satisfied += customers[i];
            }
            if (grumpy[i - X] == 1) { // 如果滑窗左端是1，要减去对应数值
                angry2satisfied -= customers[i - X];
            }
            temp = max(temp, angry2satisfied);
        }

        return satisfied + temp;
    }
};

// reference https://leetcode-cn.com/problems/grumpy-bookstore-owner/solution/hua-dong-chuang-kou-xiang-xi-jiang-jie-z-80ni/