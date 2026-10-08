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
    let result = []

    while(head) {
        if(head.val === 0) {
            result.push(sum)
            sum = 0;
        }
        sum += head.val;
        head = head.next;
    }

    console.log(result);
    let finalResult = new ListNode(result[1]);
    let temp = finalResult;

    for(let i=2; i<result.length; ++i) {
        temp.next = new ListNode(result[i]);
        temp = temp.next
    }
    return finalResult;
};