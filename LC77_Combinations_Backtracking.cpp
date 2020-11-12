class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(int index,int n,int k){
        if(path.size()==k){
            result.push_back(path);
            return;
        }
        for(int i=index;i<n-(k-path.size())+1;++i){ // i<n-(k-path.size())+1是剪枝操作，减去不可能的组合。即：剩余数的个数比要求的k个数还要小，
        // 这时候选不够了，所以直接跳过，剪枝降低运算复杂度。 所以这边不剪枝也是可以的，直接i＜n就好了，但是做了比较多没意义的劳动
            path.push_back(i+1);
            backtracking(i+1,n,k);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        result.clear();
        path.clear();
        backtracking(0,n,k);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/OnBjbLzuipWz_u4QfmgcqQ