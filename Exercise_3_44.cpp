#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main_3_44() {
    int arr[3][4] = {
            {0, 1, 2,  3},
            {4, 5, 6,  7},
            {8, 9, 10, 11}
    };

    using int_array = int[4];

    for (int_array &a:arr) {
        for (int n:a) {
            cout << n << "  ";
        }
    }
    cout << endl;

    for (int_array *p = arr; p != arr + 3; ++p) {
        for (int *i = *p; i != *p + 4; ++i) {
            cout << *i << "  ";
        }
    }
    cout << endl;

    return 0;
}
