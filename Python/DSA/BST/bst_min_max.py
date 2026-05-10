class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def find_min(root):

    while root.left:
        root = root.left

    return root.data


def find_max(root):

    while root.right:
        root = root.right

    return root.data


# Example
root = Node(10)
root.left = Node(5)
root.right = Node(20)

print("Min:", find_min(root))
print("Max:", find_max(root))