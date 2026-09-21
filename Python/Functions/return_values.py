# Returning values from functions


def calculate(a, b):
    total = a + b
    difference = a - b
    product = a * b

    return total, difference, product


sum_result, difference_result, product_result = calculate(10, 5)

print("Sum:", sum_result)
print("Difference:", difference_result)
print("Product:", product_result)