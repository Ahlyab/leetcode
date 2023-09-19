class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) {
            return head;
        }

        ListNode* ptr1 = head;
        ListNode* ptr2 = head->next;

        while(ptr1 && ptr2) {
            if(ptr2->val == val) {
                ptr1->next = ptr2->next;
                delete ptr2;
                ptr2 = ptr1->next;
            }else{
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            
        }
        if(head && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        return head;
    }
};