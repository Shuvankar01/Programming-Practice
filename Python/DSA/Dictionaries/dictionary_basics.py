# Basic dictionary operations

student = {
    "name": "Shuvankar",
    "age": 20,
    "course": "Computer Science",
    "cgpa": 8.82
}

print("Student:", student)

print("Name:", student["name"])
print("CGPA:", student["cgpa"])

student["age"] = 21
student["city"] = "Bhubaneswar"

print("Updated student:", student)