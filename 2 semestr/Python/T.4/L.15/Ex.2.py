class Transport(object):
    name = " "
    max_speed = 0
    mileage = 0
    
    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

class Autobus(Transport):

    def seating_capacity(self, capacity):
        return print(f"Вместимость одного автобуса {self.name}: {capacity} пассажиров")

autobus = Autobus("Renaul Logan", 180, 12)
autobus.seating_capacity(50) 