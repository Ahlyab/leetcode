class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next) {
            return head;
        }

        ListNode* slow_ptr = head;
        ListNode* fast_ptr = head;

        while(fast_ptr->next && fast_ptr->next->next) {
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
        }

        if(fast_ptr->next) {
            fast_ptr = fast_ptr->next;
            slow_ptr = slow_ptr->next;
        }

        return slow_ptr;
    }
};
