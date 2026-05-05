# Node class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


# Linked List class
class LinkedList:
    def __init__(self):
        self.head = None

    # Insert at end
    def insert(self, data):
        new_node = Node(data)

        if not self.head:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next

        temp.next = new_node

    # Display list
    def display(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

    # Delete a node
    def delete(self, key):
        temp = self.head

        if temp and temp.data == key:
            self.head = temp.next
            temp = None
            return

        prev = None
        while temp and temp.data != key:
            prev = temp
            temp = temp.next

        if not temp:
            print("Value not found")
            return

        prev.next = temp.next
        temp = None


# Usage
ll = LinkedList()

ll.insert(10)
ll.insert(20)
ll.insert(30)

print("Linked List:")
ll.display()

ll.delete(20)

print("After Deletion:")
ll.display()