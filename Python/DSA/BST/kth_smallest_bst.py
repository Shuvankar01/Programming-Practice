class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def inorder(root, arr):

    if root:
        inorder(root.left, arr)
        arr.append(root.data)
        inorder(root.right, arr)


def kth_smallest(root, k):
    arr = []

    inorder(root, arr)

    return arr[k - 1]


# Example
root = Node(10)
root.left = Node(5)
root.right = Node(15)
root.left.left = Node(2)

print(kth_smallest(root, 2))