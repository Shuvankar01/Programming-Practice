def is_palindrome(text):
    text = text.lower()

    return text == text[::-1]


if __name__ == "__main__":
    text = "madam"

    if is_palindrome(text):
        print("Palindrome")
    else:
        print("Not a palindrome")