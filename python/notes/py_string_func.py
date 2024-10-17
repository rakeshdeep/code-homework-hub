# Sample strings to work with
text = "  Hello, Python World!  "
number_str = "12345"
alpha_str = "Python"
mixed_str = "Python3"
words = ["Python", "is", "awesome"]
text_with_tabs = "Hello\tWorld"
sentence = "Apples and oranges are fruits."

# 1. capitalize() - Capitalizes the first character
print(text.capitalize())  # Output: "  hello, python world!  "

# 2. casefold() - Converts string to lowercase (more aggressive than lower())
print(text.casefold())  # Output: "  hello, python world!  "

# 3. center() - Centers string with padding
print(text.center(30, '-'))  # Output: "---  Hello, Python World!  ---"

# 4. count() - Counts occurrences of a substring
print(sentence.count("oranges"))  # Output: 1

# 5. encode() - Encodes the string using specified encoding
encoded = text.encode('utf-8')
print(encoded)  # Output: b'  Hello, Python World!  '

# 6. endswith() - Checks if the string ends with a specific suffix
print(text.endswith("!  "))  # Output: True

# 7. expandtabs() - Replaces tabs with spaces
print(text_with_tabs.expandtabs(8))  # Output: "Hello   World"

# 8. find() - Finds the first occurrence of a substring
print(sentence.find("and"))  # Output: 7

# 9. format() - Formats a string with placeholders
print("Hello, {}!".format("World"))  # Output: "Hello, World!"

# 10. format_map() - Formats string using a dictionary
data = {"name": "Alice"}
print("{name} loves Python".format_map(data))  # Output: "Alice loves Python"

# 11. index() - Finds the first occurrence or raises an error if not found
print(sentence.index("oranges"))  # Output: 11

# 12. isalnum() - Checks if all characters are alphanumeric
print(mixed_str.isalnum())  # Output: True

# 13. isalpha() - Checks if all characters are alphabetic
print(alpha_str.isalpha())  # Output: True

# 14. isascii() - Checks if all characters are ASCII
print(text.isascii())  # Output: True

# 15. isdecimal() - Checks if all characters are decimals
print(number_str.isdecimal())  # Output: True

# 16. isdigit() - Checks if all characters are digits
print(number_str.isdigit())  # Output: True

# 17. isidentifier() - Checks if string is a valid identifier
print("variable_name".isidentifier())  # Output: True

# 18. islower() - Checks if all characters are lowercase
print("python".islower())  # Output: True

# 19. isnumeric() - Checks if all characters are numeric
print(number_str.isnumeric())  # Output: True

# 20. isprintable() - Checks if all characters are printable
print(text.isprintable())  # Output: True

# 21. isspace() - Checks if the string contains only whitespace
print("   ".isspace())  # Output: True

# 22. istitle() - Checks if the string is in title case
print(text.istitle())  # Output: False

# 23. isupper() - Checks if all characters are uppercase
print("PYTHON".isupper())  # Output: True

# 24. join() - Joins iterable elements with the string as a separator
print(' '.join(words))  # Output: "Python is awesome"

# 25. ljust() - Left-aligns string with padding
print(text.ljust(30, '-'))  # Output: "  Hello, Python World!  -----"

# 26. lower() - Converts string to lowercase
print(text.lower())  # Output: "  hello, python world!  "

# 27. lstrip() - Removes leading characters
print(text.lstrip())  # Output: "Hello, Python World!  "

# 28. maketrans() - Creates a translation table
trans = str.maketrans("a", "A")
print("apple".translate(trans))  # Output: "Apple"

# 29. partition() - Splits string into three parts
print(sentence.partition("and"))  # Output: ('Apples ', 'and', ' oranges are fruits.')

# 30. replace() - Replaces occurrences of a substring
print(sentence.replace("oranges", "bananas"))  # Output: "Apples and bananas are fruits."

# 31. rfind() - Finds the last occurrence of a substring
print(sentence.rfind("fruits"))  # Output: 23

# 32. rindex() - Finds the last occurrence or raises an error
print(sentence.rindex("are"))  # Output: 19

# 33. rjust() - Right-aligns string with padding
print(text.rjust(30, '-'))  # Output: "-----  Hello, Python World!  "

# 34. rpartition() - Splits string into three parts from the right
print(sentence.rpartition("and"))  # Output: ('Apples ', 'and', ' oranges are fruits.')

# 35. rsplit() - Splits string from the right into a list
print(sentence.rsplit(" ", 2))  # Output: ['Apples and oranges are', 'fruits.']

# 36. rstrip() - Removes trailing characters
print(text.rstrip())  # Output: "  Hello, Python World!"

# 37. split() - Splits string into a list
print(sentence.split())  # Output: ['Apples', 'and', 'oranges', 'are', 'fruits.']

# 38. splitlines() - Splits string at line breaks
print("Hello\nWorld".splitlines())  # Output: ['Hello', 'World']

# 39. startswith() - Checks if the string starts with a prefix
print(text.startswith("  Hello"))  # Output: True

# 40. strip() - Removes leading and trailing characters
print(text.strip())  # Output: "Hello, Python World!"

# 41. swapcase() - Swaps case of characters
print(text.swapcase())  # Output: "  hELLO, pYTHON wORLD!  "

# 42. title() - Converts string to title case
print(text.title())  # Output: "  Hello, Python World!  "

# 43. translate() - Translates string using a translation table
print("apple".translate(trans))  # Output: "Apple"

# 44. upper() - Converts string to uppercase
print(text.upper())  # Output: "  HELLO, PYTHON WORLD!  "

# 45. zfill() - Pads string with leading zeros
print(number_str.zfill(8))  # Output: "00012345"
