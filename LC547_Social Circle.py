# -*- coding: utf-8 -*-
"""
Created on Wed Sep 23 11:15:09 2020

@author: lneovo
"""
import numpy as np

def find(a):
    if father[a] != a:
        father[a] = find(father[a])
    return father[a]

def union(a,b):
    father[find(a)] = find(b)
    return None

M = np.array([[1,1,0],[1,1,1],[0,0,1]])

father = [i for i in range(len(M))]

for a in range(len(M)):
    for b in range(a):
        if M[a][b]:
            union(a,b)
            
for i in range(len(M)):
    find(i)

print(len(set(father)))