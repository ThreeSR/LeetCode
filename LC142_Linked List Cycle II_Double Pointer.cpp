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
    ListNode *detectCycle(ListNode *head) { // 双指针，设置一个快一个慢，快的是慢的两倍
        ListNode* fast = head; // 从头结点开始
        ListNode* slow = head;
        while(fast != NULL && fast->next != NULL){ 
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){ // 这样设置下，两个指针一定在环内相遇。除非没有环
                ListNode* index1 = fast; // 相遇后，记录相遇位置。根据数学推导，此时从head出发一个指针，从相遇处出发一个指针，一步步走，一定在环入口处相遇
                ListNode* index2 = head;
                while(index1 != index2){
                    index1 = index1->next;
                    index2 = index2->next;
                }
                return index1; // 此时代表在环入口相遇，输出当前位置即可。
            }
        }
        return NULL;
    }
};

// reference https://mp.weixin.qq.com/s/_QVP3IkRZWx9zIpQRgajzA 具体数学推导见链接中内容