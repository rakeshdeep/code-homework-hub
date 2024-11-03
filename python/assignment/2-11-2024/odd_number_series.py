# WAP to print odd number from n1 to n2 where the value of n1 and n2 entered by user;

n1= int(input("Enter n1:"))
n2= int(input("Enter n2:"))

if (n1>n2 or n2 == 0):
    print(f"n2 should not be 0 and always greater then n1")

for i in range(n1,n2):
    if(i%2 != 0):
        print(i)