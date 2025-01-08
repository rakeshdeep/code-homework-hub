# 19. Write a program to demonstrate basic operation on the set
# Create two sets
set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}

# Union
union_set = set1.union(set2)
print("Union:", union_set)

# Intersection
intersection_set = set1.intersection(set2)
print("Intersection:", intersection_set)

# Difference
difference_set = set1.difference(set2)
print("Difference (set1 - set2):", difference_set)

# Symmetric Difference
symmetric_diff = set1.symmetric_difference(set2)
print("Symmetric Difference:", symmetric_diff)

# Add element
set1.add(6)
print("After adding 6 to set1:", set1)

# Remove element
set2.remove(8)
print("After removing 8 from set2:", set2)

# Check subset
is_subset = {1, 2}.issubset(set1)
print("Is {1, 2} subset of set1?", is_subset)