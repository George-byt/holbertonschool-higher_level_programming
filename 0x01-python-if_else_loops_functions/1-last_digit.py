#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
lastDigit = abs(number) % 10
if number < 0:
    lastDigit = -lastDigit
print("Last digit of {} is {} and is ".format(number, lastDigit), end="")
if lastDigit > 5:
    print("greater than 5".format(number, lastDigit))
elif lastDigit == 0:
    print("0")
else:
    print("less than 6 and not 0")
