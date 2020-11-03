# -*- coding: utf-8 -*-
"""
Created on Tue Nov  3 14:39:26 2020

@author: Three
"""

class Solution:
    def fizzBuzz(self, n):
        res = []
        for i in range(1,n+1):
            if i%3==0 and i%5==0:
                res.append("FizzBuzz")
            elif i%3==0:
                res.append("Fizz")
            elif i%5==0:
                res.append("Buzz")
            else:
                res.append(str(i))
        return res

ans = Solution()
print(ans.fizzBuzz(15))