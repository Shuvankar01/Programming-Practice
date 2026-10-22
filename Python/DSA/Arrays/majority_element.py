def majority_element(arr):
    candidate = None
    count = 0

    for value in arr:
        if count == 0:
            candidate = value

        count += 1 if value == candidate else -1

    if arr.count(candidate) > len(arr) // 2:
        return candidate

    return None


if __name__ == "__main__":
    numbers = [2, 2, 1, 1, 1, 2, 2]

    print("Majority element:", majority_element(numbers))