dic={}
n=int(input("Enter the number of key & value pair you want to input::"))
for i in range (n):
    key=int(input("Enter sequence num::"))
    value=input("Enter value::")
    dic[key]=value

s=list(dic.keys())
s.sort()

d={}
for i in s:
    d[i]=dic[i]

print(d)