# even length word in string
s = input("enter:")
w = s.split()
for i in w:
    if len(i) % 2 == 0:
        print(i)
