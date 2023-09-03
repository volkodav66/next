N = int(input("Введите число строк  "))
while N<1 or N>10000:
    print ("Error")
    N = int(input("Введите число строк  "))
else:
    a = []
    for i in range(N):
        a.append(input())
    a.reverse()    
    print (*a)     