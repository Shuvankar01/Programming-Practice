class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def invert(root):
    if root:
        # Swap the left and right children
        root.left, root.right = root.right, root.left
        
        # Recursively invert the subtrees
        invert(root.left)
        invert(root.right)
    return root

def print_tree(node, level=0, label="Root: "):
    """Helper to visualize the tree structure"""
    if node:
        print(" " * (level * 4) + label + str(node.data))
        print_tree(node.left, level + 1, "L--- ")
        print_tree(node.right, level + 1, "R--- ")

if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("Original Tree:")
    print_tree(root)

    invert(root)

    print("\nInverted Tree:")
    print_tree(root)