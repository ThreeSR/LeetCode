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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head;  // 特判
        ListNode* dummy = new ListNode(0, head); // 设置哑结点
        ListNode* cur = dummy; 
        while (cur->next && cur->next->next) { // 当cur->next与cur->next->next都存在的时候
            if (cur->next->val == cur->next->next->val) { // 如果遇到后面两个连续数值相等，那么记录下这个数值
                int x = cur->next->val;
                while (cur->next && cur->next->val == x) { // 将重复元素删除，这里设置while循环，可以删去多个重复元素
                    cur->next = cur->next->next; // 在删除元素的过程中，一定要好好理解cur->next的变化，这里很容易出错
                    // 建议大家在草稿纸上进行推演，你会发现很简单
                }
            }
            else {
                cur = cur->next; // 如果没发现重复元素，那么正常推进
            }
        }
        return dummy->next; // 返回头结点
    }
};

