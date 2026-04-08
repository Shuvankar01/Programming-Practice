#without an arguments (Default constructor)
class person:
    def __init__(self):
        print("I am constructor")
a=person()



#with an arguments (parameterised constructor)
class person1:
    def __init__(self,name,occupation):
        self.name=name
        self.occupation=occupation
    def info(self):
        print(f"{self.name} is {self.occupation}")
x=person1("shuvankar","HR")
x.info()
y=person1("Ram","Cofounder")
y.info()