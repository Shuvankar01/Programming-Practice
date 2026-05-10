class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def insert(root, key):

    if root is None:
        return Node(key)

    if key < root.data:
        root.left = insert(root.left, key)

    else:
        root.right = insert(root.right, key)

    return root


# Example
root = None

values = [10, 5, 15, 3, 7]

for v in values:
    root = insert(root, v)

print("BST Created")