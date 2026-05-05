class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def remove_duplicates(head):
    temp = head

    while temp and temp.next:
        if temp.data == temp.next.data:
            temp.next = temp.next.next
        else:
            temp = temp.next

    return head