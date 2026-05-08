class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


diameter = 0

def height(root):
    global diameter

    if not root:
        return 0

    left = height(root.left)
    right = height(root.right)

    diameter = max(diameter, left + right)

    return 1 + max(left, right)


# Example
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

height(root)

print("Diameter:", diameter)