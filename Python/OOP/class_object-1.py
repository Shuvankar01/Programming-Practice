class Employee:
    company_name="apple"         #this is the class variable 
    noemployees=0                #this is the class variable 
    def __init__(self,name):
        self.name=name            #this is the instance variable
        self.raise_amount=0.02    #this is the instance variable
        Employee.noemployees+=1
    def showdetails(self):
        print(f"The name of the employee is {self.name} and the raise amount in {self.noemployees} size {self.company_name} is {self.raise_amount}")
emp=Employee("Ram")
emp.raise_amount=0.03   #This is the modification of instance object and it will affected perticular position
emp.company_name="Google" #tis is the class object that  will affect on hole class both emp and emp1
emp.showdetails()
emp1=Employee("Abhi")
# emp1.company_name="app" that changes only occurs in emp1 not in emp  
emp1.showdetails()
