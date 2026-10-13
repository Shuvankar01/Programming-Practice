def frequency_count(arr):
    frequency = {}

    for value in arr:
        frequency[value] = frequency.get(value, 0) + 1

    return frequency


if __name__ == "__main__":
    numbers = [1, 2, 2, 3, 3, 3, 4]

    print(frequency_count(numbers))