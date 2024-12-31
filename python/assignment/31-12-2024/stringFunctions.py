# WAP to demonstrate various String functions
# Function demos
text = "Hello Rakesh"
text2 = "   spaces   "
text3 = "python,java,c++"
text4 = "123"
text5 = "abcdef"

print("Strip whitespace:", text2.strip())
print("Join words:", "-".join(["a", "b", "c"]))
print("Is alphanumeric:", text5.isalnum())
print("Is alphabetic:", text5.isalpha()) 
print("Is numeric:", text4.isnumeric())
print("Find substring:", text5.find("cd"))
print("Count occurrences:", text5.count("c"))
print("Split by comma:", text3.split(","))
print("Title case:", text5.title())
print("Ends with:", text5.endswith("ef"))
print("Original string:", text)
print("Uppercase:", text.upper())
print("Lowercase:", text.lower())
print("Length:", len(text))
print("Split words:", text.split())
print("Replace:", text.replace("Rakesh", "Subham"))