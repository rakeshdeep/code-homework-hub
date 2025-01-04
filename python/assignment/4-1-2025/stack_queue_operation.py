# 14.	Write a program to demonstrate stack and queue operations using a list of numbers.
# Stack operations: push, pop, peek
# Queue operations: enqueue, dequeue, peek
stack = []
queue = []

def push_stack(item):
    stack.append(item)
    print(f"Pushed {item} to stack")

def pop_stack():
    if not stack:
        return "Stack is empty"
    return stack.pop()

def peek_stack():
    if not stack:
        return "Stack is empty"
    return stack[-1]

def enqueue(item):
    queue.append(item)
    print(f"Enqueued {item} to queue")

def dequeue():
    if not queue:
        return "Queue is empty"
    return queue.pop(0)

def peek_queue():
    if not queue:
        return "Queue is empty"
    return queue[0]

# Example usage
push_stack(10)
push_stack(20)
push_stack(30)
print("Stack:", stack)
print("Popped:", pop_stack())
print("Stack peek:", peek_stack())

enqueue(40)
enqueue(50)
enqueue(60)
print("Queue:", queue)
print("Dequeued:", dequeue())
print("Queue peek:", peek_queue())