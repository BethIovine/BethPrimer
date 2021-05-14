#include <iostream>
#include <vector>

using namespace std;

int main_3_35() {
    const int size = 10;
    int arr1[size];
    for (int i = 0; i < size; ++i) arr1[i] = 10 * i;
    for (int i = 0; i < size; ++i)cout << arr1[i] << "  ";
    cout << endl;

    for (int *p = arr1; p != arr1 + size; ++p) *p = 0;
    for (int i = 0; i < size; ++i)cout << arr1[i] << "  ";
    cout << endl;

    return 0;
}
