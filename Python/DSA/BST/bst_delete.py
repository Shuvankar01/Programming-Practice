class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def min_value(node):

    current = node

    while current.left:
        current = current.left

    return current


def delete(root, key):

    if root is None:
        return root

    if key < root.data:
        root.left = delete(root.left, key)

    elif key > root.data:
        root.right = delete(root.right, key)

    else:

        if root.left is None:
            return root.right

        elif root.right is None:
            return root.left

        temp = min_value(root.right)

        root.data = temp.data

        root.right = delete(root.right, temp.data)

    return root