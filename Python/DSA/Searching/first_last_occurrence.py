arr = list(map(int, input().split()))
key = int(input())

first = last = -1

for i in range(len(arr)):
    if arr[i] == key:
        if first == -1:
            first = i
        last = i

print("First:", first, "Last:", last)