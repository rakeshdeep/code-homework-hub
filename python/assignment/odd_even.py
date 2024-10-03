# 7. Check a number enter by the user is odd or even
n = int(input("Enter a Number: "))
if n == 0:
    print("Neutral Number")
elif n % 2 != 0:
    print("Odd Number")
else:
    print("Even Number")