# 9 Given the point (x1,y1), (x2,y2), (x3,y3) WAP to check all the point falls on straight line.
x1= int(input("Enter x1: "))
y1= int(input("Enter y1: "))
x2= int(input("Enter x2: "))
y2= int(input("Enter y2: "))
x3= int(input("Enter x3: "))
y3= int(input("Enter y3: "))

area = 0.5 * ( x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) )


if area == 0:
    print("Above points are colliner or lies on a straight line")
else:
    print("Above points don't form a straight line.")
