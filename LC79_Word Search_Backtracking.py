class Solution:
    directions = [(0, 1), (1, 0), (-1, 0), (0, -1)] # 方向
    def exist(self, board: List[List[str]], word: str) -> bool:  # 回溯法 
        m = len(board)
        if m == 0: return False # 特判
        n = len(board[0])

        marked = [[False for _ in range(len(board[0]))] for _ in range(len(board))] # 一开始都是false，直到找到一条单词路径，上面都是true
        for i in range(m): # 一个个位置寻找，枚举
            for j in range(n):
                if self.searchWord(board, word, 0, i, j, marked, m, n):
                    return True
        return False
        
    def searchWord(self, board, word, index, startX, startY, marked, m, n):
        if index == len(word) - 1: # 终止条件
            return board[startX][startY] == word[index]
            
        if board[startX][startY] == word[index]: # 匹配上了
            marked[startX][startY] = True
            for direction in self.directions: # 常用位置处理方法
                newX = startX + direction[0]
                newY = startY + direction[1]
                if 0<= newX < m and 0<= newY < n and not marked[newX][newY] and self.searchWord(board, word, index + 1, newX, newY, marked, m, n): # 回溯
                    return True
            marked[startX][startY] = False # 变成false
        return False

// reference https://leetcode-cn.com/problems/word-search/solution/zai-er-wei-ping-mian-shang-shi-yong-hui-su-fa-pyth/