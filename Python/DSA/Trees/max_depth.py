class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def max_depth(root):
    if not root:
        return 0

    return 1 + max(
        max_depth(root.left),
        max_depth(root.right)
    )


# Example
root = Node(1)
root.left = Node(2)
root.right = Node(3)

print("Max Depth:", max_depth(root))