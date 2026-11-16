def generate_subsets(nums):
    result = []

    def backtrack(index, current):
        if index == len(nums):
            result.append(current.copy())
            return

        # Exclude current element
        backtrack(index + 1, current)

        # Include current element
        current.append(nums[index])
        backtrack(index + 1, current)

        current.pop()

    backtrack(0, [])

    return result


if __name__ == "__main__":
    numbers = [1, 2, 3]

    for subset in generate_subsets(numbers):
        print(subset)