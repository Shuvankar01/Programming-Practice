def linear_search(data_list, target):
    for index in range(len(data_list)):
        if data_list[index] == target:
            return index  
    return -1  

user_input = input("Enter numbers separated by spaces: ")
my_list = [int(x) for x in user_input.split()]
target_val = int(input("Enter the number to search for: "))


result = linear_search(my_list, target_val)

if result != -1:
    print(f"Number {target_val} found at index: {result}")
else:
    print(f"Number {target_val} not found in the list.")
