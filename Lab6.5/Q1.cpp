#include <iostream>
#include <array>

using namespace std;
const int MAX_SIZE = 5;

array<int, MAX_SIZE> list1 = {10, 20, 30, 40, 50};
array<int, MAX_SIZE> list2 = {30, 40, 50, 60, 70};

array<int, MAX_SIZE> function(array<int, MAX_SIZE> list1, array<int, MAX_SIZE> list2) {
    array<int, MAX_SIZE> intersection_list = {};
    int index = 0;

    for (int i = 0; i < MAX_SIZE; i++) {
        int x = list1[i];
        bool found = false;
        for (int j = 0; j < MAX_SIZE; j++) {
            if (x == list2[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            bool already_in_list = false;
            for (int k = 0; k < index; k++) {
                if (x == intersection_list[k]) {
                    already_in_list = true;
                    break;
                }
            }
            if (!already_in_list) {
                intersection_list[index] = x;
                index++;
            }
        }
    }
    return intersection_list;
}

int main() {
    array<int, MAX_SIZE> result = function(list1, list2);

    for (int i = 0; i < MAX_SIZE; i++) {
        if (result[i] == 0) {
            break;
        }
        cout << result[i] << " ";
    }
    return 0;
}
