# Method overloading style using *args


class Calculator:

    def add(self, *numbers):
        return sum(numbers)


calculator = Calculator()

print(calculator.add(10, 20))
print(calculator.add(10, 20, 30))
print(calculator.add(10, 20, 30, 40))