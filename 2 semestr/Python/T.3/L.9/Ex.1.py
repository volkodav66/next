N = int(input("Enter    "))
while N<1 or N>10**5:
    print("Error")
    N = int(input("Enter    "))
a = list (map(int, input(f"Enter {N} elements   ").split()))
print(a)
while len(a) != N:
    print("Error")
    a = list (map(int, input(f"Enter {N} elements   ").split()))
for i in range(N):
    while abs(a[i])>2*10**9:
        print("Error")
        a[i] = int(input(f"Remove {i+1} elements"))
b = set(a)
print(len(b))