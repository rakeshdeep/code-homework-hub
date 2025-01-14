list_comprehension={x**2 for x in range(1,11)}
print("List comprehension:",list_comprehension)

set_comprehension={x for x in range(1,11) if x%2==0}
print("Set comprehension:",set_comprehension)

dict_comprehension={x:x**3 for x in range(1,6)}
print("Dictionary comprehension:",dict_comprehension)