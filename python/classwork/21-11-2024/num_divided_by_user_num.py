# WAP to print number which is divisible by user input number in a range.
n = int(input("Enter a number:"))
for i in range(1,100):
    if i % n ==0:
        print(i)