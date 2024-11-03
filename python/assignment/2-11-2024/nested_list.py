#  WAP to ask the data of 5 students that contain name, rollno, age sort the list based on rollno of the students.
 
data = []
sdt = []
for i in range(2):
    name = input("Enter name:")
    sdt.append(name)
    age = int(input("Enter Age:"))
    sdt.append(age)
    rollno = int(input("Enter rollno: "))
    sdt.append(rollno)

    data.append(sdt)

for i in data:
    print(i)
