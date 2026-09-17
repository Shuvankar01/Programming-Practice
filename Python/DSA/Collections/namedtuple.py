from collections import namedtuple

Student = namedtuple("Student", ["name", "age", "cgpa"])

student = Student("Shuvankar", 20, 8.82)

print("Name:", student.name)
print("Age:", student.age)
print("CGPA:", student.cgpa)