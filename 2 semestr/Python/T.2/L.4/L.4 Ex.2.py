print ("Введите пятизначное число")
a = int(input())
b = a % 10
c = a % 100 // 10
d = a % 1000 // 100
e = a % 10000 // 1000
f = a // 10000
if f == e:
    print ("Error")
else:
    s = float(c**b*d/(f-e))
    print (s)