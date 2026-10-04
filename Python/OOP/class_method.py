# Class method


class Student:

    school = "Einstein Academy"

    def __init__(self, name):
        self.name = name

    @classmethod
    def change_school(cls, school_name):
        cls.school = school_name


print("Before:", Student.school)

Student.change_school("New Academy")

print("After:", Student.school)