#  11. WAP to find factorial of a number enter by the user.

n = int(input("Enter a number: "))
# n=5
i = n
f = 1
while i> 0:
    f *= i
    i-=1
print(f"Factorial of {n} is {f}")
