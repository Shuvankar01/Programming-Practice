n = int(input("Enter number: "))
sum_digits = 0

while n > 0:
    sum_digits += n % 10
    n = n // 10

print("Sum of digits =", sum_digits)