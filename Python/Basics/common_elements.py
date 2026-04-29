list1 = list(map(int, input("Enter first list: ").split()))
list2 = list(map(int, input("Enter second list: ").split()))

common = list(set(list1) & set(list2))

print("Common Elements =", common)