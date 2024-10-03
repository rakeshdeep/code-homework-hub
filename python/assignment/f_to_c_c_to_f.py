# 3. Write a program that will convert various temperatures.
    # a) Fahrenheit to Centigrade 
    # b) Centigrade to Fahrenheit
def f_to_c(fahrenheit):
    celsius = (fahrenheit - 32) * 5 / 9
    return f"{fahrenheit} F is equal to  {celsius: .2f} C"

def c_to_f(celsius):
    fahrenheit = (celsius * 9 / 5) + 32
    return f"{celsius} C is equal to {fahrenheit: .2f} F"

print("What do you want to convert\npress f for fahrenheit to Celsius\npress c for celsius to fahrenheit")
ch = str(input("You: "))
if ch == 'f' or ch == 'F':
    f = float(input("Enter fahrenheit: "))
    print(f_to_c(f))
elif ch == 'c' or ch == 'C':
    c = float(input("Enter Celsius: "))
    print(c_to_f(c))