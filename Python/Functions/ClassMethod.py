class Demo:
    count = 0

    def __init__(self):
        Demo.count += 1

    @classmethod
    def total_objects(cls):
        return cls.count

    @staticmethod
    def greet():
        return "Hello!"

d1 = Demo()
d2 = Demo()

print(Demo.total_objects())
print(Demo.greet())