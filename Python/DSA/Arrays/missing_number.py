n = int(input())
arr = list(map(int, input().split()))

total = n * (n + 1) // 2
print("Missing number:", total - sum(arr))