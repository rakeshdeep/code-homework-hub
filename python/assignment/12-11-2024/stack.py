n = 5
s = []

def push(x):
    if len(s) == n:
        print("Overflow")
    else:
        s.append(x)
        print("Pushed", x)

def pop():
    if not s:
        print("Underflow")
    else:
        x = s.pop()
        print("Popped", x)

push(1)
push(2)
push(3)
push(4)
push(5)
push(6)

pop()
pop()
pop()
pop()
pop()
pop()
