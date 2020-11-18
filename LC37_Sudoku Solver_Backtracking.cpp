class Solution {
private:
    bool backtracking(vector<vector<char>>& board){ // 不同于前面的题目，数独需要双重循环，因为行和列都要去尝试枚举
        for(int i=0;i<9;i++){ // 题目表明数独都是9*9格式，也可以用board.size(),board[0].size()
            for(int j=0;j<9;j++){
                if(board[i][j]!='.') continue; // 有数字跳过
                for(char k='1';k<='9';k++){   // 没数字则从1到9枚举，注意这里的board是char类型
                    if(isValid(i,j,k,board)){
                        board[i][j] = k;          // 填入
                        if(backtracking(board)) return true; // 填数独，题目要求有true即可。所以一旦有满足，马上true，结束
                        board[i][j] = '.';        // 回溯
                    }
                }
                return false;   // 这里的false在i++与j++之前，代表一个行/列对1-9的数字进行了逐一尝试。没成功返回false，这个false也防止了死循环
            }
        }
        return true; // 历经千辛万苦，终于到了true。这里的true对应if判断的backtracking函数，用于第10行if的判断；第10行另一个return true是对应solveSudoku
        // 中的backtracking函数，用于return最终的结果。所以这边有两个return true，功能不同。
    }
    bool isValid(int row,int col,char val,vector<vector<char>>& board){
        for(int i=0;i<board.size();++i){ // 进行行判别，不可重复
            if(board[i][col]==val) return false;
        }
        for(int i=0;i<board[0].size();++i){ // 列判别
            if(board[row][i]==val) return false;
        }
        int startRow = (row/3)*3; // row/3是地板除
        int startCol = (col/3)*3;
        for(int i=startRow;i<startRow+3;++i){ // 3*3的小方格中进行查重，一个个遍历，双循环
            for(int j=startCol;j<startCol+3;++j){
                if(board[i][j]==val) return false; // 这时k数字还没有填入，所以遍历就好，不用考虑k在其中会与board[i][j]相等导致误判的问题
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        backtracking(board);
    }
};
// reference https://mp.weixin.qq.com/s/eWE9TapVwm77yW9Q81xSZQ 具体详解见reference
// 不同于以往void backtracking，这里是bool类型。回溯思路是一样的，但是具体实现还是看题目要求。
/*
class Solution {
private:
bool backtracking(vector<vector<char>>& board) {
    for (int i = 0; i < board.size(); i++) {        // 遍历行
        for (int j = 0; j < board[0].size(); j++) { // 遍历列
            if (board[i][j] != '.') continue;
            for (char k = '1'; k <= '9'; k++) {     // (i, j) 这个位置放k是否合适
                if (isValid(i, j, k, board)) { 
                    board[i][j] = k;                // 放置k
                    if (backtracking(board)) return true; // 如果找到合适一组立刻返回
                    board[i][j] = '.';              // 回溯，撤销k
                }
            }
            return false;                           // 9个数都试完了，都不行，那么就返回false
        }
    }
    return true; // 遍历完没有返回false，说明找到了合适棋盘位置了
}
bool isValid(int row, int col, char val, vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++) { // 判断行里是否重复
        if (board[row][i] == val) {
            return false;
        }
    }
    for (int j = 0; j < 9; j++) { // 判断列里是否重复
        if (board[j][col] == val) {
            return false;
        }
    }
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = startRow; i < startRow + 3; i++) { // 判断9方格里是否重复
        for (int j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == val ) {
                return false;
            }
        }
    }
    return true;
}
public:
    void solveSudoku(vector<vector<char>>& board) {
        backtracking(board);
    }
};
*/