# -*- coding: utf-8 -*-
"""
Created on Sat Aug 22 02:05:30 2020

@author: Three
"""

def isValid(s) -> bool:
    #数据结构：栈
        stack = []
        left = ['(','[','{']
        right = [')',']','}']
        for letter in s:
            if letter in left:
                stack.append(letter)
            if letter in right:
                pos = right.index(letter)
                #if后面的判断逻辑是有先后之分的，有时候这很重要！！
                if (len(stack)>0) and (left[pos] == stack[-1]):
                    stack.pop()
                else:
                    return False
        if len(stack) == 0:
            return True
        else:
            return False  

s = input()
print(isValid(s))