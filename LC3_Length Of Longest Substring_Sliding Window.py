# -*- coding: utf-8 -*-
"""
Created on Thu Oct 29 16:10:39 2020

@author: Three
"""

def lengthOfLongestSubstring(s):
    ans = ''
    temp = ''
    # string的处理
    for i in s:
        if i not in temp:
            temp += i
        else:
            temp = temp[temp.index(i)+1:]
            temp += i
        if len(temp) > len(ans):
            ans = temp
    return len(ans)

s = "bbbbba"
print(lengthOfLongestSubstring(s))


#class Solution:
#    def lengthOfLongestSubstring(self, s: str) -> int:
#        if not s:
#            return 0
#        res = []
#        temp = []
#        for i in range(len(s)):
#            if s[i] in temp:
#                res.append(len(temp))
#                temp.clear()
#            temp.append(s[i])
#            if  i == len(s)-1:
#                res.append(len(temp))
#        
#        return max(res)
"""
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # 使用一个辅助变量来暂时存储匹配的子串
        ans = ''
        tep = ''
        for i in s:
            # 遍历，若不重复则记录该字符
            if i not in tep:
                tep += i
            # 如果遇到了已经存在的字符，则找到该字符所在位置，删除该字符，并保留该位置之后的子串，并把当前字符加入到最后，完成更新
            else:
                tep = tep[tep.index(i)+1:]
                tep += i   
            # 如果是当前最长的，就替换掉之前存储的最长子串
            if len(tep) > len(ans): 
                    ans = tep 
        return len(ans)
"""
