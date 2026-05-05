class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def nth_from_end(head, n):
    first = second = head

    for _ in range(n):
        if not first:
            return None
        first = first.next

    while first:
        first = first.next
        second = second.next

    return second


# Example
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)

node = nth_from_end(head, 2)
print("Nth from end:", node.data)