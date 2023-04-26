#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int integers[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int n = sizeof(integers) / sizeof(integers[0]);
    int primes[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(integers[i])) {
            primes[count++] = integers[i];
        }
    }
    for (int i = 0; i < count; i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
    return 0;
}