/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode* reverseBetween(ListNode* head, int m, int n) { // 典型的指针操作，详见参考链接或者Solution中的动图
        int pos = 1;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* cur = head;
        while (cur && pos < m) {
            pre = pre->next;
            cur = cur->next;
            pos ++;
        }
        ListNode* tailNode = cur;
        while (cur && pos <= n) {
            ListNode* nxt = cur->next;
            cur->next = pre->next;
            pre->next = cur;
            tailNode->next = nxt;
            cur = nxt;
            pos ++;
        }
        return dummy->next;
    }
};

// reference https://leetcode-cn.com/problems/reverse-linked-list-ii/solution/dong-hua-tu-jie-fan-zhuan-lian-biao-de-z-n4px/