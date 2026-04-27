n = int(input("Enter number: "))
temp = n
sum_num = 0

while temp > 0:
    digit = temp % 10
    sum_num += digit ** 3
    temp = temp // 10

if sum_num == n:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")