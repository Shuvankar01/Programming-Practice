class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def search(head, key):
    pos = 0
    temp = head

    while temp:
        if temp.data == key:
            return pos
        temp = temp.next
        pos += 1

    return -1


# Example
head = Node(5)
head.next = Node(10)
head.next.next = Node(15)

print("Position:", search(head, 10))