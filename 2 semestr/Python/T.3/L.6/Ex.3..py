A, B = map(int, input("Введите два целых числа  ").split())
if A>B:
    print ("Error")
else:
    if A%2 == 0:
        for i in range(A,B+1,+2):
            print (i, end = " ")
    else:
        A = A+1
        for i in range (A,B+1,+2):
            if i%2 == 0:
               print (i, end = " ")