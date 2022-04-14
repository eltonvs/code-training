/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function (list1, list2) {
  if (!list1 || !list2) {
    return list1 || list2;
  }

  const answerHead = new ListNode();
  let answer = null;
  let l1 = list1;
  let l2 = list2;
  while (l1 || l2) {
    let val = null;
    if (!l1 || (l2 && l2.val < l1.val)) {
      val = l2.val;
      l2 = l2.next;
    } else {
      val = l1.val;
      l1 = l1.next;
    }

    if (!answer) {
      answer = answerHead;
      answer.val = val;
    } else {
      answer.next = new ListNode(val);
      answer = answer.next;
    }
  }
  return answerHead;
};
