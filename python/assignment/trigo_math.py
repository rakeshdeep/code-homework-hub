#  2. Write a program that makes use of trigonometric functions available in math module.
import math
angle = int(input("Enter any degree: "))
print(f"Angle in degree= {angle}")
radian = math.radians(angle)
print(f"Converted angle in radians: {radian}")

print(f"Sin({angle}) = sin({radian}) = {math.sin(radian)}")

print(f"Cos({angle}) = cos({radian}) = {math.cos(radian)}")

print(f"Tan({angle}) =  tan({radian}) = {math.tan(radian)}")

print(f"cosec({angle}) = cosec({radian}) = {1/math.sin(radian)}")

print(f"sex({angle}) = sec({radian}) = {1/math.cos(radian)}")

print(f"cot({angle}) = cot({angle}) = {1/math.tan(radian)}")