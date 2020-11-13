class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& candidates,int target,int sum,int index,vector<bool>& used){
        if(sum==target){ // 目标
            result.push_back(path);
            return;
        }
        for(int i=index;i<candidates.size() && sum+candidates[i]<=target;++i){ // 同LC39，中间两个条件，一个是正常判断，另一个是剪枝
        // 值得注意的是，其实用剪枝这个条件，就可以免去LC39中开头的sum与target的判别
            if(i>0 && candidates[i]==candidates[i-1] && used[i-1]==false) continue; // 这是防重复的条件
            // 防的是同层重复，同树枝不用。所以如果前一个元素跟自身相同，并且没有被取到，表明在接下来的处理中，很可能出现跟之前相同的结果，打破组合要求
            // 因此，利用这一系列限制，写出防重复的条件，直接continue跳过
            sum += candidates[i];
            used[i] = true;
            path.push_back(candidates[i]);
            backtracking(candidates,target,sum,i+1,used);
            sum -= candidates[i];
            used[i] = false;
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        result.clear();
        path.clear();
        vector<bool> used(candidates.size(),false); // 防止重复，因为candidates中有重复元素，可能打破组合中没有重复的要求
        sort(candidates.begin(),candidates.end()); // 排序很关键！！
        backtracking(candidates,target,0,0,used);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/_1zPYk70NvHsdY8UWVGXmQ