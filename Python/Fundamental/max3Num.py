class max3num:
    def __init__(self,a,b,c):
        if (a>b) and (a>c):
            print("Largest A =",a)
        elif (b>c):
            print("Largest B =",b)
        else:
            print("Largest C =",c)
a = int(input("Enter the value of A:"))
b = int(input("Enter the value of A:"))
c = int(input("Enter the value of A:"))
max3num(a,b,c)
