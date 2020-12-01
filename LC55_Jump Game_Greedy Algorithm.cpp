class Solution {
public:
    bool canJump(vector<int>& nums) { // 贪心算法 我们关心的是覆盖范围，也就是能不能覆盖到终点。至于中间是怎么跳的，我们并不关心。也就是说，本题只关注最终的结果，并不管过程。
        int cover = 0;
        if (nums.size() == 1) return true;
        for (int i = 0; i <= cover; i++){ // 注意，小于等于cover。
            cover = max(i + nums[i], cover); // 更新覆盖范围
            if (cover >= nums.size() - 1) return true; // 如果可以覆盖到终点，那么true
        }
        return false;
    }
};

// reference https://mp.weixin.qq.com/s/606_N9j8ACKCODoCbV1lSA