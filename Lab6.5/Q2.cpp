#include <iostream>
#include <string>
using namespace std;

const int Size = 5;
string films[Size] = {"inception", "interstellar", "tenet", "memento", "dunkirk"};

void palindrome_films(string films[], int size) {
    for (int i = 0; i < size; i++) {
        string film = films[i];
        string reversed_film(film.rbegin(), film.rend());
        if (film == reversed_film) {
            cout << film << endl;
        }
    }
}

int main() {
    palindrome_films(films, Size);
    return 0;
}