X = int(input("Введите натуральное число    "))
c = 0
while X>2*10**9:
    print ("Error")
    X = int(input("Введите натуральное число    "))
else:
    for i in range(X,0,-1):
        if X%i == 0:
            c += 1
    print(c)