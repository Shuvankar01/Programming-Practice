class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def is_same(a, b):
    if not a and not b:
        return True

    if not a or not b:
        return False

    return (
        a.data == b.data and
        is_same(a.left, b.left) and
        is_same(a.right, b.right)
    )


# Example
t1 = Node(1)
t1.left = Node(2)

t2 = Node(1)
t2.left = Node(2)

print("Same Tree:", is_same(t1, t2))