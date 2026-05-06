class MinStack:
    def __init__(self):
        self.stack = []
        self.min_stack = []

    def push(self, x):
        self.stack.append(x)
        if not self.min_stack or x <= self.min_stack[-1]:
            self.min_stack.append(x)

    def pop(self):
        if self.stack[-1] == self.min_stack[-1]:
            self.min_stack.pop()
        return self.stack.pop()

    def get_min(self):
        return self.min_stack[-1]


# Example
ms = MinStack()
ms.push(5)
ms.push(2)
ms.push(8)

print("Min:", ms.get_min())