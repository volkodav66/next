N = int(input("Введите число    "))
while N<1 or N>10**9:
    print("Error")
    N = int(input("Введите число    "))
else:
    a = list(map(int,input().split()))
    b = []
    for i in range(-1,N-1):
        b.append(a[i])
    print(b)
