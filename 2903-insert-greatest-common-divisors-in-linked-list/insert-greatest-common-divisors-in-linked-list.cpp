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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode*curr = head;
        ListNode*next = head->next;

        while(next) {
            int val = gcd(curr->val, next->val);
            ListNode* temp = new ListNode(val);
            curr->next = temp;
            temp->next = next;

            curr = next;
            next = next->next;
        }

        return head;
    }
};