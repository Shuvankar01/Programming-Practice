class insect:
    def food(self):
        print("eat by frog")
class Frog(insect):
    def food(self):
        return super().food()
class snake(Frog):
    def food(self):
        return super().food()
obj=snake()
obj.food()