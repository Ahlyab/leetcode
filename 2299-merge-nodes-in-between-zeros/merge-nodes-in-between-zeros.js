/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var mergeNodes = function(head) {
    let sum = 0;
    let result = new ListNode();
    let temp = result;
    head = head.next;

    while(head) {
        if(head.val === 0) {
            temp.next = new ListNode(sum);
            sum = 0;
            temp = temp.next;
        }
        sum += head.val;
        head = head.next;
    }

    return result.next;
};