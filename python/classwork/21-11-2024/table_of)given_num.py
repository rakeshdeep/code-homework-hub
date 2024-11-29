# WAP to print the table of a entered Number
n = int(input("Enter a Num:"))
for i in range(1,11):
    result = i * n
    print(f"{n}x{i}={result}")
