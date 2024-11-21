#Wap to swap the first and last elements in a list
a=[]
size=int(input("Enter number of elements you want to Enter in a list::"))
for i in range(size):
    x=int(input("Enter a number:"))
    a.append(x)
print(f"Before swaping={a} ")
temp = a[0]
a[0] = a[-1]
a[-1] = temp
print(f"After swaping ={a}")