# WAP to demonstrate basic Tuple operations

my_tuple = (1, 2, 3, 4,4, 5,)
print(f"The Tuple: {my_tuple}")
print(f"first Element: {my_tuple[0]}") 
print(f'Last element: {my_tuple[-1]}')
print(f"Index of 2 : { my_tuple.index(2)}")
print(f"Count of 4: {my_tuple.count(4)}")
my_tuple += (6,)
print(f"Append new element:{my_tuple}")
print(f"Reverse tuple: {my_tuple[::-1]}")
print(f"Check element existance: {1 in my_tuple}")
print(f"Check element not existance: {20 not in my_tuple}")
