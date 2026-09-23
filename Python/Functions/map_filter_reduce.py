# map(), filter(), and reduce()

from functools import reduce


numbers = [1, 2, 3, 4, 5]

squares = list(map(lambda number: number ** 2, numbers))

even_numbers = list(
    filter(lambda number: number % 2 == 0, numbers)
)

product = reduce(
    lambda first, second: first * second,
    numbers
)

print("Numbers:", numbers)
print("Squares:", squares)
print("Even numbers:", even_numbers)
print("Product:", product)