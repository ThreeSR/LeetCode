class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums,int index){
        if(path.size()>1){ // 题目要求输出长度大于一
            result.push_back(path);
        }
        int uset[201] = {0}; // 能这么做在于题目说明整数范围是 [-100,100]。这样预先定义好数组，之后好使用
        for(int i=index;i<nums.size();++i){
            if((!path.empty()&&nums[i]<path.back())||(uset[nums[i]+100]==1)){ // 判断是否重复
            // 首先，新出来的元素如果比之前最大的小，那么跳过；再者，如果同层元素被使用了，即标志为1，那么跳过
                continue;
            }
            uset[nums[i]+100] = 1; // 加100原因在于不能让数组索引小于零
            path.push_back(nums[i]);
            backtracking(nums,i+1);
            path.pop_back();
            // 此处对uset不用做任何pop类型的操作，是因为uset每次出现都有int重新定义，内部每次会清空
            // uset的定义放在那样的位置上是很有意义的
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        result.clear();
        path.clear();
        backtracking(nums,0);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/ePxOtX1ATRYJb2Jq7urzHQ

// 整个操作下来，可以说是回溯的做法，也可以说是DFS的过程。