# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: ListNode) -> ListNode: # 归并排序 分治算法
        if not head or not head.next: return head # 特判
        slow, fast = head, head.next # 设置快慢指针。目的在于快指针到尾巴时，慢指针在中间，便于下面的divide
        while fast and fast.next:
            fast, slow = fast.next.next, slow.next
        # Divide 分割
        mid, slow.next = slow.next, None # 这时候，slow的next是mid，就是中间位置。这个位置需要仔细寻找。因为要divide，所以下面的slow.next = None,表示切断
        left, right = self.sortList(head), self.sortList(mid) # 递归，使得归并排序实现。这时候原本的链表被切割成一个个元素级。
        h = res = ListNode(0) # 准备重新合并，这时候先定义一个头结点
        while left and right: # merge 合并
            if left.val <= right.val: h.next, left = left, left.next # 从小到大排序
            else: h.next, right = right, right.next
            h = h.next # 头结点向后走，res已经保留了位置
        h.next = left if left else right # 最后防止元素奇数个的情况。有时候元素不是偶数，没办法两两归并，这里多一个奇数个落单元素归并的机会
        return res.next # 返回一个排好序的链表 

# reference https://leetcode-cn.com/problems/sort-list/solution/sort-list-gui-bing-pai-xu-lian-biao-by-jyd/