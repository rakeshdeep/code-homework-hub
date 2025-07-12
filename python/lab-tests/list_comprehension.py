# List comprehension
l = [1,2,3,4,5,6,7,8,9,10]
square = [i ** 2 for i in l ]
print("Square of list element is: ",square)

# Set comprehension
s = {"rakesh", "subham", "nb", "manash", "mohit"}
upperCase = {c.upper() for c in s}
print("Set element in upperCase",upperCase)

# Dictionary comprehension
d = {1: "rakesh", 2: "subham", 3: "nb", 4: "manash", 5: "mohit"}
d = {k:v.upper() for k,v in d.items()}
print("Dictionary element in upperCase",d)
