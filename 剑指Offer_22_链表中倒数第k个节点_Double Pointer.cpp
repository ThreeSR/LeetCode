/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {  // 双指针法
        ListNode* p = head; // 慢指针
        ListNode* q = head; // 快指针
        while (k != 0) {  // 快慢指针之间留k的距离
            q = q->next;
            k--;
        }
        while (q != nullptr) {  // 当快指针指到末尾的时候，慢指针就指到倒数第K个元素
            q = q->next;
            p = p->next;
        }
        return p;
    }
};