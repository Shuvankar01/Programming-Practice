def function_name():
    print("hello world!")
function_name()

def f1(a,b):
    print("sum is:",a+b)
f1(3,5)

def f2(x):
    return x*x
z=f2(4)
print("square is : ",z)

#local variable ------
def f3():
    x=10
    print("inside",x)
f3()

#global variable-----
y=20
def f4():
    # or write Global y=20
    print("inside ",y)
f4()
print(y)


