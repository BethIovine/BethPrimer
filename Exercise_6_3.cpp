#include <iostream>

using namespace std;

int fact_6_3(int i) {
    if (i < 0) {
        runtime_error err("Input should not be negative");
        cout << err.what() << endl;
        throw err;
    }
    return i > 1 ? i * fact_6_3(i - 1) : 1;
}

int main_6_3() {
    cout << boolalpha << (120 == fact_6_3(5)) << endl;
    return 0;
}