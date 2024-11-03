lista = ["rakesh", "ramesh", "syam", "harri"]
lista.append("manash")  # Append element on end of the list
lista.remove("ramesh") # remove the first occurence value which match the argument value
lista.insert(1,"banana") # Append or insert element in a specified position
lista.clear() # Remove all the List element without effecting the list variablr
lista.extend(("banana", "apple", "orange",))  # append another iterable in existing list... iterable may be another list or a tuple
print(type({"key":"value"}))
for i in {"key1":"value1", "key2": "value2"}.items():
    print(i) 