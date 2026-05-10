class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def search(root, key):

    if root is None:
        return False

    if root.data == key:
        return True

    if key < root.data:
        return search(root.left, key)

    return search(root.right, key)


# Example
root = Node(10)
root.left = Node(5)
root.right = Node(15)

print(search(root, 15))