#include <iostream>

using namespace std;

int main_1_16() {
    int sum = 0, val = 0;

    cout << "Enter numbers continuously:";
    while (cin >> val) {
        sum += val;
    }
    cout << "the sum of numbers is " << sum << endl;

    return 0;
}
