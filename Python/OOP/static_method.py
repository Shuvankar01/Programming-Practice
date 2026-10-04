# Static method


class Calculator:

    @staticmethod
    def add(a, b):
        return a + b

    @staticmethod
    def multiply(a, b):
        return a * b


print("Sum:", Calculator.add(10, 20))
print("Product:", Calculator.multiply(10, 20))