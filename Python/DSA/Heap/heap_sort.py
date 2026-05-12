import heapq

arr = list(map(int, input().split()))

heapq.heapify(arr)

sorted_arr = []

while arr:
    sorted_arr.append(heapq.heappop(arr))

print("Sorted:", sorted_arr)