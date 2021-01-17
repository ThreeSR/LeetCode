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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {  // 双指针法
        ListNode* fast = head;
        ListNode* slow = head;
        if (head == nullptr) return nullptr;  // 特判
        int length = 1;
        while (fast->next != nullptr) {
            fast = fast->next;
            length++;
        }
        fast->next = head;
        int step = length - k % length; // 防止k太大
        while (step > 1) {
            slow = slow->next;
            step--;
        }
        ListNode* newHead = slow->next;
        slow->next = nullptr;
        return newHead;
    }
};

// reference https://leetcode-cn.com/problems/rotate-list/solution/61-xuan-zhuan-lian-biao-tu-wen-xiang-jie-by-sdwwld/
// 上述代码实现的过程所需的图解在Solution中，图解一目了然，故不再解释代码
// 简单来说，就是先让链表成环，然后把要移动的节点当作头结点，之后断开头结点前面的链接，从环再次变回链表。这时候就是结果。