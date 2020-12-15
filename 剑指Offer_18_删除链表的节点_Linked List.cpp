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
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode(0); // 删除节点需要制造一个新的头结点安排在现有的头结点之前，这是常用手段
        dummyHead->next = head;
        ListNode* flag = dummyHead;
        while (dummyHead->next != nullptr) {
            if (dummyHead->next->val == val) {
                dummyHead->next = dummyHead->next->next;
                break;
            }
            dummyHead = dummyHead->next;
        }
        return flag->next;
    }
};