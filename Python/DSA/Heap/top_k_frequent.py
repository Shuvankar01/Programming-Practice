from collections import Counter
import heapq

arr = list(map(int, input().split()))
k = int(input("k:"))

freq = Counter(arr)

result = heapq.nlargest(
    k,
    freq.keys(),
    key=freq.get
)

print(result)