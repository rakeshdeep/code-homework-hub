# 8. Find the youngest amont syam , Dugu and Ishan whoes ages are enter by the user.
shyam = int(input("Enter age of Shyam:"))
dugu = int(input("Enter age of dugu:"))
ishan = int(input("Enter age of ishan:"))

if shyam<dugu:
    if shyam < ishan:
        print("Syam is Youngest")
elif dugu<ishan:
        print("dugu is Youngest")
else:
     print("Ishan is Youngest")
    
