#include <iostream>

using namespace std;

int fact_6_4(int i) {
    if (i < 0) {
        runtime_error err("Input should not be negative");
        cout << err.what() << endl;
        throw err;
    }
    return i > 1 ? i * fact_6_4(i - 1) : 1;
}

int main_6_4() {
    for (int i; cout << "Please enter a number with in [1,13):" << endl, cin >> i;) {
        if (i <= 0 || i > 12) {
            cout << "Out of range" << endl;
        } else {
            cout << "Result: " << fact_6_4(i) << endl;
        }
    }

    return 0;
}