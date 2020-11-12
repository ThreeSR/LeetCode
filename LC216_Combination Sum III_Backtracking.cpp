class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(int k,int n,int index,int sum){
        if(sum > n){ // 提前判断sum与n的关系，早做决断，剪枝
            return;
        }
        if(path.size()==k){
            if(sum==n) result.push_back(path);
            return;
        }
        for(int i=index;i<=9-(k-path.size())+1;i++){   // 9-(k-path.size())+1 是剪枝，写9也可以
            sum += i;
            path.push_back(i);
            backtracking(k,n,i+1,sum); // 这里是i，不是index！这样可以保证没有重复
            sum -= i;
            path.pop_back();
        }        
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        result.clear();
        path.clear();
        backtracking(k,n,1,0);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/HX7WW6ixbFZJASkRnCTC3w
