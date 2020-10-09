# -*- coding: utf-8 -*-
"""
Created on Sat Aug 29 01:50:44 2020

@author: Three
"""

# Python3 code to Check for  
# balanced parentheses in an expression 
def check(expression): 
      
    open_tup = tuple('({[') 
    close_tup = tuple(')}]') 
    map = dict(zip(open_tup, close_tup)) 
    queue = [] 
  
    for i in expression: 
        if i in open_tup: 
            queue.append(map[i]) 
        elif i in close_tup: 
            if not queue or i != queue.pop(): 
                return "Unbalanced"
    if not queue: 
        return "Balanced"
    else: 
        return "Unbalanced"
  
# Driver code 
string = "{[]{()}}"
print(string, "-", check(string)) 
  
string = "((()"
print(string,"-",check(string)) 