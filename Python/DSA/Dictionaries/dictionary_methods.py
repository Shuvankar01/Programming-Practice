# Common dictionary methods

student = {
    "name": "Shuvankar",
    "age": 20,
    "cgpa": 8.82
}

print("Keys:", student.keys())
print("Values:", student.values())
print("Items:", student.items())

print("Name:", student.get("name"))
print("Country:", student.get("country", "Not available"))

student.update({"age": 21, "city": "Bhubaneswar"})

print("Updated:", student)

removed = student.pop("city")

print("Removed:", removed)
print("Final dictionary:", student)