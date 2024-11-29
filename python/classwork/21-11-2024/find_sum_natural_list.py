#  WAP to sum the natural number in a list
l=[]
sum =0
size = int(input("Enter side of your list:"))
for i in range(size):
    n = int(input("Enter a num element: "))
    l.append(n)
    sum = sum + n

print(f"Sum of the list {l} is {sum}")
