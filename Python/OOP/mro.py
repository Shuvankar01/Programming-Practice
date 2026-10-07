# Method Resolution Order


class A:

    def show(self):
        print("A")


class B(A):

    def show(self):
        print("B")


class C(A):

    def show(self):
        print("C")


class D(B, C):
    pass


object_d = D()

object_d.show()

print("MRO:")
for cls in D.mro():
    print(cls.__name__)