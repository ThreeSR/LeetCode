class Solution {
private:
    vector<vector<string>> result;
    void backtracking(int row,int n,vector<string>& chessboard){
        if(row==n){  // 按照行放置一个皇后
            result.push_back(chessboard);
            return;
        }
        for(int col=0;col<n;++col){  // 按照行放置一个皇后，之后下一行的皇后根据上一行皇后位置进行列移动，进行调整
            if(isValid(row,col,n,chessboard)){
                chessboard[row][col] = 'Q';     // 放皇后
                backtracking(row+1,n,chessboard); // 回溯
                chessboard[row][col] = '.'; // 撤回皇后
            }
        }
    }
    bool isValid(int row,int col,int n,vector<string>& chessboard){
        for(int i=0;i<row;++i){ // 注意，大原则是一行一个皇后地回溯，所以这里不用判定同一行是不是有皇后。
            if(chessboard[i][col]=='Q') return false; // 这用于判定同一列有没有皇后
        }
        for(int i=row-1,j=col-1;j>=0&&i>=0;j--,i--){ // 用于判定45°角有没有皇后
            if(chessboard[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0&&j<n;j++,i--){ // 用于判定135°角有没有皇后
                if(chessboard[i][j]=='Q') return false;
        }
        return true;    // 判定一个方向上有没有皇后，最好画一个表格看看，可以更好理解。
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        result.clear();
        std::vector<std::string> chessboard(n,std::string(n,'.')); // 语法
        backtracking(0,n,chessboard);
        return result;
    }
};

// reference https://mp.weixin.qq.com/s/lU_QwCMj6g60nh8m98GAWg
/*
class Solution {
private:
vector<vector<string>> result;
// n 为输入的棋盘大小
// row 是当前递归到棋牌的第几行了
void backtracking(int n, int row, vector<string>& chessboard) {
    if (row == n) {
        result.push_back(chessboard);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (isValid(row, col, chessboard, n)) { // 验证合法就可以放
            chessboard[row][col] = 'Q'; // 放置皇后
            backtracking(n, row + 1, chessboard);
            chessboard[row][col] = '.'; // 回溯，撤销皇后
        }
    }
}
bool isValid(int row, int col, vector<string>& chessboard, int n) {
    int count = 0;
    // 检查列
    for (int i = 0; i < row; i++) { // 这是一个剪枝
        if (chessboard[i][col] == 'Q') {
            return false;
        }
    }
    // 检查 45度角是否有皇后
    for (int i = row - 1, j = col - 1; i >=0 && j >= 0; i--, j--) {
        if (chessboard[i][j] == 'Q') {
            return false;
        }
    }
    // 检查 135度角是否有皇后
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (chessboard[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}
public:
    vector<vector<string>> solveNQueens(int n) {
        result.clear();
        std::vector<std::string> chessboard(n, std::string(n, '.'));
        backtracking(n, 0, chessboard);
        return result;
    }
};
*/