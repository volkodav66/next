N = int(input("Введите количество чисел "))
a = []
c = 0
for i in range(N):
    a.append(int(input()))
    if a[i] == 0:
        c = c+1
print (c)        