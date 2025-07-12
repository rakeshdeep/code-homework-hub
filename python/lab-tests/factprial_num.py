
def factorial(n):
    if n== 0 or n ==1:
         return 1
    elif n < 0:
        return None
    else:
        return n * factorial(n - 1)
num = int(input("Enter a Num:"))
print(f"Factorial of {num} is {factorial(num)}")