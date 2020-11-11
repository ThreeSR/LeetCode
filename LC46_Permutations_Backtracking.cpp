class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking (vector<int>& nums, vector<bool>& used) {
        // 此时说明找到了一组
        if (path.size() == nums.size()) {
            result.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i] == true) continue; // path里已经收录的元素，直接跳过
            used[i] = true;
            path.push_back(nums[i]);
            backtracking(nums, used);
            path.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        result.clear();
        path.clear();
        vector<bool> used(nums.size(), false);
        backtracking(nums, used);
        return result;
    }
};

/*
reference https://mp.weixin.qq.com/s/SCOjeMX1t41wcvJq49GhMw
reference2 https://mp.weixin.qq.com/s/gjSgJbNbd1eAA5WkA-HeWw
一些先导知识：
void函数可以不加return，意味着从函数头到尾，算是一整个函数结束，跳出一个递归栈。按照递归的原理，后进先出，所以是递归栈。具体递归图示见GitHub Solution。
如果void函数加了return，就用return;即可。这代表从当前递归栈直接跳出，结束一个函数。有点像break的作用，不过比break威力大。
记住在进入递归的过程中，程序保留了进入前的状态，递归回来之后接着前面的状态继续。
本题是回溯法，其实是一种暴力枚举，模板见reference2
明白整个枚举流程，先是i=0，之后是0，1,2；012之后2出来，1也出来，i=1+1,2进入，1再进入，变成021。之后1出来，2出来，0出来。i=0+1=1,1进入，0进入，2进入，102.重复
上述流程，变成120，之后全部出来，i=1+1=2,2先进入，0,1跟着进，变成201，再是210，最后全部退出。此时i=2+1=3不小于size，所以执行完毕，result中加入的就是6种情况，
就是6个全排列。
至此，全部递归栈处理完毕，回溯法完成，得到结果。

*/