# Question 1
list1 = [10, 20, 30, 40, 50]
list2 = [30, 40, 50, 60, 70]


def function(list1, list2):
    intersection_list = []

    for x in list1:
        if x in list2:
            if x not in intersection_list:
                intersection_list.append(x)

    return intersection_list


print(function(list1, list2))


# Question 2

films = ["inception", "interstellar", "tenet", "memento", "dunkirk"]


def palindrome_films(list):
    palindromes = []

    for film in films:
        if film == film[ : :-1]:
            palindromes.append(film)

    return palindromes


print(palindrome_films(films))


# Question 3

def prime(integers):
    max_number = max(integers)
    primes = [True] * (max_number + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(max_number ** 0.5) + 1):
        if primes[i]:
            for j in range(i * i, max_number + 1, i):
                primes[j] = False
    return [x for x in integers if primes[x]]

integer = list(range(2, 51))

print(prime(integer))


# Question 4

def anagrams(word, word_list):
    char_list = []
    anagram_list = []
    for char in word:
        char_list.append(char)

    char_list.sort()

    for x in word_list:
        x_list = []
        for y in x:
            x_list.append(y)
        x_list.sort()
        if char_list == x_list:
            anagram_list.append(x)

    return anagram_list

words = ["enlist", "google", "inlets", "banana"]
word = "listen"
print(anagrams(word, words))








        
