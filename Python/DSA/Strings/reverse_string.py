def reverse_string(text):
    return text[::-1]


if __name__ == "__main__":
    text = "Python"

    print("Original:", text)
    print("Reversed:", reverse_string(text))