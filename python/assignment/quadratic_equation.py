import math

def find_roots(a, b, c):
    # Calculate the disc
    disc = b**2 - 4*a*c # b**2 - 4ab

    if disc > 0:
        # Two distinct real roots
        root1 = (-b + math.sqrt(disc)) / (2 * a)
        root2 = (-b - math.sqrt(disc)) / (2 * a)
        print(f"The equation has two real and distinct roots: {root1} and {root2}")
    elif disc == 0:
        # One real root (repeated root)
        root = -b / (2 * a)
        print(f"The equation has one real root: {root}")
    else:
        # Complex roots
        real_part = -b / (2 * a)
        imaginary_part = math.sqrt(-disc) / (2 * a)
        print(f"The equation has complex roots: {real_part} + {imaginary_part}i and {real_part} - {imaginary_part}i")

# Input coefficients a, b, and c
a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))


if a == 0:
    print("This is not a quadratic equation (a cannot be zero).")
else:
    # Find and print the roots
    find_roots(a, b, c)
