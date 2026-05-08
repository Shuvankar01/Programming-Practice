class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def count_nodes(root):
    if not root:
        return 0

    return 1 + count_nodes(root.left) + count_nodes(root.right)

# Example
root = Node(1)
root.left = Node(2)
root.right = Node(3)

print("nodes:", count_nodes(root))