# QUESTION 4

dictionary = {i: (i-1)*i for i in range(1,31)}
print(dictionary)

for key, value in dictionary.items():
    print(key,": ", value)

sum = 0
for value in dictionary.values():
    sum += value
print("Sum of all values:", sum)

while True:
    user_input = input("Enter a number to remove from the dictionary: ")
    if user_input.isdigit():
        remove = int(user_input)
        if remove in dictionary:
            dictionary.pop(remove)
            print(int(remove), "removed from the dictionary")
            break
        else:
            print(int(remove)," not found in the dictionary")

    else:
        print("Invalid input, please enter an integer!!!")

print("After remove: \n")
for key, value in dictionary.items():
    print(key,": ", value)


# QUESTION 5

divided = {'Tony': 41, 'Rhodey': 43, 'Nat': 35}
we_fall = {'Steve': 39, 'Clint': 35, 'Wanda': 28}

united_we_stand = {**divided, **we_fall}

print("Name Age")
for key, value in united_we_stand.items():
    print(key, value)

united_we_stand.pop('Nat')

print("\nAfter remove: \n")
print("Name Age")
for key, value in sorted(united_we_stand.items()):
    print(key, value)

max = max(united_we_stand.values())
min = min(united_we_stand.values())

print("Maximum age:", int(max))
print("Minimum age:", int(min))