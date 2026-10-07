# Abstraction using an abstract base class

from abc import ABC, abstractmethod


class Vehicle(ABC):

    @abstractmethod
    def start(self):
        pass


class Car(Vehicle):

    def start(self):
        print("Car starts with a key or button.")


class ElectricCar(Vehicle):

    def start(self):
        print("Electric car starts silently.")


vehicles = [Car(), ElectricCar()]

for vehicle in vehicles:
    vehicle.start()