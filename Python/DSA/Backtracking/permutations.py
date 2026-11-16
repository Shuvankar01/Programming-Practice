
def generate_permutations(nums):
    result = []
    used = [False] * len(nums)

    def backtrack(current):
        # A complete permutation is generated
        if len(current) == len(nums):
            result.append(current.copy())
            return

        for i in range(len(nums)):
            if used[i]:
                continue

            # Choose
            used[i] = True
            current.append(nums[i])

            # Explore
            backtrack(current)

            # Undo the choice
            current.pop()
            used[i] = False

    backtrack([])
    return result


if __name__ == "__main__":
    numbers = [1, 2, 3]

    permutations = generate_permutations(numbers)

    print("All permutations:")
    for permutation in permutations:
        print(permutation)

    print("Total permutations:", len(permutations))
