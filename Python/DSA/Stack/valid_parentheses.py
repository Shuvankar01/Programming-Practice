s = input()

stack = []

for ch in s:
    if ch in "({[":
        stack.append(ch)
    else:
        if not stack:
            print("Invalid")
            break

        top = stack.pop()

        if (ch == ")" and top != "(") or \
           (ch == "}" and top != "{") or \
           (ch == "]" and top != "["):
            print("Invalid")
            break
else:
    print("Valid" if not stack else "Invalid")