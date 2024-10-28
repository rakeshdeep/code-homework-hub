#  print words with their length of a string
s = input("enter:")
w = s.split()
print(f"number of word = {len(w)}")
for i in w:
    print(f" '{i}'={len(i)}")
