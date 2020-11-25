class  Solution{
    public:
        int majorityElement(vector<int>& nums) { // 本方法叫做摩尔投票法
            int res = 0, moleVote = 0;
            for(int i : nums){
                if(moleVote == 0){ // 如果票数为0，那么换一个元素
                    res = i;
                }
                moleVote += i == res ? 1 : -1; // 进行投票，如果有一个元素是绝大多数，那么它经得起这样投票
            }
            return res;
        }
};

// reference https://leetcode-cn.com/problems/majority-element/solution/zi-jie-ti-ku-169-jian-dan-duo-shu-yuan-su-1shua-by/