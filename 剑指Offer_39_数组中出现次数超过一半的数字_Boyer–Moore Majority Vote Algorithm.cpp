class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int moleVote = 0, res = 0;
        for (int num: nums) {
            if (moleVote == 0) {
                res = num;
            }
            moleVote += num == res ? 1 : -1;
        }
        return res;
    }
};

// 本题同LC169，是摩尔投票法