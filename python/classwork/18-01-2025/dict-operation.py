#dictionary operations

d={1: "rakesh", 2: "subham", 3: "nb", 4: "manash", 5: "mohit"}
u = {k:v.upper() for k,v in d.items()}
print("Dictionary element in upperCase",u)
print("Keys of dictionary are: ",d.keys())
print("Values of dictionary are: ",d.values())
print("Items of dictionary are: ",d.items())
print("Get value of key 2: ",d.get(2))
print("Pop value of key 2: ",d.pop(2))
print("Dictionary element in upperCase",d)
print("Popitem: ",d.popitem())