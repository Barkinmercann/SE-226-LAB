# Question 1
sequence = []
n = int(input("Enter a value for n: "))
x = int(input("Enter a value for x: "))

fact = lambda a: 1 if a == 0 else a * fact(a - 1)

for i in range(1, x + 1):
    equation = (n ** i) / fact(i)
    sequence.append(equation)


total = 1 + sum(sequence)
print("Result: ", total)

print("--------------------------------")
# Question 2

result = 0
def totalizer(n):
    """    This is a recursive function.Takes n as a parameter and returns nothing.
    This function solves the following equation:
    ∑((−1)^(k+1))/k  for k=1 to n"""

    global result
    if n == 1:
        result = result + ((-1) ** 2 / 1)
    else:
        totalizer(n - 1)
        result = result + (((-1) ** (n + 1)) / n)




print(totalizer.__doc__)
