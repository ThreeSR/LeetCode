class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) { // 运用斜率解决，很简单，但有些小细节
        int n = coordinates.size();
        for (int i = 1; i + 1 < n; i++) {  // 细节1：相乘之后，数据会不会变得很大？别的题可能需要讨论，因为乘法需要考虑数据类型的大小范围；但是本题很幸运，不需要这么做。
        // 细节2：为什么是相乘不用相除？ 两个原因：1.int类型除法运算怕出现地板除，我一般我不怎么用除法； 2.运用斜率，最大的问题是斜率等于无穷大的直线。在这根直线上，
        // 也是题目的范畴。所以如果是相除的方法，需要分类讨论。但如果是相乘，就不需要分类了，反正如果是垂直于x轴的直线，delta_x也等于0。
            if ((coordinates[i][1] - coordinates[i - 1][1]) * (coordinates[i + 1][0] - coordinates[i][0]) != (coordinates[i][0] - coordinates[i - 1][0]) * (coordinates[i + 1][1] - coordinates[i][1])) {
                return false;
            }
        }
        return true;
    }
};