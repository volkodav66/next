a = input("Введите слово    ")
b = int(len(a)/2)
c = 0
for i in range(b):
    if a[i] == a[len(a)-1-i]:
        c = c+1
if c == b:
    print ("yes")
else:
    print ("no")