from collections import defaultdict

groups = defaultdict(list)

students = [
    ("CSE", "Alice"),
    ("ECE", "Bob"),
    ("CSE", "Charlie"),
    ("ECE", "David")
]

for department, student in students:
    groups[department].append(student)

for department, students in groups.items():
    print(department, ":", students)