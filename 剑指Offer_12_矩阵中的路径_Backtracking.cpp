class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) { // 回溯法
        rows = board.size();
        cols = board[0].size();
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(dfs(board, word, i, j, 0)) return true; // 把每一个格子依次视为起点，进行验证
                // 一旦某一个格子为起点的路径满足了word，那就可以return true了。
            }
        }
        return false;
    }
private:
    int rows, cols;
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
        if(i >= rows || i < 0 || j >= cols || j < 0 || board[i][j] != word[k]) return false; // 特殊判断
        if(k == word.size() - 1) return true; // 如果可以回溯到树形结构的叶子，那么成功
        board[i][j] = '\0'; // 做标记，代表已经走过的路程，不走重复路径
        bool res = dfs(board, word, i + 1, j, k + 1) || dfs(board, word, i - 1, j, k + 1) || 
                      dfs(board, word, i, j + 1, k + 1) || dfs(board, word, i , j - 1, k + 1); // 回溯，逐个尝试
        board[i][j] = word[k]; // 复原
        return res; // 输出结果
    }
};

// reference https://leetcode-cn.com/problems/ju-zhen-zhong-de-lu-jing-lcof/solution/mian-shi-ti-12-ju-zhen-zhong-de-lu-jing-shen-du-yo/