#include <iostream>
using namespace std;
double result = 0;

double totalizer(int n) {

    if (n == 1) {
        result = result + (((-1) ^ 2 )/ 1);
    }
    else {
        totalizer(n - 1);
        result = result + (((-1) ^ (n + 1)) / n);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Result: " << totalizer(n) << endl;
    return 0;
}