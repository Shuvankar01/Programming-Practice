l1=["apple","banana","cherry","mango","orange"]
print(l1)
print(l1[0] , l1[1] , l1[-1] ,l1[-2])

# list slicing .....
print(l1[0:3])
print(l1[1:3:4])
print(l1[::-1])
print(l1[2:3])

# methods ......
# Append ... (Duplicates allowing )
l1.append("shuvankar")
print(l1)
l1.append("shuvankar")
print(l1)

# Remove .....
l1.remove("shuvankar")
print(l1)


# Insertation in  any position ....
l1.insert(2,"water milon")
print(l1)


l2=l1.copy()
print(l2)


#lits in list
drink=["coffee","tes","soda"]
food=["pizza","rise","biryani"]
menu=[drink,food]
print(menu)
print(menu[0])
print(menu[1])
print(menu[0][0])
print(menu[0][1])
print(menu[1][0])
print(menu[1][1])



list=["apple","banana","mango","cherry","pineapple"]
list.sort()
print(list)
for i in list:
    print()
list.sort(reverse=True)
print(list)