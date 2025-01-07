number = int(input("Enter a number: "))

a, b = 0, 1
is_fibonacci = False

while a <= number:
    if a == number:
        is_fibonacci = True
        break
    temp=a+b
    a=b
    b=temp

if is_fibonacci:
    print(f"{number} is a Fibonacci number.")
else:
    print(f"{number} is not a Fibonacci number.")