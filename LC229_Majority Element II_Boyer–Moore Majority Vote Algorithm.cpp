class Solution{
public:
    vector<int> majorityElement(vector<int>& nums){ // 摩尔投票法。本题之前我用hash表+set去重做过，如果用摩尔投票，会降低复杂度
        vector<int> result;   
        if(nums.size() == 0) return result; // 特判
        int count1 = 0, count2 = 0; // 投票初始化
        int candidate1 = nums[0], candidate2 = nums[0]; // 一开始赋一个参选人。这样的赋值是有意义的。虽然看上去是同一个人，但是后续有continue操作，会使得
        // 候选人发生变化。此外，这样的初始化也防止了从头到尾只有一个参选人的情况。
        for(int num : nums){  // 投票开始
            if (candidate1 == num){ // 一样的候选人，那么投票+1
                count1++;
                continue; // 一个投票人的投票一旦完成，就跳到下一个人，一人一次机会
            }
            if (candidate2 == num){ // 上面说到，continue保证了虽然candidate2初值为nums[0]，但不会囿于此。因为前一个if把火力吸引走了
            // 所以candidate2可以自由地向下判断
                count2++;
                continue;
            }
            if (count1 == 0){ // 票数为0，换人，代表这个人被打败了
                candidate1 = num;
                count1++; // 注意：换人之后，不再是一开始的初始化。一旦有人成为新的candidate，相应的count就要++！
                continue;
            }
            if (count2 == 0){ // candidate2第一次“正式”赋值是在这里，nums[0]只是为了防止意外的一次赋值
                candidate2 = num;
                count2++;
                continue;
            }
            count1--; // 都不是上面的情况，那么就是--
            count2--;
        }
        // 结束投票，进入计票环节
        count1 = 0;
        count2 = 0;
        for(int num : nums){
            if (candidate1 == num) count1++; // 为candidate1计票
            else if (candidate2 == num) count2++; // 为candidate2计票。这里有一点很值得注意：条件是else if而不是if！
            // 原因很简单，防止candidate1和candidate2是同一个人，同一个人的情况是可能出现的。运用这样的逻辑结构，就保证了同一个人不会重复进入到下面的result中
        }
        if (count1 > nums.size() / 3) result.push_back(candidate1); // 比较，如果大于总体的1/3，那么成功参选，进入result
        if (count2 > nums.size() / 3) result.push_back(candidate2); // 第二个比较，看是否参选，进入result
        return result;
    }
};

// reference https://leetcode-cn.com/problems/majority-element-ii/solution/liang-fu-dong-hua-yan-shi-mo-er-tou-piao-fa-zui-zh/ 动图以及动画演示详见链接内容