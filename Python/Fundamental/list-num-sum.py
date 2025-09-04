def add_sum():
    numbers = []
    for i  in range(5):
        num = float(input(f"Enter the {i+1} value :"))
        numbers.append(num)
    total = sum(numbers)
    print("The sum of the list:",total)
add_sum()
