# Polymorphism through a common interface


class Dog:

    def speak(self):
        print("Dog says: Woof")


class Cat:

    def speak(self):
        print("Cat says: Meow")


class Cow:

    def speak(self):
        print("Cow says: Moo")


animals = [Dog(), Cat(), Cow()]

for animal in animals:
    animal.speak()