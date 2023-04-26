#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string anagrams(string word, string word_list[], int n) {
    string char_list = "";
    string anagram_list = "";
    for (char c : word) {
        char_list += c;
    }
    sort(char_list.begin(), char_list.end());
    for (int i = 0; i < n; i++) {
        string x = word_list[i];
        string x_list = "";
        for (char y : x) {
            x_list += y;
        }
        sort(x_list.begin(), x_list.end());
        if (char_list == x_list) {
            anagram_list += x + " ";
        }
    }
    return anagram_list;
}

int main() {
    string words[] = {"enlist", "google", "inlets", "banana"};
    int n = sizeof(words)/sizeof(words[0]);
    string word = "listen";
    cout << anagrams(word, words, n);
    return 0;
}