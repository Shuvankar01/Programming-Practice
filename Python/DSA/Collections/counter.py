from collections import Counter

text = "programming"

frequency = Counter(text)

print("Character frequency:", frequency)
print("Most common:", frequency.most_common(3))