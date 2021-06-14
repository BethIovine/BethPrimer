#include <iostream>

using namespace std;

int main_10_14() {
    auto add = [](int i, int j) { return i + j; };

    cout << add(1, 2) << endl;

    return 0;
}