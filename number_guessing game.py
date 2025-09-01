from random import randint

computer = randint(1, 100)
count = 0

while True:
    user = int(input("Guess the number between 1 and 100: "))
    count += 1  # count every guess

    if user > computer:
        print("Entered number is larger than the actual number!!")
    elif user < computer:
        print("Entered number is smaller than the actual number!!")
    else:
        print(f"Congratulations! You guessed the number in {count} guesses!!")
        break
