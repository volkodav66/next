def factorial(a):
    b = 1
    for i in range (2, a+1):
        b = b*i
    list = []
    for i in range (b, 0, -1):
        c = i
        for j in range (i-1, 0, -1):
            c = c*j
        list.append(c)
    return(list)        

print(factorial(int(input("Введите число    "))))

