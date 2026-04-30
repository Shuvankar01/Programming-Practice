from collections import deque

q = deque()

# Enqueue
q.append(1)
q.append(2)
q.append(3)

print("Queue:", list(q))

# Dequeue
print("Removed:", q.popleft())

print("After dequeue:", list(q))