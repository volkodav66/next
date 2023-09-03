z = input()
b = list(z)
a = 0
e = 0
i = 0
o = 0
u = 0
for n in range (len(b)):
    if (b[n] == 'a'):
        a = a+1
    if (b[n] == 'e'):
        e = e+1
    if (b[n] == 'i'):
        i = i+1
    if (b[n] == 'o'):
        o = o+1
    if (b[n] == 'u'):
        u = u+1    
c = a+e+i+o+u # количество гласных
d = len(b)-c # количество согласных         
print (f'Количество гласных букв {c}. \nКоличество согласных букв {d}.')
if (a == 0) or (e == 0) or (i == 0) or (o == 0) or (u == 0):
    print ('False')
else:
    print (f'Количество букв "a" равно {a}.')
    print (f'Количество букв "e" равно {e}.')
    print (f'Количество букв "i" равно {i}.')
    print (f'Количество букв "o" равно {o}.')
    print (f'Количество букв "u" равно {u}.')
