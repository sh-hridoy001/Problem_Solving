import math
def factorial(n):
    if n ==0:
        return 1
    else:
        return n*factorial(n-1)
n = int(input("Enter a value to factorial:"))
if n<0:
    print("ERROR!!  Enter a positive value.")
else:
    print(f"The factorial value of {n} is :",factorial(n))
