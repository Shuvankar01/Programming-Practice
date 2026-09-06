# Nested dictionaries

students = {
    "student1": {
        "name": "Shuvankar",
        "age": 20,
        "cgpa": 8.82
    },
    "student2": {
        "name": "Rahul",
        "age": 21,
        "cgpa": 8.50
    }
}

print(students["student1"]["name"])
print(students["student2"]["cgpa"])

for student_id, details in students.items():
    print(student_id)

    for key, value in details.items():
        print(f"{key}: {value}")