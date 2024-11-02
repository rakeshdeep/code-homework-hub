# WAP to print prime number between n1 and n2 entered by the user;


def isPrime(n):
    for i in range(2, n):

        if(n%i==0):
            break;
    else:
        print(f"{n} prime")

n1= int(input("Enter n1:"))
n2= int(input("Enter n2:"))


for i in range(n1, n2):
    isPrime(i)

