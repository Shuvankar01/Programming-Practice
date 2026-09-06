# Dictionary comprehension

numbers = range(1, 6)

squares = {
    number: number ** 2
    for number in numbers
}

even_squares = {
    number: number ** 2
    for number in numbers
    if number % 2 == 0
}

print("Squares:", squares)
print("Even squares:", even_squares)