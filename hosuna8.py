#Author: Hugo Osuna
#Date: 03-03-26



var1 = 5

userIn = input("Guess my number: \n")
x = int(userIn)

if (x > var1):
    print("Your guess is too BIG!\nYou LOSE!\n")
elif (x < var1): 
    print("Your guess is too SMALL!\nYou LOSE!\n")
elif (x == var1):
    print("Your guess is CORRECT\nYou WIN!\n")

print("---------------------------------------\n")

for i in range(var1):
    print("EVERYBODY WANTS TO RULE THE WORLD\n")
    i = i + 1

while (var1 > 0):
     print("SHRIMP FRIED RICE")
     var1 = var1 - 1


