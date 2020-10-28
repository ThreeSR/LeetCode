# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 20:27:12 2020
@author: Three
"""
def numIslands(grid):
    f = {}
    
    def find(x): # 查
        f.setdefault(x,x)
        if f[x] != x:
            f[x] = find(f[x])
        return f[x]
    
    def union(x,y): # 并
        f[find(x)] = find(y)
        
    if not grid: # 异常检测
        return 0
    # 以下为矩阵处理常用方法，接雨水II也是如此
    row = len(grid)
    col = len(grid[0])
    
    for i in range(row):
        for j in range(col):
            if grid[i][j] == "1": # 注意，这里是要加""的数字
                for a,b in [(-1,0),(0,-1)]: # 好用的方法，这里搜索滑过的位置效率更高。里面的括号可以是中括号。两个即可，四个有些浪费，没必要
                    # 总之所有点都会经过
                    temp_i = i + a
                    temp_j = j + b
                    if 0<= temp_i < row and 0<= temp_j < col and grid[temp_i][temp_j] == "1":
                        union(400*i+j,400*temp_i+temp_j) # 这里特别说明：400*i+j是确保从二维矩阵到一维映射，每个点是唯一的，
    # 400是一个超参数，设置成其他的也可以，但要保证唯一性！考虑到题目grid矩阵最高维是300*300，所以我这里取400，一个较大值，保证唯一性                    
    # 注意：这里考虑的都是有岛屿的点，陆地点都没有被考虑。所以在下面的路径压缩和打印结果时，都要确保在有岛屿的状态下
    for i in range(row):
        for j in range(col):
            if grid[i][j] == "1": # 确保有岛屿
                find(400*i+j)     # 路径压缩
            
    res = set()  # 建立set，到时候求岛屿数。set可以保证元素唯一性，并查集常用
    for i in range(row):
        for j in range(col):
            if grid[i][j] == "1":
                res.add(f[400*i+j]) # 加入元素，set用add，list用append
            
    print(len(res)) # set自动唯一性处理，这里len就是岛屿的数量了
    
input = [["1","1","1","1","0"],["1","1","0","1","0"],["1","1","1","0","0"],["0","0","1","0","1"]]
numIslands(input)
            
"""    
附录：
python字典中的setdefault用法，注意：这个方法是字典的，这是这里用字典的一个原因。如果只是用list，没办法用这个非常好用的函数
result = dict.setdefault(key, default=None)
如果键在字典中，返回这个键所对应的值。如果键不在字典中，向字典中插入这个键，并且以default为这个键的值，并返回 default。default的默认值为None
"""