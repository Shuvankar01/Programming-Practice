class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def reverse_k(head, k):
    curr = head
    prev = None
    count = 0

    # Reverse first k nodes
    while curr and count < k:
        next_node = curr.next
        curr.next = prev
        prev = curr
        curr = next_node
        count += 1

    if curr:
        head.next = reverse_k(curr, k)

    return prev