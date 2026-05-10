class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def is_bst(root, low=float('-inf'), high=float('inf')):

    if root is None:
        return True

    if not (low < root.data < high):
        return False

    return (
        is_bst(root.left, low, root.data) and
        is_bst(root.right, root.data, high)
    )


# Example
root = Node(10)
root.left = Node(5)
root.right = Node(15)

print(is_bst(root))