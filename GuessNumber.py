import random
b=random.randint(1,1000)
count=0
while(True):
    a = int(input("Guess The number from 1 to 1000 :"))
    if (a == b):
        print("You have guess the number in ", count, " attempts")
        break
    elif (a > b):
        print("Your guess is too high")
        count += 1
    elif (a < b):
        print("Your guess is too low")
        count += 1
    else:
        pass
