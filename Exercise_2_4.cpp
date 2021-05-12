#include <iostream>

using namespace std;

int main_2_4() {
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;

    // Don’t Mix Signed and Unsigned Types
    // It is essential to remember that signed values are automatically converted to unsigned.
    cout << i - u2 << endl;
    cout << u - i2 << endl;

    return 0;
}
