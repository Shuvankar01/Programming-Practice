from collections import deque

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def level_order(root):
    if not root:
        return

    q = deque([root])

    while q:
        node = q.popleft()
        print(node.data, end=" ")

        if node.left:
            q.append(node.left)
        if node.right:
            q.append(node.right)


# Example
root = Node(1)
root.left = Node(2)
root.right = Node(3)

level_order(root)