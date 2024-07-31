"""
相交链表
两个单链表
AB表：[4,1,8,4,5,5,6,1,8,4,5]
BA表：[5,6,1,8,4,5,4,1,8,4,5]
原本的思路是对比两个list的连续相同段,
但是相交链表的本质是两段链表.一定有重复段且长度固定,因此两个链表拼接起来总长是一致的,在某一个指针处元素相同,那么后续段元素都相同
"""


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        if not headA or not headB:
            return None
        # 使用双指针法
        pointerA, pointerB = headA, headB
        while pointerA != pointerB:
            # 当指针A到达链表结尾时，指向链表B的头节点
            pointerA = pointerA.next if pointerA else headB
            # 当指针B到达链表结尾时，指向链表A的头节点
            pointerB = pointerB.next if pointerB else headA

        return pointerB


# 使用示例
# 构造链表
# A:      4 -> 1
#               \
#                8 -> 4 -> 5
#               /
# B: 5 -> 6 -> 1

a1 = ListNode(4)
a2 = ListNode(1)
b1 = ListNode(5)
b2 = ListNode(6)
b3 = ListNode(1)
c1 = ListNode(8)
c2 = ListNode(4)
c3 = ListNode(5)

a1.next = a2
a2.next = c1
b1.next = b2
b2.next = b3
b3.next = c1
c1.next = c2
c2.next = c3

solution = Solution()
intersection = solution.getIntersectionNode(a1, b1)
if intersection:
    print(f"Intersection at node with value: {intersection.val}")
else:
    print("No intersection")
