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
    vector<int> reversePrint(ListNode* head) {
        vector<int> result;
        while (head != nullptr) {
            result.push_back(head->val);
            head = head->next;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

