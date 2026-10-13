def rotate_right(arr, k):
    if not arr:
        return arr

    k %= len(arr)

    return arr[-k:] + arr[:-k]


if __name__ == "__main__":
    numbers = [1, 2, 3, 4, 5]

    print("Original:", numbers)
    print("Rotated:", rotate_right(numbers, 2))