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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* curr = head;
        ListNode* next = head->next;

        while(next) {
            int temp = curr->val;
            curr->val = next->val;
            next->val = temp;

            curr = next->next;
            if(curr != nullptr) {
                next = curr->next;
            }else {
                break;
            }
            
        }

        return head;
    }
};