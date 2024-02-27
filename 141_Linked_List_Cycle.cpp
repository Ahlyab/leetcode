/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (!head || !head->next)
        {
            return false;
        }
        int val = head->val;

        ListNode *temp = head->next;

        while (temp && temp->next)
        {
            if (head == temp)
            {
                return true;
            }
            head = head->next;
            temp = temp->next->next;
        }
        return false;
    }
};