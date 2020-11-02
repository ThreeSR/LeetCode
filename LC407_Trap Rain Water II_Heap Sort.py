# -*- coding: utf-8 -*-
"""
Created on Fri Oct 23 22:10:22 2020

@author: Three
"""
import heapq

def trapRainWater(heightmap):
    
    if not heightmap: return 0
    
    visited = set()
    heap = [] 
    rainwater = 0
    
    row = len(heightmap)
    col = len(heightmap[0])
    
    for i in range(col):
        heapq.heappush(heap,[heightmap[0][i],0,i])
        heapq.heappush(heap,[heightmap[row-1][i],row-1,i])
        visited.add((0,i))
        visited.add((row-1,i))
        
    for i in range(row):
        heapq.heappush(heap,[heightmap[i][0],i,0])
        heapq.heappush(heap,[heightmap[i][col-1],i,col-1])
        visited.add((i,0))
        visited.add((i,col-1))
        
    cur_max = float("-inf")
    
    while(heap):       
        h,i,j = heapq.heappop(heap)
        cur_max = max(cur_max,h)
        for x,y in [[1,0],[0,1],[-1,0],[0,-1]]: #要用中括号
            temp_x = i + x
            temp_y = j + y
            if (temp_x < 0) or (temp_y < 0) or (temp_x >= row) or (temp_y >= col) or ((temp_x,temp_y) in visited):
                continue
            if heightmap[temp_x][temp_y] < cur_max:
                rainwater += cur_max - heightmap[temp_x][temp_y]
            visited.add((temp_x,temp_y))
            heapq.heappush(heap,[heightmap[temp_x][temp_y],temp_x,temp_y])
    return rainwater

heightmap = [[1,4,3,1,3,2],[3,2,1,3,2,4],[2,3,3,2,3,1]]
print(trapRainWater(heightmap))
            
        
