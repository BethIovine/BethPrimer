#include <iostream>

using namespace std;

int main_5_25() {

    for (int a, b; cout << "Please enter two numbers:" << endl, cin >> a >> b;) {
        try {
            if (b == 0) throw runtime_error("divisor is zero.");
            cout << "The result is :" << a / b << endl;
        } catch (runtime_error err) {
            cout << err.what() << endl << "Try again? type y or n:" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n') break;
        }
    }

    return 0;
}