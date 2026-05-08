class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def check(root):
    if not root:
        return 0

    left = check(root.left)
    right = check(root.right)

    if left == -1 or right == -1:
        return -1

    if abs(left - right) > 1:
        return -1

    return 1 + max(left, right)


def is_balanced(root):
    return check(root) != -1


# Example
root = Node(1)
root.left = Node(2)
root.right = Node(3)

print("Balanced:", is_balanced(root))