import math
class QuardraticEq:
    def __init__(self,a,b,c):
        d = (b**2)-(4*a*c)
        if d<0:
            print("Roots are imaginary")
        else:

            x1 = (-b+math.sqrt(d))/(2*a)
            x2 = (-b-math.sqrt(d))/(2*a)
            print("X1=",x1,"X2=",x2)
            print("Roots are real.")
a = int(input("Enter the value of A:"))
b = int(input("Enter the value of B:"))
c = int(input("Enter the value of C:"))
qurd = QuardraticEq(a,b,c)
