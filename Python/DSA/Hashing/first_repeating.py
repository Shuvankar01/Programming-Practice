def first_repeating(arr):
    frequency = {}

    for value in arr:
        frequency[value] = frequency.get(value, 0) + 1

    for value in arr:
        if frequency[value] > 1:
            return value

    return None


if __name__ == "__main__":
    numbers = [10, 5, 3, 4, 3, 5, 6]

    print("First repeating element:", first_repeating(numbers))