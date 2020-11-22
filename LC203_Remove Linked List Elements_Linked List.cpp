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
    ListNode* removeElements(ListNode* head, int val) { // 制作一个虚拟头结点，之后进行删除。因为怕删除的是头结点，所以在头结点之上设计一个虚拟节点
        ListNode* dummyHead = new ListNode(0); // 创建虚拟头结点
        dummyHead->next = head; // 要记得把虚拟头结点和真实头结点连上
        ListNode* cur = dummyHead;
        while(cur->next != NULL){
            if(cur->next->val == val){
                ListNode* temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }else{
                cur = cur->next;
            }
        }
        return dummyHead->next; // 设计了虚拟头结点，要记得return虚拟头结点的next
    }
};
// reference https://mp.weixin.qq.com/s/slM1CH5Ew9XzK93YOQYSjA