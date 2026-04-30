arr = list(map(int, input("Enter elements: ").split()))

max_val = arr[0]
for x in arr:
    if x > max_val:
        max_val = x

print("Largest element:", max_val)