/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function (l1, l2) {
  let l1Copy = l1;
  let l2Copy = l2;

  let resultHead = new ListNode(0);
  let result = null;
  let extra = 0;
  while (l1Copy || l2Copy) {
    let val = null;

    if (!l2Copy) {
      const sum = l1Copy.val + extra;
      val = sum % 10;
      extra = Math.floor(sum / 10);

      // advance l1
      l1Copy = l1Copy.next;
    } else if (!l1Copy) {
      const sum = l2Copy.val + extra;
      val = sum % 10;
      extra = Math.floor(sum / 10);

      // advance l2
      l2Copy = l2Copy.next;
    } else {
      const sum = l1Copy.val + l2Copy.val + extra;
      val = sum % 10;
      extra = Math.floor(sum / 10);
      // advance l1 & l2
      l1Copy = l1Copy.next;
      l2Copy = l2Copy.next;
    }

    // if first iteration
    if (!result) {
      result = new ListNode(val);
      resultHead = result;
    } else {
      result.next = new ListNode(val);
      result = result.next;
    }
  }
  if (extra) {
    result.next = new ListNode(extra);
  }
  return resultHead;
};
