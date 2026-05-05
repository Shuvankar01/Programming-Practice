# Floyd’s Cycle Detection Algorithm

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def has_cycle(head):
    slow = fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

        if slow == fast:
            return True

    return False


# Example
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)

# Create cycle
head.next.next.next = head

print("Cycle Detected:", has_cycle(head))