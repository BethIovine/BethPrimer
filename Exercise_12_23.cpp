#include <iostream>

using namespace std;

int main_12_23() {
    size_t size;
    cout << "Enter the size of string: " << endl;
    cin >> size;
    cin.ignore();

    char *input = new char[size + 1];
    cout << "Enter the string:" << endl;
    cin.get(input, size + 1);
    cout << input << endl;

    delete[] input;
    return 0;
}