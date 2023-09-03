class Transport(object):
    name = " "
    max_speed = 0
    mileage = 0
    
    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

    def printer(self):
        print(f"Название автомобиля: {Autobus.name}. Скорость: {Autobus.max_speed}. Пробег: {Autobus.mileage}.")

Autobus = Transport("Renaul Logan", 180, 12)
Autobus.printer()
