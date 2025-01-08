# Create an empty set. Write a program that adds five student names to this set, modifies one existing name, and deletes two names existing in it. [ask the user which name to modify/delete].

students = set()

# Add 5 student names
for i in range(5):
    name = input(f"Enter student {i+1}'s name: ")
    students.add(name)

print("\nCurrent students:", students)

# Modify a name
old_name = input("\nEnter name to modify: ")
if old_name in students:
    new_name = input("Enter new name: ")
    students.remove(old_name)
    students.add(new_name)
else:
    print("Name not found!")

print("\nAfter modification:", students)

# Delete two names
for i in range(2):
    name = input(f"\nEnter name {i+1} to delete: ")
    if name in students:
        students.remove(name)
    else:
        print("Name not found!")

print("\nFinal student list:", students)