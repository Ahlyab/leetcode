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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> numbers;
        for (int n : nums) {
           numbers.insert(n);
        }


        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;

        while(head) {
            if(numbers.find(head->val) == numbers.end()) {
                curr->next = head;
                curr = curr->next;
            }
            head = head->next;
        }

        curr->next = nullptr;

        return dummy->next;
    }    
};
