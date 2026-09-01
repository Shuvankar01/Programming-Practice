# Sorting lists

numbers = [50, 10, 40, 20, 30]

print("Original:", numbers)

ascending = sorted(numbers)
descending = sorted(numbers, reverse=True)

print("Ascending:", ascending)
print("Descending:", descending)

# Sorting using key
words = ["Python", "AI", "Programming", "Code"]

sorted_words = sorted(words, key=len)

print("Sorted by length:", sorted_words)