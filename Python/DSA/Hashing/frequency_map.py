def build_frequency_map(arr):
    frequency = {}

    for value in arr:
        frequency[value] = frequency.get(value, 0) + 1

    return frequency


if __name__ == "__main__":
    numbers = [1, 2, 2, 3, 3, 3]

    print(build_frequency_map(numbers))