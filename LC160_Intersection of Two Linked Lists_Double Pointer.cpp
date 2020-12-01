/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution { // 双指针法 
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr; // 特判
        ListNode* pa = headA; // 双指针从A,B两个链表开头出发
        ListNode* pb = headB;
        while(pa != pb){ // 如果两个链表有交点，那么二者相等的位置就是交点；如果没有，那么就是NULL的位置，就是链表的末尾。
            pa = pa == nullptr ? headB : pa->next; // 这是因为两个指针的移动速度相同，分别让两个指针在A+B的范围上移动，如果有交点，那就是相等的时候。因为路程和速度相同。
            pb = pb == nullptr ? headA : pb->next; // 本题将指针在链表上的移动过程建模成“追及问题”，很巧妙。
        }
        return pa;
    }
};

// reference https://leetcode-cn.com/problems/intersection-of-two-linked-lists/solution/tu-jie-xiang-jiao-lian-biao-by-user7208t/ 详见链接