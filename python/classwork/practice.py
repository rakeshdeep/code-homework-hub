# 22.	Create a dictionary to store data (name, roll number) of N students. The key will be the roll number of the student and the value contains the data of the student (in a list). Write a program that asks the user to enter a name of a Student, search it in the dictionary and print the data of the Student if it is available otherwise display an appropriate message

students = {}
n =int(input("Enter number of student: "))
for i in range(1,n+1):
    roll = int(input(f"Enter roll of s{i}: "))
    name = str(input(f"Enter name of s{i}: "))
    dept = input(f"Enter Dept. of s{i}: ")
    students[roll] = [name,dept]

searchName = input("\nEnter name for searching:")
for key, value in students.items():
    if searchName in value:
        print(f"{key}: {value}")
        break
else:
    print("Student Not found")


