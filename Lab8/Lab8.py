from abc import ABC

class Frequency(ABC):

    address = ""

    def __init__(self, address):
        self.address = address

    def calculate_freqs(self):
        pass

class ListCount(Frequency):
    def calculateFreqs(self):

        with open(self.address, 'r') as file:
            text = file.read()
            freqs = []
            for char in set(text):
                freqs.append(f'{char} = {text.count(char)}')
            print(freqs)

class DictCount(Frequency):
    def calculateFreqs(self):

        with open(self.address, 'r') as file:
            text = file.read()
            frequencies = {}

            for char in set(text):
                if char.isalpha():
                    char = char.lower()
                    frequencies[char] = frequencies.get(char, 0) + 1

        print("Resulting Dictionary:")
        print(frequencies)






list_counter = ListCount("weirdWords.txt")
list_counter.calculateFreqs()

dict_counter = DictCount("weirdWords.txt")
dict_counter.calculateFreqs()