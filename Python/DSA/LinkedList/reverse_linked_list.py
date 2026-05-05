class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def reverse(head):
    prev = None
    curr = head

    while curr:
        next_node = curr.next
        curr.next = prev
        prev = curr
        curr = next_node

    return prev


# Create list manually
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)

# Reverse
head = reverse(head)

# Print
temp = head
while temp:
    print(temp.data, end=" -> ")
    temp = temp.next