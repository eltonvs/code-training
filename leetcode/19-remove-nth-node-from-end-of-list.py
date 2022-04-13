# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        h = head
        list_size = 1
        while h.next:
            h = h.next
            list_size += 1

        if list_size == n:
            return head.next

        h = head
        for i in range(list_size - n - 1):
            h = h.next
        h.next = h.next.next
        return head
