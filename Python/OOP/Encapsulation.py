# Encapsulation using private attributes


class BankAccount:

    def __init__(self, owner, balance):
        self.owner = owner
        self.__balance = balance

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            return True

        return False

    def get_balance(self):
        return self.__balance


account = BankAccount("Shuvankar", 10000)

account.deposit(2000)
account.withdraw(3000)

print("Owner:", account.owner)
print("Balance:", account.get_balance())