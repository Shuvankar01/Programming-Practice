class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def length(head):
    count = 0
    temp = head

    while temp:
        count += 1
        temp = temp.next

    return count


# Example
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)

print("Length:", length(head))