n = 5
q = []

def enqueue(x):
    if len(q) == n:
        print("Overflow")
    else:
        q.append(x)
        print("Enqueued", x)

def dequeue():
    if not q:
        print("Underflow")
    else:
        x = q.pop(0)
        print("Dequeued", x)

def front():
    print("Front ",q[0])

def rare():
    print("rare ",q[-1]);

enqueue(1)
enqueue(2)
enqueue(3)
enqueue(4)
enqueue(5)
enqueue(6)

front()
rare()

dequeue()
dequeue()
dequeue()
dequeue()
dequeue()
dequeue()
