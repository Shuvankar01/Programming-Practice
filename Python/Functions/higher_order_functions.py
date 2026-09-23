# Higher-order functions

def apply_operation(a, b, operation):
    return operation(a, b)


def add(a, b):
    return a + b


def multiply(a, b):
    return a * b


print("Addition:", apply_operation(10, 5, add))
print("Multiplication:", apply_operation(10, 5, multiply))