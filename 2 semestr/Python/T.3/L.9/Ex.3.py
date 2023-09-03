a = list(map(int, input("Enter  ").split()))
for i in range (len(a)-1, -1,-1):
    j = 0
    c = 0
    while j == 0:
        if a[i]==a[c] and c<i:
            print (f"{a[i]} YES")
            c = 0
            j = 1
        else:
            c += 1
        if c == len(a):
            print (f"{a[i]} NO")
            j = 1