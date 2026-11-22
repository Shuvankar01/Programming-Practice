def can_reach_end(nums):
    if not nums:
        return False

    farthest = 0

    for index, jump in enumerate(nums):
        if index > farthest:
            return False

        farthest = max(farthest, index + jump)

        if farthest >= len(nums) - 1:
            return True

    return len(nums) == 1


if __name__ == "__main__":
    numbers = [2, 3, 1, 1, 4]

    if can_reach_end(numbers):
        print("Last index is reachable.")
    else:
        print("Last index is not reachable.")