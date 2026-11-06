def reverse_array(arr, left, right):
    if left >= right:
        return

    arr[left], arr[right] = arr[right], arr[left]

    reverse_array(arr, left + 1, right - 1)


if __name__ == "__main__":
    numbers = [1, 2, 3, 4, 5]

    reverse_array(numbers, 0, len(numbers) - 1)

    print(numbers)