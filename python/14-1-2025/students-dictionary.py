'''22> Create a dictionary to store data (name, roll number) of N students. The key will be the 
roll number of the student and the value contains the data of the student (in a list). Write 
a program that asks the user to enter a name of a Student, search it in the dictionary and 
print the data of the Student if it is available otherwise display an appropriate message.'''

def create_dict():
    students_dict = {}
    n = int(input("Enter the number of students: "))
    for _ in range(n):
        roll = input("Enter roll number: ")
        name = input("Enter name: ")
        students_dict[roll] = [name]
    return students_dict

def search_student(students_dict):
    roll = input("Enter roll number of student to search: ")
    if roll in students_dict:
        print(f"Data of student with roll number {roll}: {students_dict[roll]}")
    else:
        print("Student not found")