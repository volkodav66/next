a = []
for i in range (0,6):
    print("Введите", i+1, "этап развития человека")
    a.append(input())
print (*a, sep='=>')
