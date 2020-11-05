# -*- coding: utf-8 -*-
"""
Created on Thu Nov  5 13:46:03 2020

@author: Three
"""

class Solution:
    def numWays(self, n: int) -> int:
        if n<2: return 1
        return (self.numWays(n-1) + self.numWays(n-2))%1000000007