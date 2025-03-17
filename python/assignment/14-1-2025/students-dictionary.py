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
    search= input("Enter the name of the student: ")
    found=False
    for roll, data in students_dict.items():
        if data[0]==search:
            print(f"Student found with roll number {roll} , name {data[0]}")
            found=True
            break
    if not found:
        print(f"{search} not found in the dictionary")

students_dict = create_dict()
search_student(students_dict)