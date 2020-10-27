# -*- coding: utf-8 -*-
"""
Created on Tue Oct 27 14:28:46 2020

@author: Three
"""

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
class Solution:
    def reverseList(self, head):
        stack = []
        while head is not None:
            stack.append(head.val)
            head = head.next
        if not stack: # 异常情况要多多考虑
            return None
        res = init = ListNode(stack.pop()) # 学会这种next下去的方法      
        while stack:           
            res.next = ListNode(stack.pop()) # 一步步next
            res = res.next
        return init
    

input = [1,2,3,4,5]
head2 = head = ListNode(input[0])
for i in range(1,len(input)):
    head2.next = ListNode(input[i])
    head2 = head2.next
res = Solution()
print(res.reverseList(head))

# 思路就是先把数据倒进堆栈，再利用LIFO放进链表
# 但是放进链表比输出难，因为放入的时候要考虑下一个next不是none，不然报错
# 但是输出的时候不存在这种问题