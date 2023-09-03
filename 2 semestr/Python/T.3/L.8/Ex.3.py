m = int(input("Введите количество килограмм может выдержать одна лодка   "))
while m<1 or m>10**6:
    print("Error")
    m = int(input("Введите количество килограмм может выдержать одна лодка   "))
n = int(input("Введите количество рыбаков   "))
while n<1 or n>100:
    print("Error")
    n = int(input("Введите количество рыбаков   "))
v = []
d = 0
while d<n:
    weight = int(input(f"Введите вес {d+1} рыбака   "))
    if  weight<1 or weight>m:
       print ("Error")
    else:
        v.append(weight)
        d = d+1
v = list(v)
v.sort()
c = 0
z = 0
y = 0
u = 0
for i in range (0,int(n/2), +1):
    while ((v[i]+v[len(v)-1-z])>m):
        c += 1
        z +=1
        if c>=n:
            y += 1
            break
    else: 
        if (i != len(v)-z):
            c +=1
            z +=1
            continue
if (n%2 != 0 and v[0]+v[-1]<=m) or n == 1:
    c +=1
print(c-y)