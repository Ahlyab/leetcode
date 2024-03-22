class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* temp = head;
        int carry = 0;
        while(l1 && l2) {
            int res = l1->val + l2->val + carry;
            carry = res/10;
            temp->val = res%10;
            if(l1->next || l2->next || carry > 0) {
                temp->next = new ListNode(carry);
            }
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1) {
            int res = l1->val + carry;
            carry = res/10;
            temp->val = res%10;
            if(carry >0 || l1->next) {
                temp->next = new ListNode(carry);
                temp = temp->next;
            }
            l1 = l1->next;
        }

        while(l2){
            int res = l2->val + carry;
            carry = res/10;
            temp->val = res%10;
            if(carry >0 || l2->next) {
                temp->next = new ListNode(carry);
                temp = temp->next;
            }
            l2 = l2->next;
        }

        return head;
    }
};