class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def merge(l1, l2):
    dummy = Node(0)
    tail = dummy

    while l1 and l2:
        if l1.data < l2.data:
            tail.next = l1
            l1 = l1.next
        else:
            tail.next = l2
            l2 = l2.next

        tail = tail.next

    tail.next = l1 if l1 else l2

    return dummy.next


# Example
a = Node(1)
a.next = Node(3)

b = Node(2)
b.next = Node(4)

merged = merge(a, b)

while merged:
    print(merged.data, end=" -> ")
    merged = merged.next