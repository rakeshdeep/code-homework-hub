# WAP to find uncommon from two string.
string1 = input("Enter string1:: ")
string2 = input("Enter string2:: ")
set1 = (string1.split())
set2 = (string2.split())
notIn = (set1 - set2) | (set2 - set1)
print("Uncommon words:", notIn)


list1 = string1.split()
list2 = string2.split()

notIn = []
for word in list1:
    if word not in list2:
        notIn.append(word)

for word in list2:
    if word not in list1:
        notIn.append(word)


print("Uncommon words:", notIn)
