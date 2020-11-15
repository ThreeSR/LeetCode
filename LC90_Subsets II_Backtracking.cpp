class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums,int index,vector<bool>& used){
        result.push_back(path);  // 集合问题，都是一开始就从path放入result。这样一开始的时候空集也可以放入
        for(int i=index;i<nums.size();++i){
            if(i>0 && nums[i]==nums[i-1] && used[i-1]==false){ // 去重 这个和之前所有去重的题目的方法相同
                continue;
            }
            path.push_back(nums[i]);
            used[i] = true;
            backtracking(nums,i+1,used);
            used[i] = false;
            path.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        result.clear();
        path.clear();
        vector<bool> used(nums.size(),false);
        sort(nums.begin(),nums.end()); // 去重，求和，排序都很重要！！ 排序有时候可以帮上大忙
        backtracking(nums,0,used);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/WJ4JNDRJgsW3eUN72Hh3uQ