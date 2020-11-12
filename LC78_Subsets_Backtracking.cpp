class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums,int index){
        result.push_back(path); // 放在一开头加进result，便于空集第一个加入，方便
        for(int i=index;i<nums.size();++i){ // for循环就可以充当结束条件，因为求子集要全部遍历
            path.push_back(nums[i]);
            backtracking(nums,i+1);
            path.pop_back();
        }
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        result.clear();
        path.clear();
        backtracking(nums,0); // index从0开始
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/NNRzX-vJ_pjK4qxohd_LtA