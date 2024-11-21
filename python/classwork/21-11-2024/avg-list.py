#Wap to print average of a list
a=[]
size=int(input("Enter number of elements you want to Enter in a list::"))
for i in range(size):
    x=int(input("Enter a number:"))
    a.append(x)
b=sum(a)
c=len(a)
avg=b//c
print(avg)
          

