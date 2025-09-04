import math
def triangle():
    a = int(input("Enter the value of A:"))
    b = int(input("Enter the value of B:"))
    c = int(input("Enter the value of C:"))
    if ((a+b)>c and (b+c)>a and (a+c)>b):
        s = (a+b+c)/2
        area = math.sqrt(s*(s-a)*(s-b)*(s-c))
        print("The triangle area is:",area)
    else:
        print("Triangle is not possible.")
triangle()
