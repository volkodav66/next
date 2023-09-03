a = []
b = []
n = int(input("Enter    "))
while n>10**5:
    print("Error")
    n = input("Enter    ")
for i in range(n):
    d = input("Enter elements   ")
    a.append(d)
n = int(input("Enter    "))  
for i in range(n):
    d = input("Enter elements   ")
    b.append(d)
a = set(a)
b = set(b)
print(len(a.intersection(b)))