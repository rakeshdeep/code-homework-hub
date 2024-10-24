# wap for check palindrom
str = input("Enter a string::")
if str == str[::-1]:
    print(f"{str} is a palindrome")
else:
    print(f"{str} is not a palindrome")
    