class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums,vector<bool>& used){
        if(path.size()==nums.size()){
            result.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(i>0 && nums[i]==nums[i-1] && used[i-1]==false) continue; // 相较于LC46，这是唯一区别。这就是判断是否重复的核心
            if(used[i] == false){  // 这里和LC46写法不同，但是内涵相同。这里也可以写成true时continue，然后等false再进行后续操作
                used[i] = true;
                path.push_back(nums[i]); 
                backtracking(nums,used);
                path.pop_back();
                used[i] = false;
            }
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        //result.clear();
        //path.clear();
        sort(nums.begin(),nums.end());
        vector<bool> used(nums.size(),false);
        backtracking(nums,used);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/9L8h3WqRP_h8LLWNT34YlA