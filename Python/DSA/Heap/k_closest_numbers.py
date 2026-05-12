import heapq

arr = list(map(int, input().split()))
target = int(input("Target: "))
k = int(input("K: "))

heap = []

for num in arr:
    diff = abs(num - target)
    heapq.heappush(heap, (diff, num))

result = []

for _ in range(k):
    result.append(heapq.heappop(heap)[1])

print(result)