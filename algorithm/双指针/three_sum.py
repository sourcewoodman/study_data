class ListNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next


def insert_at_head(head, value):
    new_node = ListNode(value)
    new_node.next = head
    return new_node


# 插入多个值到链表头部
head = None
values = [1, 3, 4, 5]
for value in values:
    head = insert_at_head(head, value)
# 打印链表中的所有值
current = head
while current:
    print(current.value, end=" -> ")
    current = current.next
print("None")
                                                                                                                                                                                             