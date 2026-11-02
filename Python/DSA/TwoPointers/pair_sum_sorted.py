def pair_sum(numbers, target):
    left = 0
    right = len(numbers) - 1

    while left < right:
        current_sum = numbers[left] + numbers[right]

        if current_sum == target:
            return [left, right]

        if current_sum < target:
            left += 1
        else:
            right -= 1

    return []


if __name__ == "__main__":
    numbers = [1, 2, 4, 6, 8, 9]
    target = 10

    print(pair_sum(numbers, target))