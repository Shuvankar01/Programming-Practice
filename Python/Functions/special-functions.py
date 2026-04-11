square = lambda x: x * x

print(square(5))
######
nums = [1, 2, 3, 4]

result = list(map(lambda x: x * 2, nums))
print(result)

######
nums = [1, 2, 3, 4, 5, 6]

even = list(filter(lambda x: x % 2 == 0, nums))
print(even)

############## Nested function
def outer():
    def inner():
        return "Hello from inner"
    return inner()

print(outer())