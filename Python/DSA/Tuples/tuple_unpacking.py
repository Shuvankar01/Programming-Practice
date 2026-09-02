# Tuple unpacking

student = ("Shuvankar", 20, 8.82)

name, age, cgpa = student

print("Name:", name)
print("Age:", age)
print("CGPA:", cgpa)

# Extended unpacking

numbers = (1, 2, 3, 4, 5)

first, *middle, last = numbers

print("First:", first)
print("Middle:", middle)
print("Last:", last)