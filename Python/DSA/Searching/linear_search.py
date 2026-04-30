arr = list(map(int, input().split()))
key = int(input("Enter element to search: "))

for i in range(len(arr)):
    if arr[i] == key:
        print("Found at index", i)
        break
else:
    print("Not Found")