arr = sorted(list(map(int, input().split())))
key = int(input("Enter key element "))

low, high = 0, len(arr) - 1

while low <= high:
    mid = (low + high) // 2

    if arr[mid] == key:
        print("Found at index", mid)
        break
    elif arr[mid] < key:
        low = mid + 1
    else:
        high = mid - 1
else:
    print("Not Found")