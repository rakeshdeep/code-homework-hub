#  WAP to print the second largest number in a list taking user input.
l=[]
temp=[]
size = int(input("Enter side of your list:"))
for i in range(size):
    n = int(input("Enter a num element: "))
    temp.append(n)
    l.append(n)
l.sort(reverse=True)
print(f"Second Greatest number in {temp} is {l[1]}")