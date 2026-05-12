import heapq

arr = [10, 5, 20, 1]

max_heap = []

for x in arr:
    heapq.heappush(max_heap, -x)

print("Maximum:", -heapq.heappop(max_heap))