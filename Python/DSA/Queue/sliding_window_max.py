from collections import deque

arr = list(map(int, input().split()))
k = int(input("Enter window size: "))

dq = deque()
result = []

for i in range(len(arr)):

    # Remove elements outside window
    if dq and dq[0] == i - k:
        dq.popleft()

    # Remove smaller elements
    while dq and arr[dq[-1]] < arr[i]:
        dq.pop()

    dq.append(i)

    if i >= k - 1:
        result.append(arr[dq[0]])

print("Sliding Window Max:", result)