from random import randint

print("Random Number Game")
print("Guess Number between 1 to 10")
random = randint(1,7)

for i in range(5):
    guess = int(input(f"Enter your {i} choice: "))
    if guess == random:
        print("Wow You guess the Correct number.")
        break
    elif guess > random:
        print("You guess big number try to guess small.")
    elif guess < random:
        print("You guess Small number try to guess big")

else:
    print("You can't able to guess and the number is ",random)
