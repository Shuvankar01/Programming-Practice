def add(a, b): return a + b
def sub(a, b): return a - b
def mul(a, b): return a * b
def div(a, b): return a / b

while True:
    choice = input("1.Add 2.Sub 3.Mul 4.Div 5.Exit: ")

    if choice == "5":
        break

    a = int(input("Enter a: "))
    b = int(input("Enter b: "))

    if choice == "1":
        print(add(a, b))
    elif choice == "2":
        print(sub(a, b))
    elif choice == "3":
        print(mul(a, b))
    elif choice == "4":
        print(div(a, b))