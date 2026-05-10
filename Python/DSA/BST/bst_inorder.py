class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def inorder(root):

    if root:
        inorder(root.left)
        print(root.data, end=" ")
        inorder(root.right)


# Example
root = Node(10)
root.left = Node(5)
root.right = Node(15)

inorder(root)