#include <iostream>

using namespace std;

int abs_value_6_5(int i) {
    return i >= 0 ? i : -i;
}

int main_6_5() {
    for (int i; cout << "Please enter a number :" << endl, cin >> i;) {
        cout << "Result: " << abs_value_6_5(i) << endl;
    }

    return 0;
}