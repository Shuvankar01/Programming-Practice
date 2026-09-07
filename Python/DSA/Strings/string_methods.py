# Common string methods

text = "  Python Programming  "

print("Original:", text)
print("Strip:", text.strip())
print("Upper:", text.upper())
print("Lower:", text.lower())
print("Replace:", text.replace("Python", "Java"))

clean_text = text.strip()

print("Starts with Python:", clean_text.startswith("Python"))
print("Ends with Programming:", clean_text.endswith("Programming"))
print("Contains Python:", "Python" in clean_text)