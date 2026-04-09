##multiple inheritance
class Animal:
    def sound(self):
        print("shoooooo")
class Tiger(Animal):
    pass
a=Tiger()
a.sound()
class Lion(Animal):
    pass
b=Lion()
b.sound()
class Elephant(Animal):
    pass
c=Elephant()
c.sound()