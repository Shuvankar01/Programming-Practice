# Common list methods

numbers = [10, 20, 30]

numbers.append(40)
print("After append:", numbers)

numbers.insert(1, 15)
print("After insert:", numbers)

numbers.extend([50, 60])
print("After extend:", numbers)

numbers.remove(30)
print("After remove:", numbers)

removed = numbers.pop()
print("Removed:", removed)
print("After pop:", numbers)

numbers.sort()
print("Sorted:", numbers)

numbers.reverse()
print("Reversed:", numbers)