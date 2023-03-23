x = int(input("Please enter a number between 3 and 9: "))

for i in range(1, x + 1):
    print('*' * i)

for i in range(x - 1, 0, -1):
    print('*' * i)