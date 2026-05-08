class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def height(root):
    if not root:
        return 0

    return 1 + max(height(root.left), height(root.right))


# Example
root = Node(1)
root.left = Node(2)
root.right = Node(3)

print("Height:", height(root))