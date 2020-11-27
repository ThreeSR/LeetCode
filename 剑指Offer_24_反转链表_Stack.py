# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        stack = []
        while head is not None:
            stack.append(head.val)
            head = head.next
        if not stack:
            return None
        res = init = ListNode(stack.pop())
        while stack:
            res.next = ListNode(stack.pop())
            res = res.next
        return init
# 同LC206