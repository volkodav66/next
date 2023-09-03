def rec(x,a):
    if a == len(x):
        return print("End list")
    print(x[a])
    rec(x,a+1)
    
    
my_list = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
a = 0
rec(my_list,a)