import heapq

arr = list(map(int, input().split()))
k = int(input("Enter k: "))

print("Kth Largest:", heapq.nlargest(k, arr)[-1])