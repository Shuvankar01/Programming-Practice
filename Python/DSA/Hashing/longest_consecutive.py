def longest_consecutive(nums):
    numbers = set(nums)
    longest = 0

    for value in numbers:
        if value - 1 not in numbers:
            current = value
            length = 1

            while current + 1 in numbers:
                current += 1
                length += 1

            longest = max(longest, length)

    return longest


if __name__ == "__main__":
    numbers = [100, 4, 200, 1, 3, 2]

    print("Longest consecutive sequence:",
          longest_consecutive(numbers))