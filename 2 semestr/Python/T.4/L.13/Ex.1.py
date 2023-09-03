import random

def matrix(a):
    for i in a:
        print(*i)

def sum():
    if x1 == x2 and y1 == y2:
        m3 = [[ 0 for i in range(x1)] for i in range (y1)]
        for i in range (y1):
            for j in range(x1):
                m3[i][j] = m1[i][j]+m2[i][j]
        matrix(m3)
    else:
        print("Ошибка, матрицы должны быть одной размерностью")

x1 = int(input("Введите количество столбцов 1 матрицы  "))
y1 = int(input("Введите количество строк 1 матрицы  "))
m1 = [[0 for i in range(x1)] for i in range (y1)]
for i in range(y1):
    for j in range (x1):
       m1[i][j] = random.randint(0,100)

x2 = int(input("Введите количество столбцов 2 матрицы  "))
y2 = int(input("Введите количество строк 2 матрицы  "))
m2 = [[0 for i in range(x2)] for i in range (y2)]
for i in range(y2):
    for j in range (x2):
       m2[i][j] = random.randint(0,100)
matrix(m1)
matrix(m2)

a = input("Вы хотите сложить эти матрицы?   ")
if a == "да" or a == "Да":
    sum()
    print("Конец работы программы")
else:
    print("Конец работы программы")






