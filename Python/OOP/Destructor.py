class MyClass:
    def __init__(self, name):
        self.name = name
        print(f"Object {self.name} created.")

    # Parameterized destructor with a default value
    def __del__(self, message="is being destroyed."):
        print(f"Object {self.name} {message}")

# 1. Default call (automatic via GC or 'del')
obj1 = MyClass("Alpha")
del obj1  # Output: Object Alpha is being destroyed.

obj2 = MyClass("Beta")
obj2.__del__("is manually removed.") 
