# -*- coding: utf-8 -*-
"""
Created on Sun Nov  1 14:47:31 2020

@author: Three
"""

class Solution:
    def countSubstrings(self, s: str) -> int:
        size = len(s)
        res = 0
        for i in range(2*size-1): # 以i为中心，向两边扩张，找寻相同字符
            left = i//2
            right = i//2 + i%2
            while(left>=0 and right<size and s[left] == s[right]):
                left -= 1
                right += 1
                res += 1
        return res
    
res = Solution()
print(res.countSubstrings("aaa"))

# reference： https://leetcode-cn.com/problems/palindromic-substrings/solution/hui-wen-zi-chuan-by-leetcode-solution/
# More details are in Solution File.