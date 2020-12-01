/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {  // 将链表变成数组，然后进行数组的回文判断即可。
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* cur = head;
        while (cur != NULL){ // 变数组
            vec.push_back(cur->val);
            cur = cur->next;
        }
        for (int i = 0, j = vec.size() - 1; i < j; i++, j--){ // 数组回文判断，i<j即可。
            if (vec[i] != vec[j]) return false;
        }
        return true;
    }
};

// 应该也可以先入栈一半元素，拿另一半进行比较。