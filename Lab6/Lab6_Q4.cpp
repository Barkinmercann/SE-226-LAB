#include <iostream>
using namespace std;
double result = 0;
int n;

double totalizer() {
    cout << "Enter n: ";
    cin >> n;
    if (n == 1) {
        result = result + (((-1) ^ 2 )/ 1);
    }
    else {
        totalizer();
        result = result + (((-1) ^ (n + 1)) / n);
    }
    cout << "Result: ";
    return result;
}

int main() {
    cout<< totalizer();

    return 0;
}
