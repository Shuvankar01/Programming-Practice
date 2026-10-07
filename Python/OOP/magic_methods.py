# Magic methods


class Student:

    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def __str__(self):
        return f"{self.name} - {self.marks} marks"

    def __eq__(self, other):
        return self.marks == other.marks

    def __lt__(self, other):
        return self.marks < other.marks


student1 = Student("Shuvankar", 90)
student2 = Student("Rahul", 85)

print(student1)
print(student2)

print("Equal:", student1 == student2)
print("Student 1 scored less:", student1 < student2)