name = input("What is your name? ")
labGrade = int(input("Lab grade = "))
midterm = int(input("Midterm grade = "))
final = int(input("Final = "))

lastScore = (labGrade * 0.25) + (midterm * 0.35) + (final * 0.40)

print("Name: " + name)
print("Lab: " + str(labGrade))
print("Midterm: " + str(midterm))
print("Final: " + str(final))
print("Last Score: " + str(lastScore))