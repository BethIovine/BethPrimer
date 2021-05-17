#include <iostream>

using namespace std;

int main_5_23() {
    int a, b;
    cout << "Please enter two numbers to divide:" << endl;

    cin >> a >> b;
    if (b == 0) cerr << "error:zero divided" << endl;
    else cout << a / b << endl;

    return 0;
}