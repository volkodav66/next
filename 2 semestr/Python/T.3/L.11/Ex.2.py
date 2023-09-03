import collections

def create():
    ID = collections.deque(pets, maxlen=1)[0]
    a = input("Имя питомца  ")
    pets[ID] = pets[a] = {"Вид питомца" : input("Вид питомца   "), "Возраст питомца" : int(input("Возраст питомца  ")), "Имя владельца" : input("Имя владельца ")}
    return
def read(ID,a):
    print("Это", list(pets[ID][a].values())[0], "по кличке", list(pets[ID].keys())[0],". Возраст питомца:", list(pets[ID][a].values())[1], ". Имя владельца", list(pets[ID][a].values())[2])
    return

pets={}
a = input("Имя питомца  ")
d = int(1)
pets[d] = pets[a] = {"Вид питомца" : input("Вид питомца   "), "Возраст питомца" : int(input("Возраст питомца  ")), "Имя владельца" : input("Имя владельца ")}
command = input("Введите команду")
while (command!='stop'):
    if command == 'create':
        create()
        command = input("Введите команду")
    if command == 'read':
        read(int(input("Введите ID вашего питомца")), a)
        command = input("Введите команду")
    if command == 'update':
        update
        command = input("Введите команду")
    if command == 'delete':
        delete
        command = input("Введите команду")