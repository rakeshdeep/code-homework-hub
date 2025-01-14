def power(x, n):
    result = 1
    for _ in range(n):
        result *= x
    return result

x = int(input("Enter the base value (x): "))
n = int(input("Enter the exponent value (n): "))

print(f"{x} to the power of {n} is {power(x, n)}")
