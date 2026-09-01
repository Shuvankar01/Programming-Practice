# List comprehension examples

numbers = range(1, 11)

squares = [number ** 2 for number in numbers]
even_numbers = [number for number in numbers if number % 2 == 0]

print("Squares:", squares)
print("Even numbers:", even_numbers)