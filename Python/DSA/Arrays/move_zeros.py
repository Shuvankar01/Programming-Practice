arr = list(map(int, input().split()))

result = [x for x in arr if x != 0]
zeros = [0] * arr.count(0)

print(result + zeros)