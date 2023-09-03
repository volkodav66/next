print ("Сколько у Майкла долларов?")
A = float (input())
print ("Сколько у Ивана долларов?")
B = float (input())
print ("Чему равна минимальная сумма инвестиций?")
X = float (input())
c = 0
if A<X and B<X:
    if A+B>=X:
        print (1)
    else:
        print (0)
else:
    if A>=X and B>=X:
        print (2)
    else:
        if A>=X:
            print ("Mike")
        else:
            print ("Ivan")    