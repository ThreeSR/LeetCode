class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector< pair<int, int> > lines(n);    /* 记录每行的信息，组成: 军人数量, 所在行数 */

        /* 检索矩阵，得到每行的信息 */
        for(int i = 0; i < n; ++i) {
            int one_cnt = 0;
            for(int x : mat[i]) {
                if(x == 0) {
                    break;
                }
                one_cnt += x;
            }
            lines[i] = {one_cnt, i};
        }

        /* 直接排序，排序优先级: 军人数量, 所在行数 */
        sort(lines.begin(), lines.end());

        /* 将最弱的 k 行返回 */
        vector<int> ans(k);
        for(int i = 0; i < k; ++i) {
            ans[i] = lines[i].second;
        }
        
        return ans;
    }
};

// reference https://leetcode-cn.com/problems/the-k-weakest-rows-in-a-matrix/solution/fang-zhen-zhong-zhan-dou-li-zui-ruo-de-k-xing-by-l/