class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& candidates,int target,int sum,int index){
        if(sum>target){      // 这个判别很必要，比之前剪枝更有存在必要
            return;
        }
        if(sum==target){
            result.push_back(path);
            return;
        }
        for(int i=index;i<candidates.size() && sum+candidates[i]<=target;++i){  // 中间判断有两个条件，前一个是组合问题常见条件，第二个是剪枝
        // 其实判断sum在函数开头即有，但如果可以先一步进行判别，可以节省时间，达到剪枝的目的
            sum += candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates,target,sum,i); // i注意不要写成index！！ 此外，这边i不是i+1，因为可能一个数字重复取，所以i即可。
            // 重复取一个数字并不违背组合的要求。其实，只要有下一个index大于等于目前index即可，等于是最低要求。
            path.pop_back();
            sum -= candidates[i];
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        result.clear();
        path.clear();
        sort(candidates.begin(),candidates.end());
        backtracking(candidates,target,0,0);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/FLg8G6EjVcxBjwCbzpACPw