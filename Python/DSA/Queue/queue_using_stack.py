class Queue:
    def __init__(self):
        self.s1 = []
        self.s2 = []

    def enqueue(self, x):
        self.s1.append(x)

    def dequeue(self):
        if not self.s2:
            while self.s1:
                self.s2.append(self.s1.pop())

        if not self.s2:
            return "Queue Empty"

        return self.s2.pop()


# Example
q = Queue()
q.enqueue(1)
q.enqueue(2)

print(q.dequeue())