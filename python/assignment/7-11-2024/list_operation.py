data = [1, "hello", 3.14, True, [5, 6], (7, 8)]

data.append("new item")
data.clear()

data = [1, "hello", 3.14, True, [5, 6], (7, 8)]
copy_data = data.copy()
count_of_hello = data.count("hello")
data.extend(["another item", 9.81])
index_of_true = data.index(True)
data.insert(2, "inserted_element")
popped_item = data.pop()
data.remove("inserted_element")
data.reverse()

is_in_data = "hello" in data
is_not_in_data = "world" not in data

del data[0]

squared_data = [x**2 for x in data if isinstance(x, (int, float))]

print("Data:", data)
print("Copied Data:", copy_data)
print("Count of 'hello':", count_of_hello)
print("Index of True:", index_of_true)
print("Popped Item:", popped_item)
print("Is 'hello' in Data:", is_in_data)
print("Is 'world' not in Data:", is_not_in_data)
print("Squared Data (squares of numbers):", squared_data)
