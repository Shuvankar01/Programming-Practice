arr = list(map(int, input("Enter elements: ").split()))
n = len(arr)

result = [-1] * n
stack = []

for i in range(n):
    while stack and arr[stack[-1]] < arr[i]:
        index = stack.pop()
        result[index] = arr[i]
    stack.append(i)

print("Next Greater Elements:", result)