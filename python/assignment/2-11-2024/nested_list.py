#  WAP to ask the data of 5 students that contain name, rollno, age sort the list based on rollno of the students.
 
data = []
for i in range(3):
    sdt = []
    name = input("Enter name:")
    sdt.append(name)
    age = int(input("Enter Age:"))
    sdt.append(age)
    rollno = int(input("Enter rollno: "))
    sdt.append(rollno)
    data.append(sdt)

# Sort based on rollno (index 2)
data.sort(key=lambda x: x[2])

print("\nSorted student data based on roll number:")
for student in data:
    print(f"Name: {student[0]}, Age: {student[1]}, Roll No: {student[2]}")
