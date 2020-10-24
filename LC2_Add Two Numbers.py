# -*- coding: utf-8 -*-
"""
Created on Sat Oct 24 21:39:35 2020

@author: lneovo
"""

import math
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(l1, l2):

    carry = 0
    p = init = ListNode(0) # 初始化，取什么val不要紧

    while l1 and l2:
        p.next = ListNode(l1.val + l2.val + carry)
        carry = math.floor(p.next.val/10) # 进位flag
        p.next.val %= 10
        p = p.next
        l1 = l1.next
        l2 = l2.next

    diff = l1 or l2 # 防止l1和l2中数字长度不一致 difference

    while diff:
        p.next = ListNode(diff.val + carry)
        carry = math.floor(p.next.val/10)
        p.next.val %= 10
        p = p.next
        diff = diff.next

    if carry: # 此处处理最高位进位，最后多加一个 1 
        p.next = ListNode(1)
        
    return init.next.val, init.next.next.val, init.next.next.next.val
   #return init.next 其实return这个即可

# [2,4,3]
# [5,6,4]

l1 = x = ListNode(2)
l1.next = ListNode(4)
l1.next.next = ListNode(3)


l2 = y = ListNode(5)
l2.next = ListNode(6)
l2.next.next = ListNode(4)

print(addTwoNumbers(l1,l2))

# carry是进位标记，其他流程就是按照正常的加法流程
# reference：1. https://blog.csdn.net/weixin_40449300/article/details/81273923
# 2. https://blog.csdn.net/supermaryrio/article/details/86745568?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-2.channel_param&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-2.channel_param
