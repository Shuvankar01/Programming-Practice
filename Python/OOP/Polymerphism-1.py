class Bird:
    def sound(self):
        print("Bird makes sound")

class Sparrow(Bird):
    def sound(self):
        print("Sparrow chirps")

class Crow(Bird):
    def sound(self):
        print("Crow caws")

for bird in (Sparrow(), Crow()):
    bird.sound()