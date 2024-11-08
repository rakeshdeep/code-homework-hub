n = int(input("Enter a Num: "))
originalNum=n
i=0
result=0

while originalNum != 0:
    originalNum = originalNum/10
    i = i+1

while(originalNum != 0):
    remainder = originalNum % 10
    result = result + (remainder ** n)
    originalNum = originalNum/10

if(result == n):
    print("armstrong")
else:
    print("Not")