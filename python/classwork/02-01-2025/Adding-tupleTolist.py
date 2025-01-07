a=[]
b=(45,566,879,98,)

p=int(input("Enter how many element u want to enter in a list:"))
for i in range(p):
    n=int(input("Enter element:"))
    a.append(n)

s=list(b)
lt=a+s
print(lt)
tu=s+a
tp=tuple(tu)
print(tp)