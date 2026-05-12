import heapq

heap = []

# Insert elements
heapq.heappush(heap, 10)
heapq.heappush(heap, 5)
heapq.heappush(heap, 20)

print("Heap:", heap)

# Remove minimum element
print("Popped:", heapq.heappop(heap))

print("After Pop:", heap)