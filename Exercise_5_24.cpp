#include <iostream>

using namespace std;

int main_5_24() {
    int a, b;
    cout << "Please enter two numbers to divide:" << endl;

    cin >> a >> b;
    if (b == 0) throw runtime_error("divisor is zero");
    cout << a / b << endl;

    return 0;
}
