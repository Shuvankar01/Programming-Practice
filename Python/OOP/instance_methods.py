# Instance methods


class Student:

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def introduce(self):
        print(f"My name is {self.name} and I am {self.age} years old.")

    def is_adult(self):
        return self.age >= 18


student = Student("Shuvankar", 20)

student.introduce()

print("Adult:", student.is_adult())