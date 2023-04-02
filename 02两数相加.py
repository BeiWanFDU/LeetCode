from typing import *


# Definition for singly-linked list.
class ListNode:

    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:

    def addTwoNumbers(self, l1: Optional[ListNode],
                      l2: Optional[ListNode]) -> Optional[ListNode]:
        virtualHead = ListNode(-1)
        k = virtualHead
        flag = 0
        while l1 or l2:
            n1 = l1.val if l1 is not None else 0
            n2 = l2.val if l2 is not None else 0
            n = n1 + n2 + flag
            k.next = ListNode(n % 10)
            flag = 1 if n > 9 else 0
            k = k.next
            l1 = l1.next if l1 is not None else l1
            l2 = l2.next if l2 is not None else l2
        if flag:
            k.next = ListNode(1)
        return virtualHead.next
