def two_sum(numbers, target):
    seen = {}

    for index, value in enumerate(numbers):
        complement = target - value

        if complement in seen:
            return [seen[complement], index]

        seen[value] = index

    return []


if __name__ == "__main__":
    numbers = [2, 7, 11, 15]
    target = 9

    print(two_sum(numbers, target))