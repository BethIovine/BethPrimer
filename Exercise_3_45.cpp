#include <iostream>

using namespace std;

int main_3_45() {
    int arr[3][4] = {
            {0, 1, 2,  3},
            {4, 5, 6,  7},
            {8, 9, 10, 11}
    };

    for (auto &a:arr) {
        for (int n:a) {
            cout << n << "  ";
        }
    }
    cout << endl;

    for (auto p = arr; p != arr + 3; ++p) {
        for (int *i = *p; i != *p + 4; ++i) {
            cout << *i << "  ";
        }
    }
    cout << endl;

    return 0;
}
