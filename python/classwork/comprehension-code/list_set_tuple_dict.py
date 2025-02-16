l = [1,2,3,4,5,6,7]
# square number of above list using list comprehension
lsquare = [i** 2 for i in l ]
print("Square of List: ", lsquare)
# Print even numbers in the list using list comprehension
evenNum = [i for i in l if i%2==0]
print("Even number in the list:",evenNum)

# tuple comprehension
t = ("rakesh","manash", "syam", "mohit" )
nameWithSH = [n for n in t if n.endswith("sh")]
print(f"Names Ends with 'sh' are: ",nameWithSH)

# Set comprehension
s = {"rakesh",3, "subham", "nb", 7,90,9.0}
onlyNum = {n for n in s if isinstance(n,(int,float))}
print("Numbers in the Set: ",onlyNum)

# Dict comprehension
d = {
    "name": "rakesh",
    "dept": "CS",
    "age":19,
    "birthYear":2005
}

uppercaseKeyValue = {key.upper(): value for key, value in d.items()}
print("Dict with Uppercase key:",uppercaseKeyValue)

def power(n,p):
    return n ** p

print("Power of", power(10,2))