# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode: # 双指针法
        dummyHaed = cur = ListNode(0) # 先制作一个dummyHead，可以用于标记开头
        while l1 and l2: # 都不空的时候
            if l1.val < l2.val:  # 哪个数字小，就把这个数字先放进新的链表中
                cur.next, l1 = l1, l1.next
            else:
                cur.next, l2 = l2, l2.next
            cur = cur.next
        cur.next = l1 if l1 else l2  # 这一行代表，当有一个链表结束了，那么因为各个链表是有序的，所以
        # 最终结果就把某个链表的剩余部分全部接下来就好了
        return dummyHaed.next
        