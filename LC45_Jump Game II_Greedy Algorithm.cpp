class Solution {
public:
    int jump(vector<int>& nums) { // 贪心算法，贪的是最远覆盖距离，看是否可以盖住终点。这个思路和LC55类似，我们注重的是结果（覆盖大小），而不是过程（怎么跳）。
        int ans = 0; // 跳跃次数
        int curDistance = 0; // 目前能覆盖到的最远位置
        int nextDistance = 0; // 下一个能覆盖到的最远位置
        for (int i = 0; i < nums.size() - 1; i++){ // 遍历，注意，这里终止条件是nums.size()-1。我们其实不需要看是否到了终点，如果distance盖住了终点，那么i够不着distance，ans不会++
        // 如果distance没有盖住终点，因为题目要求一定可以到达最后一个位置，所以不用管最后一步是怎么跳的，总可以跳到终点，只是ans需要++，多一步来完成。 具体图解见链接
            nextDistance = max(nextDistance, nums[i] + i); // 贪心，找寻最大可覆盖范围
            if (i == curDistance){ // i移动到了目前覆盖范围的边界，那么覆盖范围更新成最新最大的范围，进行后续操作（distance更新&跳跃++）
                curDistance = nextDistance;
                ans++;
            }
        }    
        return ans;
    }
};

// reference https://mp.weixin.qq.com/s/kJBcsJ46DKCSjT19pxrNYg
// 代码中最巧妙的地方在于对题目中一定可以到达终点的理解，然后简化了判断条件。