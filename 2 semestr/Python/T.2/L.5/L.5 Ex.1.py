a = int(input())
if a == 0:
    print ("нулевое число")
else:
    if a%2 == 0:
        if a>0:
            print ("положительное четное число")
        else:
            print ("отрицательное четное число")
    else:
        print ("число не является четным")
        if a>0:
            print ("положительное нечетное число")
        else:
            print ("отрицательное нечетное число")