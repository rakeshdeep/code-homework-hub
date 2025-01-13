# 21.	Write a program to demonstrate basic operations on the dictionary

student = {
    'name': 'Rakesh',
    'age': 20,
    'grade': 'A'
}

# Basic dictionary operations
print("Original dictionary:", student)

# Adding a new key-value pair
student['subject'] = 'Python'
print("\nAfter adding new key:", student)

# Updating a value
student['age'] = 21
print("\nAfter updating age:", student)

# Accessing values
print("\nStudent name:", student.get('name'))

# Removing a key-value pair
del student['grade']
print("\nAfter deleting grade:", student)

# Dictionary methods
print("\nAll keys:", student.keys())
print("All values:", student.values())
print("Number of items:", len(student))