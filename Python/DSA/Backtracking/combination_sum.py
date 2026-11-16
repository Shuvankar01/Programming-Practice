
def combination_sum(candidates, target):
    result = []

    candidates.sort()

    def backtrack(start, current, remaining):
        # Target achieved
        if remaining == 0:
            result.append(current.copy())
            return

        for i in range(start, len(candidates)):
            value = candidates[i]

            # Since candidates are sorted
            if value > remaining:
                break

            # Choose
            current.append(value)

            # Explore: i allows reuse of the same candidate
            backtrack(i, current, remaining - value)

            # Backtrack
            current.pop()

    backtrack(0, [], target)
    return result


if __name__ == "__main__":
    candidates = [2, 3, 6, 7]
    target = 7

    combinations = combination_sum(candidates, target)

    print("Valid combinations:")
    for combination in combinations:
        print(combination)
