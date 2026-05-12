import heapq

lists = [
    [1, 4, 5],
    [1, 3, 4],
    [2, 6]
]

heap = []

for lst in lists:
    for num in lst:
        heapq.heappush(heap, num)

result = []

while heap:
    result.append(heapq.heappop(heap))

print(result)