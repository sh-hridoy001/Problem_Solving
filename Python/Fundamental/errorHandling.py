a = int(input("Enter the value of a:"))
b = int(input("Enter the value of b:"))
try:
    if a < 0 or b < 0:
        raise ZeroDivisionError
    print(a / b)
except ZeroDivisionError:
    print("Please enter valid integer value")
