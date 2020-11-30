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
    ListNode* removeNthFromEnd(ListNode* head, int n) { // 双指针法
        
        ListNode* dummyNode = new ListNode(0); // 制造一个dummyNode是一个非常常用且经典的方法，可以避免讨论特殊的头结点
        dummyNode->next = head;
        ListNode* p = dummyNode; // 双指针初始化
        ListNode* q = dummyNode;
        
        for (int i = 0; i < n + 1; i++){ // 让q指针先行，和p指针保持n+1的距离
            q = q->next;
        }
        
        while(q){ // p指针启动，直到q指针到末尾终止。这样p指针指的是链表的倒数n+1个节点
            p = p->next;
            q = q->next;
        }

        ListNode* delNode = p->next; // 因为删除的是倒数第n个节点，所以是删去p->next，称这个节点为delNode
        p->next = delNode->next; // 删节点
        delete delNode; // C++需要手动删除

        ListNode* newHead = dummyNode->next; // 处理好了，得到dummyNode的下一个节点，输出这个即可。
        delete dummyNode; // 手动删除
        return newHead;
    }
};

// reference https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/solution/dong-hua-tu-jie-leetcode-di-19-hao-wen-ti-shan-chu/ 动图见链接