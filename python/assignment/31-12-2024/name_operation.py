# WAP to that will ask you to enter your name, through keyboard, and perform following operations. (a)Find the middle name (b) Find the last name (using string slicing) (c)Re-write the name with surname first.

full_name = input("Enter your full name: ")
name_parts = full_name.split()
middle_name = name_parts[1] if len(name_parts) > 2 else "No middle name"
last_name = name_parts[-1]
surname_first = f"{last_name}, {' '.join(name_parts[:-1])}"
print(f"Middle name: {middle_name}")
print(f"Last name: {last_name}")
print(f"Name with surname first: {surname_first}")
